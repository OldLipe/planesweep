#ifndef __SWEEPLINESTATUS_HPP__
#define __SWEEPLINESTATUS_HPP__
#include "Ponto.hpp"
#include "Intervalo.hpp"

/**
 * @name SweepLineStatus
 * 
 * @description Struct segmento da sweep line, por exemplo,
 * a flag {esq_} diz respeito se o ponto extremo em T é esquerdo ou direito.
 * 
 **/
struct SweepLineStatus
{
    Ponto p_;
    Intervalo s_;
    bool esq_;

    bool operator< (const SweepLineStatus &other) const {
        return p_.x < other.p_.x;
    }
};
#endif  //__SWEEPLINESTATUS_HPP__


