// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Useful.h"
#include "P12.h"

int main()
{
  /*for (bint i = 1; i < 15; ++i)
  {
    bint triangle = P12::GetTriangleNumber(i);
    std::cout << triangle << ": " << P12::GetDivisors(triangle) << ", ";
  }*/
  bint i = 10;
  /*while (true)
  {
    bint triangle = P12::GetTriangleNumber(i);
    bint divisors = P12::GetDivisors(triangle);
    if (divisors > 500)
    {
      std::cout << triangle << ": " << divisors;
      break;
    }
    ++i;
  }*/
  std::cout << P12::GetDivisors(12375) << ": " << P12::GetDivisors(12376);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
