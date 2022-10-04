/*#include <iostream>   // прога для факториала,не думал ,что в с++ нету функции для факториала)))


int main()
{
   int n;
   int nfact = 1;
   std :: cin >> n;
   for(int i =1; i <= n; i++)
   {
       nfact = nfact*i;
   }
   std :: cout << n << "! = " << nfact << std :: endl;

    return 0;
}
*/

#include <iostream>
#include <cmath>

int main()
{
    double x;
    int CH;
    int nfact = 1;
    int n = 1;
    double y = 0;
    std :: cout << "CH = ";
    std :: cin >> CH;
    std :: cout << "x = ";
    std :: cin >> x;
    for(;n<=CH;n=n+2)
    {
        nfact = 1;
        for(int i =1; i <= n; i++) //считаем факториал нашего n;
        {
            nfact = nfact*i;// откатываем значение факториала до начального;
        }

        y = y + pow(x,n)/nfact;

        if(n<=CH) // если наш n все еще меньше Ч (CH) , то прибавляем следующую дробь , меняя знак;
        {
            nfact = 1;// откатываем значение факториала до начального;
            n = n +2;
            for(int i =1; i <= n; i++) //считаем факториал нашего n;
            {
                nfact = nfact*i;
            }

             y = y - pow(x,n)/nfact; // меняем знак;

        }
    }
    std :: cout << "y = " << y << std:: endl;

    return 0;
}
