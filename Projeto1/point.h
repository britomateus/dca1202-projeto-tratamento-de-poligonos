#ifndef POINT_H
#define POINT_H


/**
 * @brief A classe Point serve para representar pontos bidimensionais do tipo float
 */
class Point
{

private:
    float x, y;
public:
    /**
     * @brief Point(float _x=0, float _y=0) é o construtor da classe Point
     * @details Quando o usuário não insere nenhum valor para as coordenadas, o valor padrão definido é (0,0).
     * @param _x é a abscissa do ponto.
     * @param _y é a ordenada do ponto.
     */
    Point(float _x=0, float _y=0);

    /**
     * @brief ~Point() é o destrutor da classe Point
     * @details O destrutor é utilizado para a liberação da memória alocada pelo construtor da classe.
     */

    ~Point();

    /**
     * @brief setX é o método para definir o valor da coordenada x do ponto.
     * @param _x é a abscissa do ponto.
     */
    void setX(float _x);
    /**
     * @brief setY é o método para definir o valor da coordenada y do ponto.
     * @param _y é a ordenada do ponto.
     */
    void setY(float _y);
    /**
     * @brief setXY é o metodo para definir ao mesmo tempo os valores da coordenadas x e y do ponto.
     * @param _x é a absicssa do ponto.
     * @param _y é a ordenada do ponto.
     */
    void setXY(float _x, float _y);
    /**
     * @brief getX é o método para recuperar o valor da coordenada x do ponto.
     * @return retorna a abscissa do ponto.
     */
    float getX(void);
    /**
     * @brief getY é o método para recuperar o valor da coordenada y do ponto.
     * @return retorna a ordenada do ponto.
     */
    float getY(void);
    /**
     * @brief add é o método que adiciona as coordenadas de um ponto com as coordenadas de outro ponto fornecido.
     * @details Soma as coordenadas de dois pontos e armazena o resultado em um novo ponto, que é retornado ao cliente.
     * @param p1 é o ponto que será somado.
     * @return retorna o novo ponto que contém o resultado da soma.
     */
    Point add(Point p1);
    /**
     * @brief sub é o método que subtrai as coordenadas de um ponto com as coordenadas de outro ponto fornecido.
     * @details Subtrai as coordenadas de dois pontos e armazena o resultado em um novo ponto, que é retornado ao cliente.
     * @param p1 é o ponto que será subtraído.
     * @return retorna o novo ponto que contém o resultado da subtração.
     */
    Point sub(Point p1);
    /**
     * @brief norma é o método que calcula a distância do ponto até a origem do sistema de coordenadas.
     * @return retorna o valor da norma.
     */
    float norma();
    /**
     * @brief translada é o método que translada o ponto de (x,y) para (x+a,y+b).
     * @param a é o valor que translada a abscissa.
     * @param b é o valor que translada ordenada.
     */
    void translada(float a, float b);
    /**
     * @brief imprime é o método que mostra na tela o ponto.
     * @details O ponto mostrado na tela possui o formato <x,y>.
     */
    void imprime(void);
};

#endif // POINT_H

