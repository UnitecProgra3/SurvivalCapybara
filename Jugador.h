#ifndef JUGADOR_H
#define JUGADOR_H

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

class Jugador
{
    public:
        SDL_Renderer* renderer;
        SDL_Texture *texture;
        SDL_Rect rect;
        Jugador(SDL_Renderer* renderer);
        virtual ~Jugador();
        void dibujar();
        void logica();
    protected:
    private:
};

#endif // JUGADOR_H
