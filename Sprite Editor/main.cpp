#include "General.h"
#include "Editor.h"
#include "Button.h"

using namespace std;

int ResW = GUI_WIDTH; //Resolution width.
int ResH = GUI_HEIGHT; //Resolution height.

SDL_Window *Window = nullptr; //The window.
SDL_Renderer* Renderer = nullptr; //The renderer.
SDL_Event Event; //To capture events.

//Initiates SDL2. Returns non-zero on failure.
int Init()
{
    //Initialize SDL.
    if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO))
    {
        SDL_Log("Unable to initialize SDL: %s\n", SDL_GetError());
        return -1;
    }
    //Initialize SDL_ttf.
    if(TTF_Init())
    {
        SDL_Log("Unable to initialize SDL_ttf: %s\n", TTF_GetError());
        SDL_Quit();
        return -3;
    }
    //Create window.
    Window = SDL_CreateWindow("16x16 Sprite Editor", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, ResW, ResH, SDL_WINDOW_RESIZABLE);
    if(!Window)
    {
        SDL_Log("Unable to create window: %s\n", SDL_GetError());
        TTF_Quit(); SDL_Quit();
        return -4;
    }
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
    //Create renderer.
    if(!Renderer)
    {
        SDL_Log("Unable to create renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(Window); TTF_Quit(); SDL_Quit();
        return -5;
    }
    //Initiate settings.
    /*SDL_Surface *Icon = IMG_Load("Media/RVS_Logo.png");
    if(Icon)
    {
        SDL_SetWindowIcon(Window, Icon);
        SDL_FreeSurface(Icon);
    }*/
    SDL_SetRenderDrawBlendMode(Renderer, SDL_BLENDMODE_BLEND); //Activate color blending.
    SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "0" ); //Enable anti-aliasing.
    return 0; //Success.
}

//Quits SDL. Returns non-zero on failure.
int Exit()
{
    //Destroy window and renderer.
    SDL_DestroyRenderer(Renderer);
    SDL_DestroyWindow(Window);
    Renderer = nullptr;
    Window = nullptr;

    //Quit SDL.
    TTF_Quit();
    SDL_Quit();
    return 0;
}

