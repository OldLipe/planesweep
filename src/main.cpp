/**
 * @name Felipe Carvalho e Paulo Renato
 * 
 * @description Disciplina - CAP 242
 * */
#include "PlaneSweep.hpp"
#include "EventQueue.hpp"
#include <iostream>
#include <functional>   

int main()
{
    std::vector<Intervalo> v {
         { Ponto {1,4}, Ponto {3,1} },
         { Ponto {1,1}, Ponto {4,4} },
         { Ponto {6,5}, Ponto {9,2} },
         { Ponto {5,3}, Ponto {9,5} },
         { Ponto {6,2}, Ponto {10,5} },
         { Ponto {2,10}, Ponto {12,8} },
         { Ponto {12,6}, Ponto {8,10} },
         { Ponto {2,8}, Ponto {10,10} },
         { Ponto {16,8}, Ponto {20,2} },
         { Ponto {20,2}, Ponto {20,8} }
    };
    PlaneSweep pS = PlaneSweep();

    std::vector<SweepLineStatus> Total = eventScheduleList(v);

    pS.bIntersect(Total);

    return 0;

}
