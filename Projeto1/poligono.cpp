#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

Poligono::Poligono()
{
nVert = 0;

for(int i=0; i<100; i++){
    tam[i].setXY(0.0,0.0);
}
}

void Poligono::addPoint(float _x, float _y)
{
    tam[nVert].setXY(_x,_y);
    nVert++;
}

int Poligono::getNumPoints()
{
    return nVert;
}

void Poligono::imprime()
{
    if(nVert == 0){
        cout<< "Numero de vertices invalido" <<endl;
    }
    for(int i=0;i<nVert;i++){
        tam[i].imprime();

        if(i<nVert-1)
            cout << " -> ";
        else
            cout << endl;
    }
}

double Poligono::area()
{
    double area;
    double diagonal1 = 0;
    double diagonal2 = 0;

   diagonal1 = tam[nVert-1].getX()*tam[0].getY();
   diagonal2 = tam[nVert-1].getY()*tam[0].getX();

    for(int i=0;i<(nVert-1);i++){
        diagonal1 += tam[i].getX()*tam[i+1].getY();
        diagonal2 += tam[i].getY()*tam[i+1].getX();
    }
    area = (diagonal1-diagonal2)*0.5;
    return abs(area);
}

void Poligono::translada(float a, float b){

    for(int i=0; i<nVert; i++){
        tam[i].translada(a,b);
    }
}

void Poligono::rotaciona(float teta, Point p1)
{

    //angulo em graus
    float x , y, x1, y1;


    for(int i=0;i<nVert;i++){

        tam[i].translada(-p1.getX(),-p1.getY());


        x1 = tam[i].getX()*cos(teta) - tam[i].getY()*sin(teta);
        y1 = tam[i].getX()*sin(teta) + tam[i].getY()*cos(teta);

        tam[i].setXY(x1,y1);

        tam[i].translada(p1.getX(),p1.getY());

        /*
         * x = p1.getX();
        y = p1.getY();

*/
    }
}

