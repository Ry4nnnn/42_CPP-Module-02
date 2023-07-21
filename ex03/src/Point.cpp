#include "Point.hpp"

Point::Point() {
    this->_x = 0;
    this->_y = 0;
}

Point::Point(const float x, const float y) {
    this->_x = x;
    this->_y = y;
}

Point::Point(const Point &point) {
    *this = point;
}

/* Copy assignment operator overload function */
Point &Point::operator=(const Point &point) {
    this->_x = point._x;
    this->_y = point._y;
    return (*this);
}

/* Destructor function */
Point::~Point() {

}

/* Getter function to get the X-axis value of Point class */
float Point::get_X() const {
    return (_x.toFloat());
}

/* Getter function to get the Y-axis value of Point class */
float Point::get_Y() const {
    return (_y.toFloat());
}
