#include <iostream>
#include <cmath>


int main()
{
    double x;
    double y;
    double z;
    double m;

    std :: cout << "x: ";
    std :: cin >> x;
    std :: cout << "y: ";
    std :: cin >> y;

    z = ((std :: abs(pow(M_E,-x*y)+pow(10,-3)))+pow(M_E,-x*y))/(M_PI+log(x*y));
    m = sin(atan(z/2)) - sin(atan(M_PI/3));

    std :: cout << "z: " << z << std :: endl;
    std :: cout << "m: " << m << std :: endl;


    return 0;
}
