#include "common.h"

int find_pre(int a[], int p, int r, int dest)
{
	if (p >= r)
	{
		if (a[p] == dest)
		{
			return dest;
		}
		else if (a[p] < dest)
		{
			return a[p];
		}
		else
		{
			return p > 0 ? a[p - 1] : 0;
		}
	}
	else
	{
		if (a[(r + p) / 2] == dest)
		{
			return dest;
		}
		else if (a[(r + p) / 2] > dest)
		{
			return find_pre(a, p, (r + p) / 2 - 1, dest);
		}
		else
		{
			return find_pre(a, (r + p) / 2 + 1, r, dest);
		}
	}
}
