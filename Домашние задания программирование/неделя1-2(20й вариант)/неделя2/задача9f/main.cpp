#include <iostream>
#include <cmath>

//конвертер бар, паскаль, фунт на квадратный дюйм
int main()
{
  double pascal,bar,pound;
  int a,b,c;

  std ::cout << "Please choose: " << std :: endl;
  std ::cout  << "1 - Pascal,2 - Bar,3 - Pount" << std :: endl;
  std :: cin >> a;
  if(a==1)
  {
  std ::cout  << "Enter the amount: ";
  std :: cin >> pascal;
  std ::cout  << "Choosing value" << std :: endl;
  std ::cout  << "1 - Bar,2 - Pount, to: " << std :: endl;
  std :: cin >> c;

  if(c==1)
  {
  bar = 0.00001 * pascal;
  std :: cout << pascal << " Pascal = " << bar << " Bar" << std :: endl;
  }

  else if (c==2)
  {
  pound = 0.00015 * pascal;
  std :: cout << pascal << " Pascal = " << pound << " Pound" << std :: endl;
  }

  else
  {
  std :: cout << "Error";
  }

  }



  else if(a==2)
  {
  std ::cout  << "Enter the amount: ";
  std :: cin >> bar;
  std ::cout  << "Choosing value" << std :: endl;
  std ::cout  << "1 - Pascal,2 - Pount, to: " << std :: endl;
  std :: cin >> c;

  if(c==1)
  {
  pascal = 100000 * bar;
  std :: cout << bar << " Bar = " << pascal << " Pascal" << std :: endl;
  }

  else if (c==2)
  {
  pound = bar * 15;
  std :: cout << bar << " Bar = " << pound << " Pound" << std :: endl;
  }

  else
  {
  std :: cout << "Error";
  }

  }


  else if(a==3)
  {
  std ::cout  << "Enter the amount: ";
  std :: cin >> pascal;
  std ::cout  << "Choosing value" << std :: endl;
  std ::cout  << "1 - Pascal,2 - Bar, to: " << std :: endl;
  std :: cin >> c;

  if(c==1)
  {
  pascal = 0.00001 * pound;
  std :: cout << pound << " Pound = " << pascal << " Pascal" << std :: endl;
  }

  else if (c==2)
  {
  bar = 0.00015 * pound;
  std :: cout << pound << " Pound = " << bar << " Bar" << std :: endl;
  }

  else
  {
  std :: cout << "Error";
  }
  std :: cout << "Error";
  }

  else
  {}
    return 0;
}
