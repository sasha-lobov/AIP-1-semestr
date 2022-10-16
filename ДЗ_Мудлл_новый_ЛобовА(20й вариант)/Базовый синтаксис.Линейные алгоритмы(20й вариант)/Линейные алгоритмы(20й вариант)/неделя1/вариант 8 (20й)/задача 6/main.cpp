/*Пользователь вводит три числа. Найдите среднее арифметическое этих чисел, а
также разность удвоенной суммы первого и третьего чисел и утроенного второго
числа.
*/

#include <iostream>



int main()
{
    float a,b,c,result1,result2;
    std :: cout << "a = ";
    std :: cin >> a;
    std :: cout << "b = ";
    std :: cin >> b;
    std :: cout << "c = ";
    std :: cin >> c;
    result1 = (a+b+c)/3;
    result2 = 2*(a+c)-3*b;
    std :: cout << "result1 = " << result1 << std :: endl;
    std :: cout << "result2 = " << result2 << std :: endl;
    return 0;
}
