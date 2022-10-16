#include <iostream>
#include <cmath>


int main()
{
    double x;
    double c;
    double z;
    double m;

    std :: cout << "x: ";
    std :: cin >> x;
    std :: cout << "c: ";
    std :: cin >> c;

    m = pow(M_E,-c*std :: abs(x)+sqrt(c*x));
    z = pow(tan(M_PI*m/(m+pow(10,-3))),2);


    std :: cout << "m: " << m << std :: endl;
    std :: cout << "z: " << z << std :: endl;

    return 0;
}