int main( int argc, char * argv[] )
{
    Init();
    TTF_Font *Font = TTF_OpenFont(GUI_FONT, GUI_FONT_SIZE); //Font used in gui.
    if(!Font) //If we failed to load the font.
    {
        cout << "GUI Error: Failed to load font '" << GUI_FONT << "'." << endl;
        Exit();
        return -1;
    }

    int quit = 0; //1 = End program.
    int MouseX = 0, MouseY = 0; //Mouse position.
    int SelectedSlider = 0;
    bool Painting = false;
    bool GettingInput = false;
    bool BrushMode = true; //If false, in copy/eye-drop mode.
    char buffer[50];
    //bool GettingInput = false; //If true, user is typing into GUI.
    //string InputString; //Holds string input
    Button BUT_Increment;
    BUT_Increment.x = -25; BUT_Increment.y = 0; BUT_Increment.w = 25; BUT_Increment.h = 25;
    BUT_Increment.ResW = &ResW;
    BUT_Increment.Font = &Font;
    BUT_Increment.SetColor(150, 255, 150, 200);
    BUT_Increment.SetTextColor(0, 0, 0);
    BUT_Increment.SetText(Renderer, "+");
    Button BUT_Decrement;
    BUT_Decrement.x = 0; BUT_Decrement.y = 0; BUT_Decrement.w = 25; BUT_Decrement.h = 25;
    BUT_Decrement.ResW = &ResW;
    BUT_Decrement.Font = &Font;
    BUT_Decrement.SetColor(255, 150, 150, 200);
    BUT_Decrement.SetTextColor(0, 0, 0);
    BUT_Decrement.SetText(Renderer, "-");
    Button BUT_Clear;
    BUT_Clear.x = -50; BUT_Clear.y = 0; BUT_Clear.w = 95; BUT_Clear.h = 25;
    BUT_Clear.ResW = &ResW;
    BUT_Clear.Font = &Font;
    BUT_Clear.SetColor(255, 255, 255, 200);
    BUT_Clear.SetTextColor(0, 0, 0);
    BUT_Clear.SetText(Renderer, "Clear");
    Button BUT_RedSlider;
    BUT_RedSlider.x = 5; BUT_RedSlider.y = 5; BUT_RedSlider.w = 10; BUT_RedSlider.h = 50;
    BUT_RedSlider.SetColor(255, 0, 0, 255);
    Button BUT_GreenSlider;
    BUT_GreenSlider.x = 5; BUT_GreenSlider.y = 60; BUT_GreenSlider.w = 10; BUT_GreenSlider.h = 50;
    BUT_GreenSlider.SetColor(0, 255, 0, 255);
    Button BUT_BlueSlider;
    BUT_BlueSlider.x = 5; BUT_BlueSlider.y = 115; BUT_BlueSlider.w = 10; BUT_BlueSlider.h = 50;
    BUT_BlueSlider.SetColor(0, 0, 255, 255);
    Button BUT_AlphaSlider;
    BUT_AlphaSlider.x = 100; BUT_AlphaSlider.y = 170; BUT_AlphaSlider.w = 10; BUT_AlphaSlider.h = 50;
    BUT_AlphaSlider.SetColor(0, 0, 0, 180); //Have alpha slider start at max value for convenience.
    Button BUT_FileName;
    BUT_FileName.x = 0; BUT_FileName.y = 0; BUT_FileName.w = 300; BUT_FileName.h = 30;
    BUT_FileName.ResH = &ResH;
    BUT_FileName.SetColor(0, 0, 0, 255);
    BUT_FileName.Font = &Font;
    BUT_FileName.SetTextColor(255, 255, 255);
    BUT_FileName.SetText(Renderer, "Unnamed");
    Button BUT_Save;
    BUT_Save.x = 300; BUT_Save.y = 0; BUT_Save.w = 75; BUT_Save.h = 30;
    BUT_Save.ResH = &ResH;
    BUT_Save.SetColor(50, 50, 150, 255);
    BUT_Save.Font = &Font;
    BUT_Save.SetTextColor(255, 255, 255);
    BUT_Save.SetText(Renderer, "Save");
    Button BUT_Load;
    BUT_Load.x = 375; BUT_Load.y = 0; BUT_Load.w = 75; BUT_Load.h = 30;
    BUT_Load.ResH = &ResH;
    BUT_Load.SetColor(150, 50, 50, 255);
    BUT_Load.Font = &Font;
    BUT_Load.SetTextColor(255, 255, 255);
    BUT_Load.SetText(Renderer, "Load");
    Button BUT_Export;
    BUT_Export.x = 450; BUT_Export.y = 0; BUT_Export.w = 100; BUT_Export.h = 30;
    BUT_Export.ResH = &ResH;
    BUT_Export.SetColor(50, 150, 50, 255);
    BUT_Export.Font = &Font;
    BUT_Export.SetTextColor(255, 255, 255);
    BUT_Export.SetText(Renderer, "Export");
    Button BUT_PixelData;
    BUT_PixelData.x = 0; BUT_PixelData.y = -30; BUT_PixelData.w = 150; BUT_PixelData.h = 30;
    BUT_PixelData.ResH = &ResH;
    BUT_PixelData.SetColor(255, 255, 255, 200);
    BUT_PixelData.Font = &Font;
    BUT_PixelData.SetTextColor(0, 0, 0);
    Button BUT_BMode;
    BUT_BMode.x = 0; BUT_BMode.y = 250; BUT_BMode.w = 185; BUT_BMode.h = 30;
    BUT_BMode.SetColor(150, 255, 150, 200);
    BUT_BMode.Font = &Font;
    BUT_BMode.SetTextColor(255, 255, 255);
    BUT_BMode.SetText(Renderer, "Mode: Brush");
    Button BUT_Palette[8]; //Color palette has 8 slots.
    for(int i = 0; i < 8; ++i)
    {
        BUT_Palette[i].x = 0; BUT_Palette[i].y = 35 + i*32; BUT_Palette[i].w = 185; BUT_Palette[i].h = 30;
        BUT_Palette[i].ResW = &ResW;
        BUT_Palette[i].DrawLine = true;
    }

    Editor SpriteEditor;
    SpriteEditor.Brush[BR_ALPHA] = 15; //Have alpha value at max at start for convenience.
    SDL_RaiseWindow(Window); //Put focus on the window.

    SDL_Rect Rect = {0, 0, 0, 0};
    while(!quit)
    {
        if(SpriteEditor.Zoom < 0){SpriteEditor.Zoom = 0;}
        if(GettingInput)
        {
            BUT_FileName.SetText(Renderer, SpriteEditor.FileName);
        }
        if(Painting)
        {
            SpriteEditor.Paint(MouseX, MouseY, ResW, ResH);
        }
        switch(SelectedSlider)
        {
            case BR_RED:
                if(MouseX < 5){BUT_RedSlider.x = 0;} else
                if(MouseX > 105){BUT_RedSlider.x = 100;} else
                {BUT_RedSlider.x = MouseX - 5;}
                SpriteEditor.Brush[BR_RED] = 15 * BUT_RedSlider.x / 100.0;
                break;
            case BR_GREEN:
                if(MouseX < 5){BUT_GreenSlider.x = 0;} else
                if(MouseX > 105){BUT_GreenSlider.x = 100;} else
                {BUT_GreenSlider.x = MouseX - 5;}
                SpriteEditor.Brush[BR_GREEN] = 15 * BUT_GreenSlider.x / 100.0;
                break;
            case BR_BLUE:
                if(MouseX < 5){BUT_BlueSlider.x = 0;} else
                if(MouseX > 105){BUT_BlueSlider.x = 100;} else
                {BUT_BlueSlider.x = MouseX - 5;}
                SpriteEditor.Brush[BR_BLUE] = 15 * BUT_BlueSlider.x / 100.0;
                break;
            case BR_ALPHA:
                if(MouseX < 5){BUT_AlphaSlider.x = 0;} else
                if(MouseX > 105){BUT_AlphaSlider.x = 100;} else
                {BUT_AlphaSlider.x = MouseX - 5;}
                SpriteEditor.Brush[BR_ALPHA] = 15 * BUT_AlphaSlider.x / 100.0;
                break;
        }

        SDL_SetRenderDrawColor(Renderer, 30, 30, 30, 255); //Set screen to dark grey.
        SDL_RenderClear(Renderer); //Clear renderer with current draw color.
        SDL_Delay(20); //Don't burn out the CPU/GPU.

        //Render Editor.
        SpriteEditor.Render(Renderer, ResW, ResH);

        //Set Slider Color Bars.
        Rect = {5, 20, 100, 20};
        SDL_SetRenderDrawColor(Renderer, SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_RED]), 0, 0, 255); //Set color of background.
        SDL_RenderFillRect(Renderer, &Rect);
        Rect = {5, 75, 100, 20};
        SDL_SetRenderDrawColor(Renderer, 0, SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_GREEN]), 0, 255); //Set color of background.
        SDL_RenderFillRect(Renderer, &Rect);
        Rect = {5, 130, 100, 20};
        SDL_SetRenderDrawColor(Renderer, 0, 0, SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_BLUE]), 255); //Set color of background.
        SDL_RenderFillRect(Renderer, &Rect);
        Rect = {5, 185, 100, 20};
        SDL_SetRenderDrawColor(Renderer, SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_RED]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_GREEN]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_BLUE]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_ALPHA])); //Set color of background.
        SDL_RenderFillRect(Renderer, &Rect);
        //Box to see pixel color without alpha channel.
        Rect = {115, 20, 75, 75};
        SDL_SetRenderDrawColor(Renderer, SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_RED]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_GREEN]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_BLUE]),
                               255); //Set color of background.
        SDL_RenderFillRect(Renderer, &Rect);
        //Box to see pixel color with alpha channel.
        Rect = {115, 130, 75, 75};
        SDL_SetRenderDrawColor(Renderer, SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_RED]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_GREEN]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_BLUE]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Brush[BR_ALPHA])); //Set color of background.
        SDL_RenderFillRect(Renderer, &Rect);
        //Render palette.
        for(int i = 0; i < 8; ++i)
        {
            BUT_Palette[i].SetColor(SpriteEditor.FourToEightBit(SpriteEditor.Palette[i][BR_RED]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Palette[i][BR_GREEN]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Palette[i][BR_BLUE]),
                               SpriteEditor.FourToEightBit(SpriteEditor.Palette[i][BR_ALPHA]));
        }

        BUT_Increment.Render(Renderer);
        BUT_Decrement.Render(Renderer);
        BUT_Clear.Render(Renderer);
        BUT_RedSlider.Render(Renderer);
        BUT_GreenSlider.Render(Renderer);
        BUT_BlueSlider.Render(Renderer);
        BUT_AlphaSlider.Render(Renderer);
        sprintf(buffer, "PD = %04X", SpriteEditor.Brush[BR_RED]
                | SpriteEditor.Brush[BR_GREEN] << 4
                | SpriteEditor.Brush[BR_BLUE] << 8
                | SpriteEditor.Brush[BR_ALPHA] << 12);
        BUT_PixelData.SetText(Renderer, (const char *)buffer);
        BUT_PixelData.Render(Renderer);
        for(int i = 0; i < 8; ++i)
        {
            BUT_Palette[i].Render(Renderer);
        }

        //Render filename button.
        if(GettingInput)
        {
            BUT_FileName.SetColor(50, 150, 75, 255);
        }
        else
        {
            BUT_FileName.SetColor(0, 0, 0, 255);
        }
        BUT_FileName.Render(Renderer);
        BUT_Save.Render(Renderer);
        BUT_Load.Render(Renderer);
        BUT_Export.Render(Renderer);
        BUT_BMode.Render(Renderer);

        SDL_RenderPresent(Renderer); //Update the screen.

        //Respond to input.
        SDL_GetMouseState(&MouseX, &MouseY);
        while(SDL_PollEvent(&Event)) //Clear event queue each frame.
        {
            switch(Event.type)
            {
                case SDL_QUIT: //User wants to quit.
                    quit = 1;
                    break;
                case SDL_WINDOWEVENT:
                    switch(Event.window.event)
                    {
                        case SDL_WINDOWEVENT_RESIZED: //If window was resized, update resolution.
                            SDL_GetWindowSize(Window, &ResW, &ResH);
                            break;
                    }
                    break;
                case SDL_KEYDOWN: //A button was pressed.
                    switch(Event.key.keysym.sym)
                    {
                        case SDLK_ESCAPE: //User wants to quit.
                            if(!GettingInput){quit = 1;}
                            else {GettingInput = false; SDL_StopTextInput();}
                            break;
                        case SDLK_EQUALS:
                            if(!GettingInput){SpriteEditor.Zoom += 1;}
                            break;
                        case SDLK_MINUS:
                            if(!GettingInput){SpriteEditor.Zoom -= 1;}
                            break;
                        case SDLK_RETURN:
                            if(GettingInput)
                            {
                                GettingInput = false;
                                SDL_StopTextInput();
                            }
                            break;
                        case SDLK_BACKSPACE:
                            if(!SpriteEditor.FileName.empty() && GettingInput)
                            {
                                SpriteEditor.FileName.pop_back(); //Remove last character.
                            }
                            break;
                    }
                    break;
                case SDL_MOUSEBUTTONUP: //Lifting mouse button after click.
                    switch(Event.button.button)
                    {
                        case SDL_BUTTON_LEFT:
                            if(BUT_Increment.Inside(MouseX, MouseY) && !SelectedSlider)
                            {
                                SpriteEditor.Zoom += 1;
                            }
                            else if(BUT_Decrement.Inside(MouseX, MouseY) && !SelectedSlider)
                            {
                                SpriteEditor.Zoom -= 1;
                            }
                            else if(BUT_BMode.Inside(MouseX, MouseY) && !SelectedSlider)
                            {
                                BrushMode = !BrushMode;
                                if(BrushMode)
                                {
                                    BUT_BMode.SetColor(150, 255, 150, 200);
                                    BUT_BMode.SetText(Renderer, "Mode: Brush");
                                }
                                else
                                {
                                    BUT_BMode.SetColor(150, 150, 255, 200);
                                    BUT_BMode.SetText(Renderer, "Mode: Copy");
                                }
                            }
                            else if(BUT_FileName.Inside(MouseX, MouseY) && !SelectedSlider)
                            {
                                GettingInput = true;
                                SDL_StartTextInput();
                            }
                            else if(BUT_Clear.Inside(MouseX, MouseY) && !SelectedSlider)
                            {
                                SpriteEditor.Clear();
                            }
                            else if(BUT_Save.Inside(MouseX, MouseY) && !SelectedSlider)
                            {
                                SpriteEditor.Save();
                            }
                            else if(BUT_Load.Inside(MouseX, MouseY) && !SelectedSlider)
                            {
                                SpriteEditor.Load();
                            }
                            else if(BUT_Export.Inside(MouseX, MouseY) && !SelectedSlider)
                            {
                                SpriteEditor.Export();
                            }
                            else if(!BrushMode && !SelectedSlider)
                            {
                                SpriteEditor.Copy(MouseX, MouseY, ResW, ResH, 0);
                                BUT_RedSlider.x = SpriteEditor.Brush[BR_RED] / 15.0 * 100.0;
                                BUT_GreenSlider.x = SpriteEditor.Brush[BR_GREEN] / 15.0 * 100.0;
                                BUT_BlueSlider.x = SpriteEditor.Brush[BR_BLUE] / 15.0 * 100.0;
                                BUT_AlphaSlider.x = SpriteEditor.Brush[BR_ALPHA] / 15.0 * 100.0;
                            }
                            else if(!SelectedSlider)
                            {
                                for(int i = 0; i < 8; ++i)
                                {
                                    if(BUT_Palette[i].Inside(MouseX, MouseY))
                                    {
                                        SpriteEditor.BrushCopy(i);
                                        BUT_RedSlider.x = SpriteEditor.Brush[BR_RED] / 15.0 * 100.0;
                                        BUT_GreenSlider.x = SpriteEditor.Brush[BR_GREEN] / 15.0 * 100.0;
                                        BUT_BlueSlider.x = SpriteEditor.Brush[BR_BLUE] / 15.0 * 100.0;
                                        BUT_AlphaSlider.x = SpriteEditor.Brush[BR_ALPHA] / 15.0 * 100.0;
                                        break;
                                    }
                                }
                            }
                            SelectedSlider = 0;
                            Painting = false;
                            break;
                        case SDL_BUTTON_RIGHT:
                            if(!SelectedSlider)
                            {
                                for(int i = 0; i < 8; ++i)
                                {
                                    if(BUT_Palette[i].Inside(MouseX, MouseY))
                                    {
                                        SpriteEditor.CopyBrush(i);
                                    }
                                }
                            }
                            break;
                    }
                    break;
                case SDL_MOUSEBUTTONDOWN: //Mouse button pushed down.
                    switch(Event.button.button)
                    {
                        case SDL_BUTTON_LEFT:
                            if(BUT_RedSlider.Inside(MouseX, MouseY)) {SelectedSlider = BR_RED;} else
                            if(BUT_GreenSlider.Inside(MouseX, MouseY)) {SelectedSlider = BR_GREEN;} else
                            if(BUT_BlueSlider.Inside(MouseX, MouseY)) {SelectedSlider = BR_BLUE;} else
                            if(BUT_AlphaSlider.Inside(MouseX, MouseY)) {SelectedSlider = BR_ALPHA;}
                            else if((!SelectedSlider) && BrushMode)
                            {
                                Painting = true;
                            }
                            break;
                    }
                    break;
                case SDL_TEXTINPUT:
                    SpriteEditor.FileName += Event.text.text;
                    break;
            }
        }
    }
    if(Font)
    {
        TTF_CloseFont(Font); //Free font.
    }
    Exit();
    return 0;
}
