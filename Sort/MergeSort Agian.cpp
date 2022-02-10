#include <iostream>
using namespace std;

void
merge (int a[], int s, int mid, int e)
{
  int p = s, q = mid + 1, k = 0, size = ((e - s) + 1);
  a[size];
  for (int i = s; i <= e; i++)
    {
      if (p > mid)
	{
	  a[k++] = a[q++];
	}
      else if (q > e)
	{
	  a[k++] = a[p++];
	}
      else if (a[p] < a[q])
	{
	  a[k++] = a[p++];
	}
      else
	{
	  a[k++] = a[q++];
	}
    }
  for (int i = 0; i < k; i++)
    {
      a[s++] = a[p];
    }
}

void
merge_sort (int a[], int s, int e)
{
  if (s < e)
    {
      int mid = (s + e) / 2;
      merge_sort (a, s, mid);
      merge_sort (a, mid + 1, e);
      merge (a, s, mid, e);
    }
    return;
}

int
main ()
{
  int arr[] = { 2, 3, 4 };
  int size = sizeof (arr) / sizeof (arr[0]);
  merge_sort (arr, 0, size - 1);
  for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }

  return 0;
}
