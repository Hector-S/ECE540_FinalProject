#ifndef EDITOR_H_INCLUDED
#define EDITOR_H_INCLUDED

#include "General.h"

#define BR_RED      1
#define BR_GREEN    2
#define BR_BLUE     3
#define BR_ALPHA    4

#define SPR_PIX(x,y) Sprite[y*Width+x] //Get pixel in sprite array.

class Editor
{
    public:
        Editor(); //CONSTUCTOR
        ~Editor(); //DESTRUCTOR
        void Render(SDL_Renderer* Renderer, int ResW, int ResH);
        void Paint(int MouseX, int MouseY, int ResW, int ResH); //Will paint a pixel at the given mouse coordinates if possible.
        void Copy(int MouseX, int MouseY, int ResW, int ResH, int PaletteN); //Will set brush to whatever pixel color as at the given coordinates if possible.
        void CopyBrush(int PaletteN); //Above but copies Brush's current value into a palette.
        void BrushCopy(int PaletteN); //Above but the other way.
        void Clear(); //Will clear the sprite to all 0s.
        bool Save(); //Saves sprite in my own file format to load, ".spr". Returns true on success.
        bool Load(); //Loads only files with the ".spr" extension. Returns true on success.
        bool Export(); //Exports sprite as a .coe file. Returns true on success.
        uint8_t FourToEightBit(uint8_t Value);
        char Brush[5] = {0, 0, 0, 0, 0}; //I'm wasting the space for convenience. Sorry.
        char Palette[8][5]; //Color palette.
        std::string FileName = "Unnamed"; //File to be saved/loaded.
        float Zoom = 15;
    private:
        int Width = 16;
        int Height = 16;
        int16_t *Sprite; //Pointer to sprite data.
};

#endif // EDITOR_H_INCLUDED
