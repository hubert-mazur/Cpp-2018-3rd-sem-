#include "MapDistance.h"
MapPoint inTheMiddle(MapPoint first_point, MapPoint second_point, std::string point_name)
{
    MapPoint static temp;
    temp.name = point_name;
    temp.longitude = (first_point.longitude + second_point.longitude) / 2;
    temp.latitude = (first_point.latitude + second_point.latitude) / 2;
    return temp;
}

void movePoint(MapPoint &point_to_move, double new_latitude, double new_longitude)
{
    point_to_move.latitude += new_latitude;
    point_to_move.longitude += new_longitude;
}
