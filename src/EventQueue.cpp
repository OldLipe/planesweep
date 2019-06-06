#include "EventQueue.hpp"

std::vector<SweepLineStatus> eventScheduleList(const std::vector<Intervalo> v)
{
    std::vector<SweepLineStatus> E;
    std::vector<SweepLineStatus> D;
    
    for(auto &i : v)
    {
        if(i.A.x > i.B.x)
        {
            D.push_back({i.A, i, true});
            E.push_back({i.B, i, false});
        } else {
            E.push_back({i.A, i, true});
            D.push_back({i.B, i, false});
        }
    }
    std::vector <SweepLineStatus> Total;
    
    Total.reserve(E.size() + D.size() + 2*D.size());
    Total.insert(Total.end(), E.begin(), E.end() );
    Total.insert(Total.end(), D.begin(), D.end() );

    std::sort(Total.begin(), Total.end());

    return Total;
}


