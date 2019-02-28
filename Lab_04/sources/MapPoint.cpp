#include "MapPoint.h"

void print(MapPoint point_name)
{
    std::cout << "Position of " << point_name.name << ". Latitude: " << point_name.latitude << ". Longitude: " << point_name.longitude << std::endl;
}

MapPoint construct(std::string point_name, double latitude, double longitude)
{
    MapPoint temp;
    temp.name = point_name;
    temp.latitude = latitude;
    temp.longitude = longitude;
    return temp;
}
void clear(MapPoint name)
{
}