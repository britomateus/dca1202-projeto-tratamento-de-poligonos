#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"


/**
 * @brief A classe Poligono será utilizada para caracterizar um polígono convexo através de operações
 * realizadas com um vetor de pontos que armarzenará os vértices do polígono em sentido anti-horário.
 */

class Poligono
{
private:
    /**
     * @brief tam é o vetor que irá armazenar os vértices (pontos) do polígono.
     * @details 100 é a quantidade máxima definida de vértices que o polígono poderá ter.
     */
    Point tam [100];
    /**
     * @brief nVert é a variável que armazena o número de vértices do polígono.
     */
    int nVert;
public:
    /**
     * @brief Poligono é o construtor da classe Poligono.
     * @details No construtor é definido que quando o usuário não tiver inserido um número de vértices,
     * o valor default é 0.
     */
    Poligono();
    /**
     * @brief addPoint é o método que adiciona um vértice ao polígono.
     * @param _x é a abscissa do vértice adicionado.
     * @param _y é a ordenada do vértice adicionado.
     */
    void addPoint(float _x, float _y);
    /**
     * @brief getNumPoints é o método que recupera o número de vértices adicionados ao polígono.
     * @return retorna um inteiro que representa a quantidade de vértices do polígono.
     */
    int getNumPoints(void);
    /**
     * @brief imprime é o método que mostra na tela o polígono criado.
     * @details O polígono é impresso na forma <x1,y1> -> <x2,y2> -> <x3,y3> -> ... -> <xn,yn>.
     */
    void imprime(void);
    /**
     * @brief area é o método que calcula a área do polígono criado.
     * @details a área é calculada através da fórmula de Shoelace.
     * @return retorna o valor da área, do tipo double, delimitada pelas arestas do polígono.
     */
    double area(void);
    /**
     * @brief translada é o método que translada o polígono inteiro em (+a,+b).
     * @param a é o valor que será transladado no eixo x.
     * @param b é o valor que será transladado no eixo y.
     */
    void translada(float a, float b);
    /**
     * @brief rotaciona é o método que rotaciona o polígono teta graus no sentido anti-horário em torno
     * de um ponto fornecido pelo usuário.
     * @param teta é o valor do ângulo de rotação.
     * @param p1 é o ponto em torno do qual a rotação será realizada.
     */
    void rotaciona(float teta, Point p1);

};

#endif // POLIGONO_H

