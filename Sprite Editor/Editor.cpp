#include "Editor.h"

#include <fstream>

using namespace std;

/*
    CONSTUCTOR
*/
Editor::Editor()
{
    Sprite = new int16_t[Width*Height];
    for(int i = 0; i < Height; ++i) //Set every pixel in sprite equal to zero.
    {
        for(int j = 0; j < Width; ++j)
        {
            SPR_PIX(j,i) = 0x0000;
        }
    }
    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            Palette[i][j] = 0; //Set color palette to all 0s.
        }
    }
    //Set some default colors for palette.
    Palette[0][BR_RED] = 0; Palette[0][BR_GREEN] = 0; Palette[0][BR_BLUE] = 0; Palette[0][BR_ALPHA] = 15;
    Palette[1][BR_RED] = 15; Palette[1][BR_GREEN] = 15; Palette[1][BR_BLUE] = 15; Palette[1][BR_ALPHA] = 15;
}

/*
    DESTRUCTOR
*/
Editor::~Editor()
{

}

uint8_t Editor::FourToEightBit(uint8_t Value)
{
    return Value / 15.0 * 255;
}

void Editor::Render(SDL_Renderer* Renderer, int ResW, int ResH)
{
    if(!Renderer){return;}
    int XOffset = (ResW - Width*Zoom) / 2;
    int YOffset = (ResH - Height*Zoom) / 2;
    int PixelSize = 1*Zoom;
    uint16_t BackgroundPixel[2];
    BackgroundPixel[0] = 0x3FFF; //White.
    BackgroundPixel[1] = 0x3888; //Gray.
    uint8_t r = 0, g = 0, b = 0, a = 0;
    bool BackWhite = true;

    SDL_GetRenderDrawColor(Renderer, &r, &g, &b, &a); //Save render draw color.
    for(int i = 0; i < Height; ++i)
    {
        BackWhite = !BackWhite;
        for(int j = 0; j < Width; ++j)
        {
            SDL_Rect Rect = {(int)(XOffset + j*PixelSize), (int)(YOffset + i*PixelSize), PixelSize, PixelSize};
            BackWhite = !BackWhite;
            //Draw background pixel pattern color.
            SDL_SetRenderDrawColor(Renderer,
                                   FourToEightBit(BackgroundPixel[BackWhite] & 0x000F),
                                   FourToEightBit(BackgroundPixel[BackWhite] >> 4 & 0x000F),
                                   FourToEightBit(BackgroundPixel[BackWhite] >> 8 & 0x000F),
                                   FourToEightBit(BackgroundPixel[BackWhite] >> 12 & 0x000F));
            SDL_RenderFillRect(Renderer, &Rect);
            //Draw Pixel color.
            SDL_SetRenderDrawColor(Renderer,
                                   FourToEightBit(SPR_PIX(j,i) & 0x000F),
                                   FourToEightBit(SPR_PIX(j,i) >> 4 & 0x000F),
                                   FourToEightBit(SPR_PIX(j,i) >> 8 & 0x000F),
                                   FourToEightBit(SPR_PIX(j,i) >> 12 & 0x000F)); //Set color to black.
            SDL_RenderFillRect(Renderer, &Rect);
        }
    }
    SDL_SetRenderDrawColor(Renderer, r, g, b, a); //Restore render draw color.
    return;
}

/*
    Will paint a pixel at the given mouse coordinates if possible.
*/
void Editor::Paint(int MouseX, int MouseY, int ResW, int ResH)
{
    int XOffset = (ResW - Width*Zoom) / 2;
    int YOffset = (ResH - Height*Zoom) / 2;
    int PixelSize = 1*Zoom;
    if((MouseX < XOffset) || (MouseX > XOffset + (PixelSize*Width)) || (MouseY < YOffset) || (MouseY > YOffset + (PixelSize*Height))){return;}
    int XCoordinate = (double)(MouseX - XOffset) / (Width * PixelSize) * Width;
    int YCoordinate = (double)(MouseY - YOffset) / (Height * PixelSize) * Height;
    if(XCoordinate >= Width){XCoordinate = Width - 1;}
    if(YCoordinate >= Height){YCoordinate = Height - 1;}
    int16_t Color = 0;
    Color |= Brush[BR_RED];
    Color |= Brush[BR_GREEN] << 4;
    Color |= Brush[BR_BLUE] << 8;
    Color |= Brush[BR_ALPHA] << 12;
    SPR_PIX(XCoordinate,YCoordinate) = Color;
    return;
}

