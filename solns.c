/* Enter your solutions in this file */
#include <stdio.h>

int max (int a[], int n)
{
  int max = a[0];
  for (int i = 0; i < n; i++)
    {
      if (a[i] > max)
	max = a[i];
    }
  return max;
}


int min (int a[], int n)
{
  int min = a[0];
  for (int i = 0; i < n; i++)
    {
      if (a[i] < min)
	min = a[i];
    }
  return min;
}


float average (int a[], int n)
{
  float sum = 0;
  for (int i = 0; i < n; i++)
    {
      sum += a[i];
    }
  return sum / n;
}


int mode (int a[], int n)
{
  int count[n];
  for (int i = 0; i < n; i++)
    {
      count[i] = 0;
      for (int j = i; j < n; j++)
	{
	  if (a[i] == a[j])
	    count[i]++;
	}
    }
  int max = count[0], t;
  for (int k = 0; k < n; k++)
    {
      if (count[k] > max)
	{
	  max = count[k];
	  t = k;
	}
    }
  return a[t];
}


int factors (int n, int a[])
{
  int i = 0;
  while (n % 2 == 0)
    {
      a[i] = 2;
      i++;
      n = n / 2;
    }
  for (int j = 3; j <= n; j = j + 2)
    {
      while (n % j == 0)
	{
	  a[i] = j;
	  n = n / j;
	  i++;
	}
    }
  return i;
}
