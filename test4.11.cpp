/**=================================================================================================
 * @file	test4.11.cpp.
 *
 * Implements the test 4.11 class
 * 练习 4.11: 书写一条表达式用于测试 4 个值 a、 b、 c、 d 的关系， 确保 a 大于 b、 b 大于 c、 c 大于 d。
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	cout << "输入4个数字" << endl;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a > b) && (b > c) && (c > d)) {
		cout << "a>b>c>d" << endl;
	}
	else {
		cout << "非递减序列" << endl;
	}
}