/**=================================================================================================
 * @file	test5.22.cpp.
 *
 * Implements the test 5.22 class
 * 练习 5.22： 本节的最后一个例子跳回到 begin, 其实使用循环能更好地完成该任务。重写这段代码，注意不要使用goto语句。
 *  
 *  思路：
 *  首先不知道get_size( )这个函数是干嘛的，自定义一下，产生随机数即可。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;

int get_size() {
	int i = (rand() % (20 - 1 + 1)) + 1;
	cout <<"产生随机数是："<<" "<< i<<"    ";
	return i;
}
int main() {
	for (int i = 0; i < get_size(); ++i) {
		cout << "循环次数：" << " " << i + 1 <<" ";
		cout << "i值：" << " " << i << endl;
	}
	return 0;
}
