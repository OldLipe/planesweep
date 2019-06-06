#ifndef __PLANESWEEP_HPP__
#define __PLANESWEEP_HPP__
#include "SweepLineStatus.hpp"
#include"Intersects.hpp"
#include <vector>
#include <queue>
#include <set>


class PlaneSweep
{   
    public:
        /**
         * @name sIntersect Verifica se existe pelo menos uma intersecção de
         * segmentos no plano
         * 
         * @param vector<SweepLineStatus> Vetor com os segmentos ordenados
         * 
         * @return bool Retorna True caso tenha alguma intersecção dado um
         * conjunto de segmentos. False para nenhuma intersecção entre objetos.
         * */
        bool sIntersect( const std::vector<SweepLineStatus> Total);
 

        /**
         * @name sIntersect Verifica o número de insecções no plano
         * 
         * @param vector<SweepLineStatus> Vetor com os segmentos ordenados
         * 
         * @return int Quantidade de intersecções.
         * */
        int bIntersect(const std::vector<SweepLineStatus> Total );

};
#endif // __PLANESWEEP_HPP__