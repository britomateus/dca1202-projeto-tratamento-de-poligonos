#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"
using namespace std;


int main()
{
    Retangulo ret(5,5,5,5);
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
    ret.imprime();
}






