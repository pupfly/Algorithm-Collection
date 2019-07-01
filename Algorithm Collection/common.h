#pragma once
#include <iostream>
#include <array>
using namespace std;
//行列可用变量定义的二维数组
#define Array(type, row, col) array<array<type, (int)(col)>, (int)(row)>
inline int max2(int n1, int n2) { return n1 > n2 ? n1 : n2; }
inline int max3(int n1, int n2, int n3) { return max2(max2(n1, n2), n3); }
//给定升序数组和一个数，找到数组中第一个不大于此数的数
int find_pre(int[], int, int, int);