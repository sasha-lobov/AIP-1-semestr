#include <iostream>
#include <array>

int main()
{
    std :: array <int,5> arr_weight; // вес багажа
    std :: array <int,5> arr_cont; // количество багажа
    int min_weight=6;
    int max_cont=0;

    for(int  i = 0; i < 5 ; i++) // заполняем массив по весу
    {
        std :: cout << "people" << i << " weight: ";
        std :: cin >> arr_weight[i];

    }

    for(int  i = 0; i < 5 ; i++) //заполняем массив по количеству
    {
        std :: cout << "people" << i << " cont: ";
        std :: cin >> arr_cont[i];

    }

    for(int  i = 0; i < 5 ; i++) //  находим минимальное количество багажа
    {
        if(arr_weight[i]<min_weight)
        {
            min_weight = arr_weight[i];
        }

    }

    for(int  i = 0; i < 5 ; i++) // находим максимальное количество веса багажа
    {
        if(arr_cont[i]>max_cont)
        {
            max_cont = arr_cont[i];
        }

    }

    for(int  i = 0; i < 5 ; i++) // находим человека с минимальным весом и наибольшим количеством багажа
    {
        if(arr_weight[i] == min_weight and arr_cont[i] == max_cont)
        {
            std :: cout << "It's people " << i << std :: endl;
        }

    }



    return 0;
}
