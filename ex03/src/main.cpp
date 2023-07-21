#include "Point.hpp"

int main( void ) 
{
	Point a(0,0);
	Point b(4,6);
	Point c(8, 0);
	Point point1(4, 3);
	Point point2(1, 5);

	std::cout << "Example:" << std::endl;
	std::cout << "Input: " << std::endl;
	std::cout << "A = (0, 0), B = (4, 6), C = (8, 0)" << std::endl;
	std::cout << "P1 = (4, 3), P2 = (7, 5)" << std::endl;
	std::cout << "Overview:" << std::endl;
	std::cout << "            B(4,6)	" << std::endl;
	std::cout << "              / \\	" << std::endl;
	std::cout << "        P2   /   \\	" << std::endl;
	std::cout << "            /     \\	" << std::endl;
	std::cout << "           /   P1  \\	" << std::endl;
	std::cout << "          /         \\" << std::endl;
	std::cout << "  A(0,0) ------------ C(8,0)" << std::endl;

	std::cout << "Point1 inside Triangle:\n" << (bsp(a, b, c, point1) ? "TRUE" : "FALSE");
	std::cout << std::endl;
	std::cout << "Point2 inside Triangle:\n" << (bsp(a, b, c, point2) ? "TRUE" : "FALSE" );
	std::cout << std::endl;

}