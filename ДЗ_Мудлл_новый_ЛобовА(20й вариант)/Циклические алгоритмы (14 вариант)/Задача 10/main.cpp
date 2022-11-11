#include <iostream>



int main()
{
    int max = 100;
    for(int x = 1; x < max; x++)
    {
        for(int y = 1; y < max; y++)
        {
            for(int z = 1; z < max; z++)
            {
                if(15*x+20*y+30*z == 270)
                {
                    std :: cout << " x = " << x
                                << " y = " << y
                                << " z = " << z
                                << std :: endl;
                }
            }
        }
    }
    return 0;
}
