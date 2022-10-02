#include <iostream>
#include <cmath>
//задача 15 калькулятор
int main()
{
 double num1,num2,result;
 char x;
 std :: cout << "Enter num1: ";
 std :: cin >> num1;
 std :: cout << "Enter num2: ";
 std :: cin >> num2;
 std :: cout << "Enter operation: ";
 std :: cin >> x;
 switch (x) {
 case '+':

     result = num1 + num2;
     std :: cout <<"result: " << result << std :: endl;

     break;

 case '-':

     result = num1 - num2;
     std :: cout <<"result: " << result << std :: endl;

     break;

 case '*':

     result = num1 * num2;
     std :: cout <<"result: " << result << std :: endl;

     break;

 case '/':

     result = num1 / num2;
     std :: cout <<"result: " << result << std :: endl;

     break;

 default:

     std :: cout << "Error";
 }
    return 0;
}
