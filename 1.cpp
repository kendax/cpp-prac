#include <iostream>

double square(double x) //squares a double precision floating-point number
{
      return x*x;
}

void print_square(double x)
{
      std::cout << "The square of " << x << " is " << square(x) << '\n';
}

int main() 
{
      print_square(2.343);
      print_square(2);
}