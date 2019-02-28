#ifndef _MAP_DISTANCE_H_
#define _MAP_DISTANCE_H_
#include "MapPoint.h"
void movePoint(struct MapPoint &, double, double);
MapPoint inTheMiddle(MapPoint, MapPoint, std::string);
#endif