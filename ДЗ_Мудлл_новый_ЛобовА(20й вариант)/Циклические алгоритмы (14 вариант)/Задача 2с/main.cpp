#include <iostream>
#include <cmath>
int main()
{
    double y,min,max,val,x;
    std :: cout << "min = ";//минимум диапазона
    std :: cin >> min;
    std :: cout << "max = ";//максимум
    std :: cin >> max;
    std :: cout << "val = ";//шаг
    std :: cin >> val;
    x = min;
    for(; x < max; x = x + val)
    {
        y = -2*x*x+3*x-1;
        std :: cout << "x = " << x << "; y = " << y << std :: endl;
    }
    return 0;
}
