//задание 2h посчитать площадь и периметр трапеции

#include <iostream>



int main()
{
    float a,b,c,d,h,S,P;
    std :: cout << "a = ";
    std :: cin >>a;
    std :: cout << "b = ";
    std :: cin >>b;
    std :: cout << "c = ";
    std :: cin >>c;
    std :: cout << "d = ";
    std :: cin >>d;
    std :: cout << "h = ";
    std :: cin >>h;
    S = (a+b)/2*h;
    P = a+b+c+d;
    std :: cout << "S = " << S << std :: endl<< "P = " << P << std :: endl;
    return 0;
}
