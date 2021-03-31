#include "Useful.h"
#include "Prob9.h"

void P9::Prod(bint n)
{
  for (bint i = 1; i < n / 3; ++i)
  {
    for (bint j = i; j < n / 2; ++j)
    {
      bint k = n - i - j;
      if (k*k == (i * i) + (j * j))
      {
        std::cout << k * i*j << std::endl;
      }
    }
  }
}