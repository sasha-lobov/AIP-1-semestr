//тема: функции. вариант 14

//задача1: пример 1 переделанный под функцию
/*
#include <iostream>
void func(int a,int b)
{


    if (a > b == true)
    {
        std::cout << "a > b" << std::endl;
    }
    if (a > b) // если условие верно, true пропускаем ,делая код короче
    {
        std::cout << "a > b" << std::endl;
    }

    // Если необходимо выполнить действия при обратном условии, то
    //используют оператор отрицания:

    if (!(a > b)){
        std::cout << "a < b" << std::endl;
    }

    //На самом деле это в полной версии выглядит так:
    if ((a > b) == false)
    {
        std::cout << "a < b" << std::endl;
    }

}

int main()
{
    int a, b; //Два целых числа

    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    func(a,b); // вызов функции


    return 0;
}
*/



// задача 15
/*
#include <iostream>
#include <cmath>

void Leng(float xA,float yA,float xB,float yB,float xC,float yC,float xD,float yD)
{
    float AB = sqrt((xA-xB)*(xA-xB)+(yA-yB)*(yA-yB));
    std :: cout << "|AB|=" << AB << std :: endl;

    float AC = sqrt((xA-xC)*(xA-xC)+(yA-yC)*(yA-yC));
    std :: cout << "|AC|=" << AC << std :: endl;

    float AD = sqrt((xA-xD)*(xA-xD)+(yA-yD)*(yA-yD));
    std :: cout << "|AD|=" << AD << std :: endl;
}

int main()
{
    float xA,yA,xB,yB,xC,yC,xD,yD;

    std :: cout << "xA=";
    std :: cin >> xA;
    std :: cout << "yA=";
    std :: cin >> yA;
    std :: cout << "xB=";
    std :: cin >> xB;
    std :: cout << "yB=";
    std :: cin >> yB;
    std :: cout << "xC=";
    std :: cin >> xC;
    std :: cout << "yC=";
    std :: cin >> yC;
    std :: cout << "xD=";
    std :: cin >> xD;
    std :: cout << "yD=";
    std :: cin >> yD;

    Leng(xA,yA,xB,yB,xC,yC,xD,yD);


}
*/


//задача 6
/*
#include <iostream>
#include <cmath>

void ShiftRight3(int X,int A,int B,int C,int X1,int A1,int B1,int C1,int X2,int A2,int B2,int C2)
{
    X = C;
    C = B;
    B = A;
    A = X;

    std :: cout << "A=" << A << std :: endl;
    std :: cout << "B=" << B << std :: endl;
    std :: cout << "C=" << C << std :: endl;

    X1 = C1;
    C1 = B1;
    B1 = A1;
    A1 = X1;

    std :: cout << "A=" << A1 << std :: endl;
    std :: cout << "B=" << B1 << std :: endl;
    std :: cout << "C=" << C1 << std :: endl;

    X2 = C2;
    C2 = B2;
    B2 = A2;
    A2 = X2;

    std :: cout << "A=" << A2 << std :: endl;
    std :: cout << "B=" << B2 << std :: endl;
    std :: cout << "C=" << C2 << std :: endl;
}

int main()
{
    int X,A,B,C,X1,A1,B1,C1,X2,A2,B2,C2;

    std :: cout << "A=";
    std :: cin >> A;
    std :: cout << "B=";
    std :: cin >> B;
    std :: cout << "C=";
    std :: cin >> C;

    std :: cout << "A1=";
    std :: cin >> A1;
    std :: cout << "B1=";
    std :: cin >> B1;
    std :: cout << "C1=";
    std :: cin >> C1;

    std :: cout << "A2=";
    std :: cin >> A2;
    std :: cout << "B2=";
    std :: cin >> B2;
    std :: cout << "C2=";
    std :: cin >> C2;

    ShiftRight3(X,A,B,C,X1,A1,B1,C1,X2,A2,B2,C2);



    return 0;
}
*/

// задача 12
/*
#include <iostream>
#include <cmath>

bool IsPower5(int K)  // функция будет возвращать булевое значение
{
    double res = log(K) / log(5);
    return res - trunc(res) < 0.000001;  // проверяем на наличие остатка
}

int main()
{
    int K;
    int kolichectvo_chysel = 0;
    for(int i = 0;i<10;i++)
    {
        std :: cout << "K=";
        std :: cin >> K;

        if(IsPower5(K))
        {
            kolichectvo_chysel++; //если число является степенью 5, отмечаем это
        }
    }

    std :: cout << "kolichectvo_chysel = " << kolichectvo_chysel << std :: endl;
}
*/


//задача 16 h

#include <iostream>
#include <cmath>

double function(double x)
{
    double y;
    for(int i=0;i<3;i++)
    {
        if(x<3)
        {
            y =(2*x+1)*(2*x+1)-1;
            std :: cout << "x = " << x << " ";
            std :: cout << "y = " << y << ";" << std :: endl;
        }

        else if(x == 3)
        {
            y = 10;
            std :: cout << "x = " << x << " ";
            std :: cout << "y = " << y << ";" << std :: endl;
        }

        else
        {
            y = 2*x - 10;
            std :: cout << "x = " << x << " ";
            std :: cout << "y = " << y << ";" << std :: endl;
        }

        x = x + 3;
    }
}

int main()
{
    int x;

    std :: cout << "x=";
    std :: cin >> x;

    function(x);

    return 0;
}
