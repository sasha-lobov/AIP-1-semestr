#include <iostream>
#include <cmath>


int main()
{
    double r;
    double t;
    double k;
    double m;

    std :: cout << "k: ";
    std :: cin >> k;
    std :: cout << "r: ";
    std :: cin >> r;

    m = log(cos(M_PI*r));
    t = sqrt(pow(cos(M_PI*r),2)+k*pow(10,-2) / (pow(cos(M_PI*r),2) + std :: abs(m/k)));


    std :: cout << "m: " << m << std :: endl;
    std :: cout << "z: " << t << std :: endl;

    return 0;
}
