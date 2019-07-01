#include "MaxBuy.h"

void MaxBuy(int money)
{
	//商品价格
	int p[] = { 150,200,350 };
	//最多购买件数
	int max_n = money / 150;
	int temp_money = 0;
	Array(int, 2, 10001) a;
	for (int i = 0; i <= money; i++)
	{
		a[0][i] = find_pre(p, 0, 2, i);
	}
	for (int i = 1; i <= max_n; i++)
	{
		for (int j = 1; j <= money; j++)
		{
			a[i % 2][j] = a[(i - 1) % 2][j];
			if (temp_money = find_pre(p, 0, 2, j))
			{
				a[i % 2][j] = max2(a[(i - 1) % 2][j], a[(i - 1) % 2][j - 150] + 150);
				if (j >= 200)
				{
					a[i % 2][j] = max2(a[i % 2][j], a[(i - 1) % 2][j - 200] + 200);
				}
				if (j >= 350)
				{
					a[i % 2][j] = max2(a[i % 2][j], a[(i - 1) % 2][j - 350] + 350);
				}
			}
		}
	}
	cout << "三种商品单价分别为：150，200,350（元/件），" << "给出总资金：" << money << \
		",最多花掉：" << a[max_n % 2][money] << ",剩余：" << money - a[max_n % 2][money] << endl;
}
