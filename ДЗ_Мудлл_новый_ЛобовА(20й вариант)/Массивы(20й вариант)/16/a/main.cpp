#include <iostream>
#include <array>

int main()
{
    std :: array <int,5> arr_weight;
    std :: array <int,5> arr_cont;
    int max_weight=0;
    int max_cont=0;

    for(int  i = 0; i < 5 ; i++)
    {
        std :: cout << "people" << i << " weight: ";
        std :: cin >> arr_weight[i];

    }

    for(int  i = 0; i < 5 ; i++)
    {
        std :: cout << "people" << i << " cont: ";
        std :: cin >> arr_cont[i];

    }

    for(int  i = 0; i < 5 ; i++)
    {
        if(arr_weight[i]>max_weight)
        {
            max_weight = arr_weight[i];
        }

    }

    for(int  i = 0; i < 5 ; i++)
    {
        if(arr_cont[i]>max_cont)
        {
            max_cont = arr_cont[i];
        }

    }

    for(int  i = 0; i < 5 ; i++)
    {
        if(arr_weight[i] == max_weight and arr_cont[i] == max_cont)
        {
            std :: cout << "It's people " << i << std :: endl;
        }

    }



    return 0;
}