/*
    Will set brush to whatever pixel color as at the given coordinates if possible.
*/
void Editor::Copy(int MouseX, int MouseY, int ResW, int ResH, int PaletteN)
{
    int XOffset = (ResW - Width*Zoom) / 2;
    int YOffset = (ResH - Height*Zoom) / 2;
    int PixelSize = 1*Zoom;
    if((MouseX < XOffset) || (MouseX > XOffset + (PixelSize*Width)) || (MouseY < YOffset) || (MouseY > YOffset + (PixelSize*Height))){return;}
    int XCoordinate = (double)(MouseX - XOffset) / (Width * PixelSize) * Width;
    int YCoordinate = (double)(MouseY - YOffset) / (Height * PixelSize) * Height;
    if(XCoordinate >= Width){XCoordinate = Width - 1;}
    if(YCoordinate >= Height){YCoordinate = Height - 1;}
    if(PaletteN == 0)
    {
        Brush[BR_RED] = SPR_PIX(XCoordinate,YCoordinate) & 0x000F;
        Brush[BR_GREEN] = SPR_PIX(XCoordinate,YCoordinate) >> 4 & 0x000F;
        Brush[BR_BLUE] = SPR_PIX(XCoordinate,YCoordinate) >> 8 & 0x000F;
        Brush[BR_ALPHA] = SPR_PIX(XCoordinate,YCoordinate) >> 12 & 0x000F;
    }
    PaletteN -= 1;
    if((PaletteN >= 0) && (PaletteN <= 7))
    {
        Palette[PaletteN][BR_RED] = SPR_PIX(XCoordinate,YCoordinate) & 0x000F;
        Palette[PaletteN][BR_GREEN] = SPR_PIX(XCoordinate,YCoordinate) >> 4 & 0x000F;
        Palette[PaletteN][BR_BLUE] = SPR_PIX(XCoordinate,YCoordinate) >> 8 & 0x000F;
        Palette[PaletteN][BR_ALPHA] = SPR_PIX(XCoordinate,YCoordinate) >> 12 & 0x000F;
    }
    return;
}

void Editor::CopyBrush(int PaletteN)
{
    if((PaletteN >= 0) && (PaletteN <= 7))
    {
        Palette[PaletteN][BR_RED] = Brush[BR_RED];
        Palette[PaletteN][BR_GREEN] = Brush[BR_GREEN];
        Palette[PaletteN][BR_BLUE] = Brush[BR_BLUE];
        Palette[PaletteN][BR_ALPHA] = Brush[BR_ALPHA];
    }
    return;
}

void Editor::BrushCopy(int PaletteN)
{
    if((PaletteN >= 0) && (PaletteN <= 7))
    {
        Brush[BR_RED] = Palette[PaletteN][BR_RED];
        Brush[BR_GREEN] = Palette[PaletteN][BR_GREEN];
        Brush[BR_BLUE] = Palette[PaletteN][BR_BLUE];
        Brush[BR_ALPHA] = Palette[PaletteN][BR_ALPHA];
    }
    return;
}

/*
    Will clear the sprite to all 0s.
*/
void Editor::Clear()
{
    for(int i = 0; i < Height; ++i) //Set every pixel in sprite equal to zero.
    {
        for(int j = 0; j < Width; ++j)
        {
            SPR_PIX(j,i) = 0x0000;
        }
    }
    return;
}

/*
    Saves sprite in my own file format to load. ".spr"
*/
bool Editor::Save()
{
    if(FileName.empty())
    {
        printf("Save: Failed to save file as name is invalid.\n");
        return false;
    }
    ofstream File;
    File.open(FileName + ".spr", ios::binary);
    if(!File.is_open())
    {
        printf("Save: Failed to create sprite file.\n");
        return false;
    }
    for(int i =0; i < Height; ++i)
    {
        for(int j = 0; j < Width; ++j)
        {
            File.write((const char *)&SPR_PIX(j,i), 2);
        }
    }

    File.close();
    printf("Save: Filed saved.\n");
    return true;
}

/*
    Load sprite from my file format.
*/
bool Editor::Load()
{
    if(FileName.empty())
    {
        printf("Load: Failed to load file as name is invalid.\n");
        return false;
    }
    ifstream File;
    File.open(FileName + ".spr", ios::binary);
    if(!File.is_open())
    {
        printf("Load: Failed to load sprite file.\n");
        return false;
    }
    for(int i =0; i < Height; ++i)
    {
        for(int j = 0; j < Width; ++j)
        {
            File.read((char *)&SPR_PIX(j,i), 2);
        }
    }

    File.close();
    printf("Load: Filed loaded.\n");
    return true;
}

/*
    Exports sprite as a .coe file.
*/
bool Editor::Export()
{
    if(FileName.empty())
    {
        printf("Export: Failed to export file as name is invalid.\n");
        return false;
    }
    ofstream File;
    char buffer[20]; //To use sprintf.
    int SpriteNumber = 1;
    File.open(FileName + ".coe");
    if(!File.is_open())
    {
        printf("Export: Failed to export .coe file.\n");
        return false;
    }
    File << "; " + FileName + ".coe\n";
    File << "; Created with Hector's 16x16 Sprite Editor.\n";
    File << "memory_initialization_radix=16;\n";
    File << "memory_initialization_vector=\n\n";
    for(int i =0; i < Height; ++i)
    {
        for(int j = 0; j < Width; ++j)
        {
            sprintf(buffer, "%04X", SPR_PIX(j,i) & 0x0000FFFF);
            File << buffer;
            if((i == (Height - 1)) && (j == (Width - 1)))
            {
                File << ";";
            }
            else
            {
                File << ",";
            }
            if((SpriteNumber % 16 == 0) && !((i == 0) && (j == 0))) //Create a new line every 16 pixels.
            {
                File << "\n";
            }
            ++SpriteNumber;
        }
    }

    File.close();
    printf("Export: Sprite exported.\n");
    return true;
}







