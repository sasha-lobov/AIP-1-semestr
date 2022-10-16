// задача 2g площадь конуса

#include <iostream>
#include <cmath>


int main()
{
    float l,R,S;
    std :: cout << "R = ";
    std :: cin >> R;
    std :: cout << "l = ";
    std :: cin >> l;
    S = M_PI*R*R+M_PI*R*l;
    std :: cout << "S = " << S <<std :: endl;
    return 0;
}
