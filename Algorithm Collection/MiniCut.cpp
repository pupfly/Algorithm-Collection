#include "MiniCut.h"

void mincut(const string& str, const set<string>& dict)
{
	if (str == "")
	{
		cout << "n/a" << endl;
		return;
	}
	string r;
	size_t len = str.length();
	size_t inf = len + 1;
	int** a = new int* [len];
	int** l = new int* [len];
	int* min_pos = new int[len];
	for (size_t i = 0; i < len; i++)
	{
		a[i] = new int[len];
		l[i] = new int[len];
		min_pos[i] = inf;
	}
	//计算a[i][j],a[i][j]表示str[i:j]是否在dict中（0/1：否/是）
	for (size_t i = 0; i < len; i++)
	{
		for (size_t j = i; j < len; j++)
		{
			a[i][j] = dict.count(str.substr(i, j - i + 1));
			l[i][j] = inf;
		}
	}
	for (size_t i = 0; i < len; i++)
	{
		if (a[0][i] == 1)
		{
			l[0][i] = 1;
			min_pos[i] = 0;
		}
	}
	for (size_t i = 1; i < len; i++)
	{
		for (size_t t = i; t < len; t++)
		{
			if (a[i][t] == 1)
			{
				if (min_pos[i - 1] != inf)
				{
					l[i][t] = l[min_pos[i - 1]][i - 1] + 1;
					if (min_pos[t] == inf || l[i][t] < l[min_pos[t]][t])
					{
						min_pos[t] = i;
					}
				}
			}
		}
	}
	if (min_pos[len - 1] == inf)
	{
		cout << "n/a" << endl;
	}
	else
	{
		int pos = len - 1;
		while (pos >= 0)
		{
			r = str.substr(min_pos[pos], pos - min_pos[pos] + 1) + " " + r;
			pos = min_pos[pos] - 1;
		}
		cout << "result:" << r.substr(0, r.length() - 1) << "#" << endl;
	}
	/*for (size_t i = 0; i < len; i++)
	{
		for (size_t m = 0; m < i; m++)
		{
			cout << "  ";
		}
		for (size_t j = i; j < len; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (size_t i = 0; i < len; i++)
	{
		for (size_t m = 0; m < i; m++)
		{
			cout << "  ";
		}
		for (size_t j = i; j < len; j++)
		{
			cout << l[i][j] << " ";
		}
		cout << endl;
	}*/


	for (size_t i = 0; i < len; i++)
	{
		delete[] a[i];
		delete[] l[i];
		//cout << min_pos[i] << "";
	}
	delete[] a;
	delete[] l;
	delete[] min_pos;
}
