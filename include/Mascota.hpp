#pragma once
#include<Alimento.hpp>

class Mascota
{
private:
    int vida;
public:
    Mascota() {this->vida=0;
    }
    ~Mascota() {}
    void comer(Alimento alimento){
        vida+= alimento.ExtraerEnergia();
    

};