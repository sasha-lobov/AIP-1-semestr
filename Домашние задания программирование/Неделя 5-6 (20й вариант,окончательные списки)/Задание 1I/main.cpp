#include <iostream>
#include <cmath>
// задачка 1F на ветвления неделя 5

int main()
{
    float x,y;
    std :: cout << "x = ";
    std :: cin >> x;
    if(x>7)
    {
        y = 2*x*x - 3;
        std :: cout << "y = " << y << std :: endl;

    }
    else if (x == 7)
    {
        y = 0;
        std :: cout << "y = " << y << std :: endl;
    }
    else if (x<7)
    {
        y = 2* std :: abs(x) + 3;
        std :: cout << "y = " << y << std :: endl;
    }


    return 0;
}
