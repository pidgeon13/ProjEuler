#include "P15.h"

bint P15::Factorial(bint n)
{
  if (n == 0)
  {
    return 0ll;
  }
  if (n == 1)
  {
    return 1ll;
  }
  return n * Factorial(n-1);
}

bint P15::Combin(bint n)
{
  bint prod = 1;
  int i = n;
  for (; i > n / 2; --i)
  {
    prod *= (4*i - 2);
  }
  prod /= Factorial(i);
  return prod;
}
