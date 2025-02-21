#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    double a, b, c;
    std::cout << "Enter the lengths of the three sides of the triangle: ";
    std::cin >> a >> b >> c;

    // Calculate the angles using the law of cosines
    double angleA = acos((b*b + c*c - a*a) / (2*b*c)) * 180.0 / M_PI;
    double angleB = acos((a*a + c*c - b*b) / (2*a*c)) * 180.0 / M_PI;
    double angleC = 180.0 - angleA - angleB;

    std::cout << "The angles of the triangle are: " << std::endl;
    std::cout << "Angle A: " << angleA << " degrees" << std::endl;
    std::cout << "Angle B: " << angleB << " degrees" << std::endl;
    std::cout << "Angle C: " << angleC << " degrees" << std::endl;

    return 0;
}
