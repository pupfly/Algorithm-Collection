#include "tests.h"

void Tests()
{
	TestMaxBuy();
	TestMiniCut();
}

void TestMaxBuy()
{
	MaxBuy(10000);
	for (int i = 0; i < 110; i += 10)
	{
		for (int j = 0; j < 1000; j += 100)
		{
			MaxBuy(i + j);
		}
	}
}

void TestMiniCut()
{
	//�����ʾ
	cout << "���������ٿո��ַ������ֵ仮�֡���" << endl;
	string strS;
	string dictStr;
	int nDict;
	set<string> dict;
	cout << "����Ҫ���ֵ��ַ�����";
	cin >> strS;
	cout << "�����ֵ��еĵ�������";
	cin >> nDict;
	cout << "�������뵥�ʣ�";
	for (int i = 0; i < nDict; i++)
	{
		cin >> dictStr;
		dict.insert(dictStr);
	}

	mincut(strS, dict);
}
