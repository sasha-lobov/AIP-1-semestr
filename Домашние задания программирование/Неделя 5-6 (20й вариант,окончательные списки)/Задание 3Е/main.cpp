#include <iostream>
#include <cmath>


int main()
{
    float x,y;
    std :: cout << "x = ";
    std :: cin >> x;
    std :: cout << "y = ";
    std :: cin >> y;
    bool area1 = (y <= pow(M_E,x)); // зона 1
    bool area2 = (y <= pow(M_E,(-x))); // зона 2
    bool area3 = (y >= x*x); // зона 3
    if(area1 and area2 and area3)
    {
        std :: cout << "Yes" << std :: endl; // точка попала в заштрихованную зону
    }
    else
    {
        std :: cout << "No" << std :: endl; //не попала
    }
    return 0;
}
