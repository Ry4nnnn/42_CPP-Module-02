#include "Point.hpp"

/* determines if the point lies on the line defined by the two points a and b. */
bool check_if_linear(Point const a, Point const b, Point const point)
{
	float x = b.get_X() - a.get_X();
	float y = b.get_Y() - a.get_Y();
	float m = y / x;
	float c = a.get_Y() - a.get_X() * m;
	if (point.get_Y() == (m * point.get_X() + c))
		return (true);
	return (false);
}

/* get the area of the given 3 points a, b, c */
static float get_area(Point const a, Point const b, Point const c) {
    float dy1 = b.get_Y() - c.get_Y();
    float dy2 = c.get_Y() - a.get_Y();
    float dy3 = a.get_Y() - b.get_Y();

    float area = abs(a.get_X() * dy1 + b.get_X() * dy2 + c.get_X() * dy3) / 2.0;
    return (area);
}

bool bsp (Point const a, Point const b, Point const c, Point const point) {
	if (check_if_linear(a, b, point) ==  true)
		return (false);
	if (check_if_linear(b, c, point) ==  true)
		return (false);
	if (check_if_linear(a, c, point) ==  true)
		return (false);
	float A = get_area(a, b, c);
	float A1 = get_area(point, b, c);
	float A2 = get_area(a, point, c);
	float A3 = get_area(a, b , point);
	std::cout << A << " = " << A1 << " + " << A2 << " + " << A3<< std::endl;
	return (A == A1 + A2 + A3);
}