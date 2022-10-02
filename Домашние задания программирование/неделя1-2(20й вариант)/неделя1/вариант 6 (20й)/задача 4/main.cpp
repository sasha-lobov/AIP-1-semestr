
//вариант 6 номер 3 задача 4 Пользователь вводит два числа. Необходимо поменять значения переменных так,
// чтобы значение первой оказалось во второй, а второй - в первой.

#include <iostream>

int main()
{
    float a,b,c;
   std :: cin >> a >> b;
   std :: cout << "a = " << a << std :: endl;
   std :: cout << "b = " << b << std :: endl;
   c = a;
   a = b;
   std :: cout << "a = " << a << std :: endl;
   b = c;
   std :: cout << "b = " << b << std :: endl;
    return 0;
}
