//#include <cmath>
#include <iostream>

/*the function below can be completely replaced by including the cmath standard library, but I wanted to do it without using it*/

double remainder (double number, double oprtr)
{ 
    int div = number/oprtr;
    double rem  = number - oprtr*div;
    return rem;
}

int cpu;

double fizzbuzz;

std::string fb = "";


int main(){

std::cout << "this program is made to check if a given number is divisable by 3 (fizz), 5 (buzz) or both(fizzbuzz), so please a number greater than zero and press enter"  << std::endl;
std::cin >> cpu ;
fizzbuzz = remainder (cpu,3);

if (cpu <= 0)
{
std::cout << "I said greater than zero";
return 0;
}

if (fizzbuzz == 0)
    {
    fb += "fizz";
    }

fizzbuzz = remainder (cpu,5);

if (fizzbuzz == 0)
    {
    fb += "buzz";
    }


std::cout << fb << std::endl;


}


