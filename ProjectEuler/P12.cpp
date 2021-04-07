#include "P12.h"

bint P12::GetTriangleNumber(bint n)
{
  return n*(n+1)/2;
}

bint P12::GetDivisors(bint n)
{
  if (n == 1)
  {
    return 1;
  }
  bint sqrtn = sqrt(n);
  bint divisors = 2;
  for (bint i = 2; i <= sqrtn; ++i)
  {
    if (n % i == 0)
    {
      divisors += 2;
    }
  }
  if (sqrtn*sqrtn == n)
  {
    divisors--;
  }
  return divisors;
}
