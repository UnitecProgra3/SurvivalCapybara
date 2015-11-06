#include "Proyectil.h"

Proyectil::Proyectil(list<Entidad*>* entidades)
{
    this->entidades = entidades;
    texture = IMG_Load("proyectil.png");
}

Proyectil::~Proyectil()
{
    //dtor
}

void Proyectil::dibujar()
{

}

void Proyectil::logica()
{

}
