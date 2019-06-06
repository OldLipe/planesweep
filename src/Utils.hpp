#ifndef __UTILS_HPP__
#define __UTILS_HPP__
#include "Ponto.hpp"
#include "Intervalo.hpp"
#include "SweepLineStatus.hpp"
#include <utility> 

// Ordena por ponto
struct CustomCompare
{
    bool operator()(const Ponto &p1 , const  Ponto &p2) const {
   
        return p1.y < p2.y;
    }
};

// Ordena por SweepLineStatus
struct CustomCompare3
{
    bool operator()(const SweepLineStatus &i, const SweepLineStatus &j ) const {
   
        return i.p_.x < j.p_.x;
    }
};

// Ordena por intervalo
struct intervaloSort
{
    bool operator()(const Intervalo &i, const Intervalo &j  ) const {
   
        return i.A.y > j.A.y || i.B.y > j.B.y;
    }
};

// Ordena por par de ponto
bool sortbysec(const std::pair <Ponto, bool> &a, 
              const std::pair <Ponto, bool> &b) 
{ 
    return (a.first.x < b.first.x ); 
};

#endif //__UTILS_HPP__