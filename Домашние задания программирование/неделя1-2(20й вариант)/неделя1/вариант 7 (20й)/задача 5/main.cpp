/*Пользователь вводит три числа. Увеличьте первое число в два раза, второе число
уменьшите на 3, третье число возведите в квадрат и затем найдите сумму новых
трех чисел.*/

#include <iostream>



int main()
{
    float a,b,c,result;
    std :: cin >> a >> b >> c;
    result = a*2+(b-3)+c*c;
    std :: cout << "result: " << result << std :: endl;
    return 0;
}
