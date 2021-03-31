#include "Useful.h"
#include "Prob10.h"

void P10::GetPrimesUpTo(bint n, std::vector<bint>& primes)
{
  primes.reserve(n / 3);
  for (bint i = 2; i < n; ++i)
  {
    bint sqrti = sqrt(i);
    bool isPrime = true;
    for (bint prime : primes)
    {
      if (prime > sqrti)
      {
        break;
      }
      if (i % prime == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      primes.push_back(i);
    }
  }
}

bint P10::SumVector(const std::vector<bint> vec)
{
  bint sum = 0;
  for (auto num : vec)
  {
    sum += num;
  }
  return sum;
}
