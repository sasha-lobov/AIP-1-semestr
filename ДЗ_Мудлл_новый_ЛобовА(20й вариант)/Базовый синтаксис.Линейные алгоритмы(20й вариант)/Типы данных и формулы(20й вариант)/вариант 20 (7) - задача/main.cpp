#include <iostream>
#include <string>


int main()
{
    std :: string surname;
    std :: string book;
    std :: string genre;
    unsigned short int year,price;



    std :: cout << "surname: ";
    std :: getline(std :: cin,surname);
    std :: cout << "book: ";
    std :: getline(std :: cin,book);
    std :: cout << "genre: ";
    std :: getline(std :: cin,genre);
    std :: cout << "year: ";
    std :: cin >> year;
    std :: cout << "price: ";
    std :: cin >> price;


    std :: cout << surname << std :: endl
                << book << std :: endl
                << year << std :: endl
                << genre << std :: endl
                << price << std :: endl;

    return 0;
}
