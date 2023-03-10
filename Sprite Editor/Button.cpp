#include "Button.h"

using namespace std;

/*
    CONSTRUCTOR
*/
Button::Button()
{

}

/*
    DESTRUCTOR
*/
Button::~Button()
{
    if(Text)
    {
        SDL_DestroyTexture(Text);
    }
}

void Button::Render(SDL_Renderer *Renderer)
{
    uint8_t rb, gb, bb, ab; //Backup color.
    int xp = (ResW != nullptr) ? ((*ResW) - w + x) : x;
    int yp = (ResH != nullptr) ? ((*ResH) - h + y) : y;
    if(!Renderer){return;}
    SDL_GetRenderDrawColor(Renderer, &rb, &gb, &bb, &ab); //Save render draw color.
    SDL_Rect Rect = {xp, yp, w, h};
    SDL_SetRenderDrawColor(Renderer, r, g, b, a); //Set color of background.
    SDL_RenderFillRect(Renderer, &Rect);
    if(Text) //Render text if it's not empty.
    {
        Rect = {(int)(xp + ((w - tw) / 2.0)), (int)(yp + ((h - th) / 2.0)), tw, th};
        SDL_RenderCopy(Renderer, Text, NULL, &Rect);
    }
    if(DrawLine)
    {
        SDL_SetRenderDrawColor(Renderer, 255, 255, 255, 255); //Draw white Line.
        SDL_RenderDrawRect(Renderer, &Rect);
    }
    SDL_SetRenderDrawColor(Renderer, rb, gb, bb, ab); //Restore render draw color.
    return;
}

/*
    Creates texture from given text.
    Text is current text color. Assumes *Font is not nullptr.
*/
void Button::SetText(SDL_Renderer *Renderer, string NewText)
{
    if(!Renderer){return;}
    tw = 0; th = 0;
    if(Text) //Free text texture.
    {
        SDL_DestroyTexture(Text);
        Text = nullptr;
    }
    if(!NewText.empty() && Font)
    {
        SDL_Color TextColor; //Text will be black.
        TextColor.r = rte; TextColor.g = gte; TextColor.b = bte;
        SDL_Surface *TextSurface = TTF_RenderText_Blended(*Font, NewText.c_str(), TextColor);
        if(TextSurface)
        {
            Text = SDL_CreateTextureFromSurface(Renderer, TextSurface);
            TTF_SizeText(*Font, NewText.c_str(), &tw, &th); //Get text width and height.
            tw /= GUI_FONT_SCALE; th /= GUI_FONT_SCALE;
            SDL_FreeSurface(TextSurface);
        }
    }
    return;
}
void Button::SetColor(int R, int G, int B, int A)
{
    r = R; g = G; b = B; a = A;
    return;
}

void Button::SetTextColor(int R, int G, int B)
{
    rte = R; gte = G; bte = B;
    return;
}

/*
    Returns true if X and Y are inside the button.
*/
bool Button::Inside(int X, int Y)
{
    int xp = (ResW != nullptr) ? ((*ResW) - w + x) : x;
    int yp = (ResH != nullptr) ? ((*ResH) - h + y) : y;

    if((X >= xp) && (X <= (xp + w)) && (Y >= yp) && (Y <= (yp + h)))
    {
        return true;
    }
    return false;
}



