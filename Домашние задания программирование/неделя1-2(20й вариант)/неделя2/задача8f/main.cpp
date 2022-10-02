#include <iostream>
#include <cmath>

int main()
{
   double a,b,x,result;
   std:: cout << "a=";
   std::cin >> a;
   std:: cout << "b=";
   std::cin >> b;
   std:: cout << "x=";
   std::cin >> x;
   result = sqrt((x*x+b-b*b*pow(sin(x+a),3))/x);
   std::cout << "result: " << result << std :: endl;
    return 0;
}
