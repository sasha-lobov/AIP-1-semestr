#include <iostream>
#include <cmath>


int main()
{
    const float r = 1; //радиус по условию
    float x,y;
    std :: cout << "x = ";
    std :: cin >> x;
    std :: cout << "y = ";
    std :: cin >> y;
    float R = std :: sqrt(x*x+y*y); // действующий радиус
    bool area1 = (x>=0); // зона 1
    bool area2 = (y>=(-x)); // зона 2
    if((R < r) && area1 || (R < r) && area2)
    {
        std :: cout << "Yes" << std :: endl; // точка попала в заштрихованную зону
    }
    else
    {
        std :: cout << "No" << std :: endl; //не попала
    }
    return 0;
}
