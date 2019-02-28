#ifndef _MAP_POINT_H_
#define _MAP_POINT_H_
#include <string>
#include <iostream>
#include "MapDistance.h"
struct MapPoint
{
    std::string name;
    double longitude;
    double latitude;
};
void clear(MapPoint);
void print(MapPoint);
MapPoint construct(std::string point_name, double latitude, double longitude);
#endif
