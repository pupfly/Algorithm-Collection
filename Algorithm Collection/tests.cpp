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
	//输出提示
	cout << "测试用最少空格将字符串按字典划分……" << endl;
	string strS;
	string dictStr;
	int nDict;
	set<string> dict;
	cout << "输入要划分的字符串：";
	cin >> strS;
	cout << "输入字典中的单词数：";
	cin >> nDict;
	cout << "依次输入单词：";
	for (int i = 0; i < nDict; i++)
	{
		cin >> dictStr;
		dict.insert(dictStr);
	}

	mincut(strS, dict);
}
