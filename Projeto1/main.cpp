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
    cout << "Area do retangulo: " << ret.area() << endl<<endl;
    cout << "Tranladar o retangulo ";
    ret.imprime();
    cout << "em 1 na coordernada x e 2 na coordenada y " <<endl;
    cout << "retangulo com translacao: ";
    ret.translada(1,2);
    ret.imprime();

    cout << endl;

    cout << "Rotacao do retangulo "<<endl;
    cout << "Pontos iniciais"<<endl;
    ret.imprime();
    cout  << "Apos a rotacao "<<endl;
    ret.rotaciona(M_PI, p1);
    ret.imprime();
}






