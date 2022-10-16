#include <iostream>



int main()
{
    std :: string name;
    std :: string marka;
    int reg_number;
    int make_year;

    std :: cout << "name: ";
    std :: getline(std :: cin,name);
    std :: cout << "marka: ";
    std :: getline(std :: cin,marka);
    std :: cout << "registation's number: ";
    std :: cin >> reg_number;
    std :: cout << "making's year: ";
    std :: cin >> make_year;

    std :: cout << name << std :: endl
                << marka << std :: endl
                << reg_number << std :: endl
                << make_year << std :: endl;

    return 0;
}
