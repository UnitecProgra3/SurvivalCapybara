#ifndef JUGADOR_H
#define JUGADOR_H

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Jugador
{
    public:
        SDL_Renderer* renderer;
        map<string,vector<SDL_Texture*> >textures;
        string state;
        SDL_Rect rect;
        int current_texture;
        int frames;
        double x, y;
        double velocity;
        int animation_velocity;
        Jugador(SDL_Renderer* renderer);
        virtual ~Jugador();
        void dibujar();
        void logica();
    protected:
    private:
};

#endif // JUGADOR_H
