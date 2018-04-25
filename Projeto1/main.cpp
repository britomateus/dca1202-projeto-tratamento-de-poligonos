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
    centro.imprime();

    cout << "Area: " << retangulo.area()<<endl;

    cout << "Transladar em (-3,4): ";
    ret.translada(-3,4);
    ret.imprime();

    cout << "Area depois da translacao: " << ret.area()<<endl;

    cout<< "Rotacao "<<endl;
    ret.rotaciona(M_PI/6, cm);
    ret.imprime();
    
    /* Retangulo ret(5,5,5,5);
    Point p1;

    cout << "Quantidade de Vertices: "<< ret.getNumPoints() <<endl<<endl;
    cout << "Area: " << ret.area() << endl<<endl;
    cout << "Transladar ";
    ret.imprime();
    cout << "em 2 na coordernada x e 2 na coordenada y " <<endl;
    cout << "depois da translacao: ";
    ret.translada(2,2);
    ret.imprime();

    cout << endl;

    cout << "Rotacao"<<endl;
    cout << "Pontos iniciais"<<endl;
    ret.imprime();
    cout  << "Apos a rotacao "<<endl;
    ret.rotaciona(M_PI, p1);
    ret.imprime(); */
}


Point centro(float x, float y, float largura, float altura){
    Point cm(0,0);

    float coordenada1, coordenada2;

    coordenada2= (2*x-altura)/2;
    coordenada1= (2*y+largura)/2;

    cm.setXY(coordenada1,coordenada2);
    return cm;
}



