#include <iostream>
#include <string>


int main()
{
    std :: string tovar;
    std :: string proizvoditel;
    std :: string sort;
    std :: string day,month,year;
    int price;




    std :: cout << "tovar: ";
    std :: getline(std :: cin,tovar);
    std :: cout << "proizvoditel: ";
    std :: getline(std :: cin,proizvoditel);
    std :: cout << "sort: ";
    std :: getline(std :: cin,sort);
    std :: cout << "goden do: " << std :: endl;
    std :: cout << "day: ";
    std :: getline(std :: cin,day);
    std :: cout << "month: ";
    std :: getline(std :: cin,month);
    std :: cout << "year: ";
    std :: getline(std :: cin,year);
    std :: cout << "price: ";
    std :: cin >> price;


    std :: cout << tovar << std :: endl
                << proizvoditel << std :: endl
                << price << std :: endl
                << sort << std :: endl;
    std :: cout << day << "." << month << "." << year << std :: endl;

    return 0;
}
