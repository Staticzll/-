﻿
#include <iostream>
using  namespace std;

int main()
{
	// 加减乘除
	int a1 = 10;
	int b1 = 3; 
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; // 两个整数相除 结果依然是证书，将小数部分去除

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl; // 两个数相除，除数不可以为0；

	// 两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl; // 运算的结果也可能是小数
	system("pause"); 
	return 0;
}