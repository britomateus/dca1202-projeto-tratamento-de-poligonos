#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief A classe Retangulo é responsável por caracterizar um tipo específico de polígono, que é o retângulo.
 */

class Retangulo: public Poligono
{
public:
    /**
     * @brief Retangulo é o construtor para a classe Retangulo.
     */
    Retangulo();
    /**
     * @brief Retangulo é uma sobrecarga para o construtor da classe Retangulo, que irá criar um
     * tipo específico de polígono que possui 4 vértices, adicionados no sentido anti-horário, o retângulo.
     * @param _x é o valor da abscissa do primeiro ponto do retângulo.
     * @param _y é o valor da ordenada do primeiro ponto do retângulo.
     * @param largura armazena o valor da largura do retângulo, ou o deslocamento no eixo x em relação ao ponto inicial.
     * @param altura armazena o valor da altura do retângulo, ou o deslocamento no eixo y em relação ao ponto inicial.
     */
    Retangulo(float _x, float _y, float largura, float altura );
};

#endif // RETANGULO_H


