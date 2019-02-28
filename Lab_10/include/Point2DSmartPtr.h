#ifndef _POINT2DSMARTPTR_H_
#define _POINT2DSMARTPTR_H_
#include "Point2D.h"
class Point2DSmartPtr
{
  public:
    Point2DSmartPtr(Point2D *object) : ptr(object){};

    ~Point2DSmartPtr(void)
    {
        delete ptr;
    }
    double get_x(void)
    {
        return ptr->get_x();
    }
    double get_y(void)
    {
        return ptr->get_y();
    }
    Point2D &operator*()
    {
        return (*ptr);
    }

  private:
    Point2D *ptr;
};
std::ostream &operator<<(std::ostream &stream, Point2DSmartPtr object)
{
    return (stream << "(" << object.get_x() << "," << object.get_y() << ")");
}
#endif