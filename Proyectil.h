#ifndef PROJECTIL_H
#define PROJECTIL_H

#include <list>
#include "Entidad.h"

using namespace std;

class Proyectil : public Entidad
{
    public:
        list<Entidad*>* entidades;
        SDL_Texture* texture;
        SDL_Rect* rect;
        Proyectil(list<Entidad*>* entidades);
        virtual ~Proyectil();
        void dibujar();
        void logica();
    protected:
    private:
};

#endif // PROJECTIL_H
