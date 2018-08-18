#include <iostream>
#include <string>

int main()
{
int a,b, mayor;
std::cout<< "Ingrese primer número:\n";
std::cin>> a;
std::cout<<"Ingrese segundo numero:\n";
std::cin>> b;
mayor=(a>b)? a : b ;
std::cout<<"El mayor es:" <<mayor;
          
return 0;
}
