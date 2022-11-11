#include <iostream>
#include <cmath>
int main()
{
    int H,M,III;
    std :: cout << "H = ";//начало диапазона
    std :: cin >> H;
    std :: cout << "M = ";//конец
    std :: cin >> M;
    std :: cout << "III = ";//шаг
    std :: cin >> III;

    for(; H < M ; H += III)
    {
        std :: cout << H << " ";
    }
    std :: cout << M << " ";
    return 0;
}
