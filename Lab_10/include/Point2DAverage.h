#ifndef _POINT2DAVERAGE_
#define _POINT2DAVERAGE_
#include "Point2D.h"
class Point2DAverage
{
  public:
    Point2DAverage(void) : _licznik(0), _sum_of_x(0), _sum_of_y(0){};
    Point2D AveragePoint(Point2D &object)
    {
        _licznik++;
        _sum_of_x += object.get_x();
        _sum_of_y += object.get_y();
        return Point2D(_sum_of_x / _licznik, _sum_of_y / _licznik);
    }
    Point2D operator()(Point2D object)
    {
        _licznik++;
        _sum_of_x += object.get_x();
        _sum_of_y += object.get_y();
        return Point2D(_sum_of_x / _licznik, _sum_of_y / _licznik);
    }
    void Reset(void)
    {
        _licznik = 0;
        _sum_of_x = 0;
        _sum_of_y = 0;
    }

  private:
    int _licznik;
    double _sum_of_x;
    double _sum_of_y;
};
#endif