#include "Jugador.h"

Jugador::Jugador(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    this->texture = IMG_LoadTexture(renderer, "personaje.png");

    SDL_QueryTexture(this->texture, NULL, NULL, &rect.w, &rect.h);
    rect.x = 0;
    rect.y = 0;
}

Jugador::~Jugador()
{
    //dtor
}

void Jugador::dibujar()
{
    SDL_RenderCopy(renderer, texture, NULL, &rect);
}

void Jugador::logica()
{
    const Uint8* currentKeyStates = SDL_GetKeyboardState( NULL );

    if( currentKeyStates[ SDL_SCANCODE_RIGHT ] )
    {
        rect.x+=1;
    }
    if( currentKeyStates[ SDL_SCANCODE_LEFT ] )
    {
        rect.x-=1;
    }
    if( currentKeyStates[ SDL_SCANCODE_UP ] )
    {
        rect.y-=1;
    }
    if( currentKeyStates[ SDL_SCANCODE_DOWN ] )
    {
        rect.y+=1;
    }
}
