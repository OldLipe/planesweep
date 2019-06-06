#ifndef __EVENTQUEUE_HPP__
#define __EVENTQUEUE_HPP__
#include "SweepLineStatus.hpp"
#include <vector>
#include <queue>
#include <algorithm>


/**
 * @name filaEventos
 * 
 * @param vector<Intervalo> Vetor correspondente ao conjunto de segmentos 
 * 
 * @return vector <SweepLineStatus> Vetor com as abscissas ordenadas
 * */
std::vector<SweepLineStatus> eventScheduleList(const std::vector<Intervalo> v);


#endif // __EVENTQUEUE_HPP__