#pragma once
#include <iostream>
#include <array>
using namespace std;
//���п��ñ�������Ķ�ά����
#define Array(type, row, col) array<array<type, (int)(col)>, (int)(row)>
inline int max2(int n1, int n2) { return n1 > n2 ? n1 : n2; }
inline int max3(int n1, int n2, int n3) { return max2(max2(n1, n2), n3); }
//�������������һ�������ҵ������е�һ�������ڴ�������
int find_pre(int[], int, int, int);