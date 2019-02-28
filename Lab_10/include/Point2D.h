#ifndef _POINT2D_H_
#define _POINT2D_H_
#include <iostream>
class Point2D
{
  public:
    Point2D(double x = 0, double y = 0) : _x(x), _y(y){};
    Point2D friend operator+(double value, Point2D object);
    Point2D operator++()
    {
        _x = _x + 1;
        _y = _y + 1;
        return *this;
    }
    Point2D operator--()
    {
        _x = _x - 1;
        _y = _y - 1;
        return *this;
    }
    Point2D operator++(int)
    {
        Point2D temp(_x, _y);
        _x = _x + 1;
        _y = _y + 1;
        return temp;
    }
    double get_x(void)
    {
        return _x;
    }
    double get_y(void)
    {
        return _y;
    }
    Point2D operator--(int)
    {
        Point2D temp(_x, _y);
        _x = _x - 1;
        _y = _y - 1;
        return temp;
    }
    Point2D operator+(Point2D object)

    {
        Point2D temp;
        temp._x = _x + object.get_x();
        temp._y = _y + object.get_y();
        return temp;
    }
    ~Point2D(void)
    {
    }

  private:
    double _x;
    double _y;
};

std::ostream &operator<<(std::ostream &stream, Point2D object)
{
    return (stream << "(" << object.get_x() << "," << object.get_y() << ")");
}
Point2D operator+(double value, Point2D object)
{
    Point2D temp;
    temp._x = object.get_x() + value;
    temp._y = object.get_y() + value;
    return temp;
}

#endif