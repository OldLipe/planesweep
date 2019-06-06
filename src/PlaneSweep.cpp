#include "PlaneSweep.hpp"
#include "Utils.hpp"
#include <iostream>
#include <iterator>


bool PlaneSweep::sIntersect(const std::vector<SweepLineStatus> Total)
{
    std::set<Intervalo, intervaloSort> T;
    for(auto &i : Total)
    {
        if(i.esq_)
        { 
            T.insert({i.s_.A, i.s_.B});      

            auto pred = std::prev(T.find({i.s_.A, i.s_.B}));
            auto suc = T.upper_bound({i.s_.A, i.s_.B});
            
            if( 
                (pred != T.end()   && 
                    suc != T.end() &&  
                    seInterceptam(suc->A, suc->B, i.s_.A, i.s_.B)) 
                || (pred != T.end() && 
                    suc != T.end()  && 
                    seInterceptam(pred->A, pred->B, i.s_.A, i.s_.B))
                )
            {      
                std::cout << "Intersecção: X:" << i.p_.x << 
                " Y: " << i.p_.y <<  std::endl;

                return(true);
            }
        } else {
     
            auto pred = std::prev(T.find({i.s_.A, i.s_.B }));
            auto suc = T.upper_bound({i.s_.A, i.s_.B });
 
            if(pred != T.end() && 
                suc != T.end() && 
                seInterceptam(i.s_.A, i.s_.B, pred->A, suc->A))
            {
                std::cout << "Intersecção: X:" << i.p_.x << 
                " Y: " << i.p_.y <<  std::endl;           
                
                return(true);
            }
        T.erase({i.s_.A, i.s_.B});
      }
    }
    std::cout << "Não há intersecções" << std::endl;
    return(false);
}

int PlaneSweep::bIntersect(const std::vector<SweepLineStatus> Total)
{
    int segs = 0;
    std::set<Intervalo, intervaloSort> T;
    for(auto &i : Total)
    {
        if(i.esq_)
        { 
            T.insert({i.s_.A, i.s_.B});      

            auto pred = std::prev(T.find({i.s_.A, i.s_.B}));
            auto suc = T.upper_bound({i.s_.A, i.s_.B});
            
            if( 
                (pred != T.end()   && 
                    suc != T.end() &&  
                    seInterceptam(suc->A, suc->B, i.s_.A, i.s_.B)) 
                || (pred != T.end() && 
                    suc != T.end()  && 
                    seInterceptam(pred->A, pred->B, i.s_.A, i.s_.B))
                )
            {      
                segs++;
            }
        } 
        else
        {
            auto pred = std::prev(T.find({i.s_.A, i.s_.B }));
            auto suc = T.upper_bound({i.s_.A, i.s_.B });
 
            if(pred != T.end() && 
                suc != T.end() && 
                seInterceptam(i.s_.A, i.s_.B, pred->A, suc->A))
            {                  
                segs++;
            }
                T.erase({i.s_.A, i.s_.B});
        }
    }
    std::cout << "Total de " << segs << " intersecções" << std::endl;
    return segs;
    
}