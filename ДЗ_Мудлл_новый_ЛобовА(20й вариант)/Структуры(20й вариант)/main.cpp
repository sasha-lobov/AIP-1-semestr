//задача 1d
/*

#include <iostream>
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

void minutes (Time m)
{
    std :: cout << m.minutes << std :: endl;
}

int main()
{
    Time time;
    time = {3,15,43};

    minutes (time);

    return 0;
}
*/
//задача 2b
/*

#include <iostream>
#include <string.h>
struct kompleksnoe
{
    double vesh_chast;
    double mnimoe;
};

void soprazhennoe (kompleksnoe num1)
{
    std :: string edinica = "i";

    if(num1.mnimoe>0)
    {
        std :: cout << num1.vesh_chast << "- i * " << num1.mnimoe << std :: endl;
    }

    if(num1.mnimoe<0)
    {
        std :: cout << num1.vesh_chast << "+ i * " << num1.mnimoe*(-1) << std :: endl;
    }
    if(num1.mnimoe==0)
    {
        std :: cout << num1.vesh_chast << std :: endl;
    }
}

int main()
{
    kompleksnoe chislo = {13,-8};

    soprazhennoe(chislo);

    return 0;
}
*/
//задача 3
/*
#include<iostream>

struct Robot
{
    double gabarit;
    double mass;
    double vmax;
};

void minrobot ( Robot robo1,Robot robo2)
{
    if(robo1.gabarit<robo2.gabarit)
    {
        std :: cout << "It's robo1"
                    << std :: endl
                    << robo1.gabarit
                    << std :: endl
                    << robo1.mass
                    << std :: endl
                    << robo1.vmax
                    <<std :: endl;
    }

    if(robo2.gabarit<robo1.gabarit)
    {
        std :: cout << "It's robo2"
                    << std :: endl
                    << robo2.gabarit
                    << std :: endl
                    << robo2.mass
                    << std :: endl
                    << robo2.vmax
                    <<std :: endl;
    }

}

int main()
{
    Robot robo1 = {15.4,23,40};
    Robot robo2 = {10.1,45,25};
    minrobot(robo1,robo2);

    return 0;
}
*/
//задача 8
/*
#include<iostream>

struct Range
{
    double min;
    double max;
};

struct Sensor
{
    Range range;
    double error;
    double vmax;
};

void sravnenie_datchikov (Sensor datchik1,Sensor datchik2)
{
    if((datchik1.range.max - datchik1.range.min) > (datchik2.range.max - datchik2.range.min))
    {
        std :: cout << "It's datchik1"
                    << std :: endl
                    << "Range: "
                    << datchik1.range.min
                    << "  "
                    << datchik1.range.max
                    << std :: endl
                    << "Error: "
                    << datchik1.error
                    << std :: endl
                    << "Vmax: "
                    << datchik1.vmax
                    << std ::endl;
    }

    if((datchik2.range.max - datchik2.range.min) > (datchik1.range.max - datchik1.range.min))
    {
        std :: cout << "It's datchik2"
                    << std :: endl
                    << "Range: "
                    << datchik2.range.min
                    << "  "
                    << datchik2.range.max
                    << std :: endl
                    << "Error: "
                    << datchik2.error
                    << std :: endl
                    << "Vmax: "
                    << datchik2.vmax
                    << std ::endl;
    }
}

int main ()
{
    Sensor datchik1 = {0,12,2,100};
    Sensor datchik2 = {-1,17,4,85};

    sravnenie_datchikov(datchik1,datchik2);

    return 0;
}
*/
//задача 11

#include <iostream>
#include <string.h>

struct Robot_auto
{
    double skorost;
    double vremya_dvizheniya;
    std :: string nomer;
};

void func(Robot_auto tesla)
{
    std :: cout << tesla.skorost*tesla.vremya_dvizheniya << std :: endl;
}

int main()
{
    Robot_auto tesla = {70,3,"a307cc 82rus"};
    func(tesla);
}
