#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"
using namespace std;

Point centro(float x, float y, float largura, float altura);

int main()
{
    Retangulo retangulo(0,0,4,3);
    Point cm;
    retangulo.imprime();

    cm = centro(0,0,3,4);
    cm.imprime();

    cout << "Area: " << retangulo.area()<<endl;

    cout << "Transladar em (-3,4): ";
    retangulo.translada(-3,4);
    retangulo.imprime();

    cout << "Area depois da translacao: " << retangulo.area()<<endl;

    cout<< "Rotacao "<<endl;
    retangulo.rotaciona(M_PI/6, cm);
    retangulo.imprime();
    cout<<"Area rotacionada: "<<retangulo.area()<<endl;
    

}


Point centro(float x, float y, float largura, float altura){
    Point cm(0,0);

    float coordenada1, coordenada2;

    coordenada2= (2*x-altura)/2;
    coordenada1= (2*y+largura)/2;

    cm.setXY(coordenada1,coordenada2);
    return cm;
}



