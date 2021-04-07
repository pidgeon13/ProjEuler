#include "P11.h"

bint P11::GetMaxProd(bint n, const std::vector<std::vector<bint>>& grid)
{
  size_t gridSize = grid.size();
  bint maxProd = 0;
  for (size_t row = 0; row < gridSize; ++row)
  {
    bool bCanGoVert = row <= gridSize - n;
    for (size_t column = 0; column < gridSize; ++column)
    {
      bool bCanGoHorzDown = column <= gridSize - n;
      bool bCanGoHorzUp = column >= n;
      if (bCanGoVert)
      {
        bint prod = 1; 
        for (size_t k = 0; k < n; ++k)
        {
          prod *= grid[row + k][column];
        }
        if (prod > maxProd)
        {
          maxProd = prod;
        }
      }
      if (bCanGoHorzDown)
      {
        bint prod = 1;
        for (size_t k = 0; k < n; ++k)
        {
          prod *= grid[row][column + k];
        }
        if (prod > maxProd)
        {
          maxProd = prod;
        }
      }
      if (bCanGoVert && bCanGoHorzDown)
      {
        bint prod = 1;
        for (size_t k = 0; k < n; ++k)
        {
          prod *= grid[row + k][column + k];
        }
        if (prod > maxProd)
        {
          maxProd = prod;
        }
      }
      if (bCanGoVert && bCanGoHorzUp)
      {
        bint prod = 1;
        for (size_t k = 0; k < n; ++k)
        {
          prod *= grid[row + k][column - k];
        }
        if (prod > maxProd)
        {
          maxProd = prod;
        }
      }
    }
  }
  return maxProd;
}
