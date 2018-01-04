/*
文本操作第一个项目
	逆转字符串——输入一个字符串，将其逆转并输出
*/
#include <iostream>
#include <string>

using namespace std;
int putNXstring();
int reverse_1();
int reverse_2();
int reverse_3();
int main()
{
	//putNXstring();

	//调用优化过后的程序
	//reverse_1();
	/*
	注：当碰到字符串中的空格时默认结束输入；
	*/

	//直接调用现成的函数reverse（）函数
	//reverse_2();
	/*
	注：当碰到字符串中的空格时默认结束输入。
	*/
	reverse_3();

	return 0;
}

