#include "retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo()
{

}

Retangulo::Retangulo(float _x, float _y, float largura, float altura){

    addPoint(_x,_y);
    addPoint(_x,(_y-altura));
    addPoint((_x+largura),(_y-altura));
    addPoint((_x+largura),_y);
}




