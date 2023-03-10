#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED

#include "General.h"

#define GUI_WIDTH 640
#define GUI_HEIGHT 480
#define GUI_FONT "Media/Inconsolata.ttf" //Font used in gui.
#define GUI_FONT_SIZE 128
#define GUI_FONT_SCALE 4 //Will effectively divide size of font by 4 while keeping texture detail.

class Button
{
    public:
        Button(); //CONSTRUCTOR
        ~Button(); //DESTRUCTOR
        void Render(SDL_Renderer *Renderer); //Will render the button.
        void SetText(SDL_Renderer *Renderer, std::string NewText);
        void SetColor(int R, int G, int B, int A);
        void SetTextColor(int R, int G, int B);
        bool Inside(int X, int Y); //Returns true if X and Y are inside the button.

        int *ResW = nullptr; //If not null, button gets bound to right side.
        int *ResH = nullptr; //If not null, button gets bound to bottom.
        double x = 0; //Offset.
        double y = 0; //Offset.
        int w = 0;
        int h = 0;
        uint8_t r, g, b, a; //Button background color.
        uint8_t rte, gte, bte; //Text color.

        bool DrawLine = false; //If true, draw a black line border.
        TTF_Font **Font; //Pointer to a Font pointer.
    private:
        SDL_Texture *Text = nullptr;
        int tw = 0, th = 0; //Text width and height.
};

#endif // BUTTON_H_INCLUDED
