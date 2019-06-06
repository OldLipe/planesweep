#include "Intersects.hpp"
#include <iostream>
#include "Ponto.hpp"
#include <algorithm>  


int lado(const Ponto p1_, const Ponto p2_, const Ponto p3_)
{
    int s = p1_.x*p3_.y - 
            p1_.y*p3_.x +
            p1_.y*p2_.x - 
            p1_.x*p2_.y + 
            p3_.x*p2_.y - 
            p3_.y*p2_.x;

    if(s < 0)
    {
        return -1;
    } else if(s > 0) {
        return 1;
    } else {
        return 0;
    }
}

bool intercaoRetangulos(const Ponto A, 
                        const Ponto B, 
                        const Ponto C, 
                        const Ponto D)
{
    Ponto P = Ponto(std::min({A.x, B.x}), std::min({A.y, B.y}));
    Ponto Q = Ponto(std::max({A.x, B.x}), std::max({A.y, B.y}));

    Ponto P1 = Ponto(std::min({C.x, D.x}), std::min({C.y, D.y}));
    Ponto Q1 = Ponto(std::max({C.x, D.x}), std::max({C.y, D.y}));

    return( (Q.x >= P1.x) && (Q1.x >= P.x) &&
            (Q.y >= P1.y) && (Q1.y >= P.y) );
}

bool seInterceptam(const Ponto A, const Ponto B, const Ponto C, const Ponto D)
{
    int abc, abd, cda, cdb;

    if(!intercaoRetangulos(A, B, C, D))
        return false;
    
    abc = lado(A, B, C);
    abd = lado(A, B, D);
    cda = lado(C, D, A);
    cdb = lado(C, D, B);
    
    return( (abc * abd < 0) && (cda * cdb < 0));
}

