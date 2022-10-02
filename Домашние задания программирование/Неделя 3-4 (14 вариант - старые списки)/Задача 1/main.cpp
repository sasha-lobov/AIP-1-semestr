#include <iostream>
int main()
{
    int H;
    std :: cout << "H = ";
    std :: cin >> H;
    for(int i=0;i<H;i++)
    {
        for(int a=0;a<=i;a++)
        {
            std :: cout << "0 ";

        }
        std :: cout << std :: endl;
    }
    return 0;
}
