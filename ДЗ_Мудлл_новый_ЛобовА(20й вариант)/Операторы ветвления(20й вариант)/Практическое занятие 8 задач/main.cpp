/* // Задача 1
#include <iostream>



int main()
{
    int num1;
    int num2;
    std :: cout << "num1: ";
    std :: cin >> num1;
    std :: cout << "num2: ";
    std :: cin >> num2;
    if((num1+num2)<70)
    {
         std :: cout << "num1: " << num1 << std :: endl
                     << "num2: " << num2 << std :: endl
                     << "summ: " << num1 + num2 << std :: endl;
    }
    else if( ((num1+num2)>70) && (num1>60 || num2>60) )
    {
        num1 = num1 +10;
        num2 = num2 + 10;
        std :: cout << "num1: " << num1 << std :: endl
                    << "num2: " << num2 << std :: endl
                    << "summ: " << num1 + num2 << std :: endl;

    }
    else
        std :: cout << "error";
    return 0;
}
*/


/*
 // Задача 2
#include <iostream>



int main()
{
    int a;
    int b;
    int c;
    std :: cout << "a: ";
    std :: cin >> a;
    std :: cout << "b: ";
    std :: cin >> b;
    std :: cout << "c: ";
    std :: cin >> c;

    if( (a+b)<c || (b+c)<a || (a+c)<b ||  a==b==c )
    {
        std :: cout << "Est" << std :: endl;
    }
    else
        std :: cout << "Nety" << std :: endl;

    return 0;
}
*/


/*
 // Задача 3
#include <iostream>
int main()
{
    int a;
    int b;
    int c;
    std :: cout << "a: ";
    std :: cin >> a;
    std :: cout << "b: ";
    std :: cin >> b;
    std :: cout << "c: ";
    std :: cin >> c;

    if(a>=1 && a<=3)
    {
        if(b>=1 && b<=3)
        {
            std :: cout << "a+b=" << a+b << std :: endl;
        }
        else if(c>=1 && c<=3)
             std :: cout << "a+c=" << a+c << std :: endl;
        else
             std :: cout << "error" << std :: endl;
    }
    else if(b>=1 && b<=3)
    {
        if(a>=1 && a<=3)
        {
             std :: cout << "b+a=" << b+a << std :: endl;
        }
        else if(c>=1 && c<=3)
        {
            std :: cout << "b+c=" << b+c << std :: endl;
        }
        else
            std :: cout << "error" << std :: endl;
    }
    else if(c>=1 && c<=3)
    {
        if(a>=1 && a<=3)
        {
             std :: cout << "c+a=" << c+a << std :: endl;
        }
        else if(b>=1 && b<=3)
        {
            std :: cout << "c+b=" << c+b << std :: endl;
        }
        else
            std :: cout << "error" << std :: endl;
    }

    else
         std :: cout << "error" << std :: endl;


    return 0;
}
*/


/*
 // Задача 4
#include <iostream>



int main()
{
    int x;
    int y;

    std :: cout << "x: ";
    std :: cin >> x;



    if(x<10)
    {
        y = -5;
        std :: cout << y << std :: endl;
    }
    else if(x>=10 && x<=40)
    {
        y = 0;
        std :: cout << y << std :: endl;
    }
    else if(x>40)
    {
        y = 5;
        std :: cout << y << std :: endl;
    }
    return 0;
}
*/


/*
 // Задача 5
#include<iostream>
int main()
{
    int num1;
    int num2;

    std :: cout << "num1: ";
    std :: cin >> num1;
    std :: cout << "num2: ";
    std :: cin >> num2;

    if(num1>num2)
    {
        int res1 = num1+num2;
        std :: cout << "num1: " << res1 << std :: endl;
        num2 = num1*num2;
        std :: cout << "num2: " << num2 << std :: endl;
    }
    else if(num2>num1)
    {
        int res1 = num1*num2;
        std :: cout << "num1: " << res1 << std :: endl;
        num2 = num1+num2;
        std :: cout << "num2: " << num2 << std :: endl;

    }
    else
        std :: cout << "error";

    return 0;
}
*/


/*
 // Задача 6 (21)
#include <iostream>



int main()
{
    int num1;
    int num2;
    int num3;
    std :: cout << "num1: ";
    std :: cin >> num1;
    std :: cout << "num2: ";
    std :: cin >> num2;
    std :: cout << "num3: ";
    std :: cin >> num3;



    if(num1 == num2 && num3 == num2 && num3 == num1)

        std :: cout << "num1 = num2 = num3" << std :: endl;

    else
    {
        num1 = num1 + 40;
        num2 = num2 + 40;
        num3 = num3 + 40;
        std :: cout << "num1 = " << num1 << std :: endl;
        std :: cout << "num2 = " << num2 << std :: endl;
        std :: cout << "num3 = " << num3 << std :: endl;
    }

    return 0;
}
*/


/*
 // Задача 7 (27)
#include <iostream>



int main()
{
    int num1;
    int num2;
    int num3;

    std :: cout << "num1: ";
    std :: cin >> num1;
    std :: cout << "num2: ";
    std :: cin >> num2;
    std :: cout << "num3: ";
    std :: cin >> num3;

    if(num1 < 0)
    {
        num1 = num1*num1;
        std :: cout << "num1^2 = " << num1 << std :: endl;
    }

    if(num2 < 0)
    {
        num2 = num2*num2;
        std :: cout << "num2^2 = " << num2 << std :: endl;
    }
    if(num3 < 0)
    {
        num3 = num3*num3;
        std :: cout << "num3^2 = " << num3 << std :: endl;
    }
    return 0;
}
*/


/*
 // Задача 8 (29)
#include <iostream>



int main()
{
    int num1;
    int num2;
    int num3;

    std :: cout << "num1: ";
    std :: cin >> num1;
    std :: cout << "num2: ";
    std :: cin >> num2;
    std :: cout << "num3: ";
    std :: cin >> num3;

    if(num1 < 0)
    {
        std :: cout << "num1 - otricatelnoe" << std :: endl;
    }

    if(num2 < 0)
    {
        std :: cout << "num2 - otricatelnoe" << std :: endl;
    }
    if(num3 < 0)
    {
       std :: cout << "num3 - otricatelnoe" << std :: endl;
    }
    return 0;
}
*/
