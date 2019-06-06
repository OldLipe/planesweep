#ifndef __INTERSECTS_HPP__
#define __INTERSECTS_HPP__
#include "Ponto.hpp"


/**
 * @name seInterceptam
 * 
 * @description Verifica se dois segmentos se interseccionam
 * 
 * @return bool true caso houver intersecção
 * 
 * @source Gilberto Câmara - Algoritmos Geométricos em SIG
 * */
bool seInterceptam(const Ponto A, 
                    const Ponto B, 
                    const Ponto C, 
                    const Ponto D);

/**
 * @name intercaoRetangulos
 * 
 * @description Verifica se os retângulos mínimos se interseccionam 
 * 
 * @return bool true caso houver intersecção
 * 
 * @references Gilberto Câmara - Algoritmos Geométricos em SIG
 * */
bool intercaoRetangulos(const Ponto A, 
                        const Ponto B, 
                        const Ponto C, 
                        const Ponto D);
/**
 * @name lado
 * 
 * @description Verifica a posição do triângulo com base em um determinado ponto
 * 
 * @return int Caso -1 o ponto determinado se encontra à direita; caso 1 à 
 * esquerda; ou 0 caso alinhado.
 * 
 * @references Gilberto Câmara - Algoritmos Geométricos em SIG
 * */
int lado(const Ponto p1_, 
        const Ponto p2_,
        const Ponto p3_);

#endif // __INTERSECTS_HPP__
