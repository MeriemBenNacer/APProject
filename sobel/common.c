#include <math.h>

#include "common.h"

//
void sort(f64 *a, u64 n)
{
  for (u64 i = 0; i < n; i++)
    for (u64 j = i + 1; j < n; j++)
      if (a[i] > a[j])
	{
	  u64 tmp = a[i];

	  a[i] = a[j];
	  a[j] = tmp;
	}
}

//Arithmetic mean
f64 mean(f64 *a, u64 n)
{
  f64 m = 0.0;

  for (u64 i = 0; i < n; i++)
    m += (f64)a[i];

  f64 inv_n = 1.0 / (f64)n;
  m *= inv_n; 
  
  return m;
}
f32 approx_sqrt(f32 x)
{
    float approx = x;
    int i;
    for(i = 0; i < 10; i++)
    {
        approx = 0.5 * (approx + x / approx);
    }
    return approx;
}
//Standard deviation
f64 stddev(f64 *a, u64 n)
{
  f64 d = 0.0;
  f64 m = mean(a, n);

  //
  for (u64 i = 0; i < n; i++)
    d += (a[i] - m) * (a[i] - m);

  d /= (f64)(n - 1);
  
  return approx_sqrt(d); 
}
