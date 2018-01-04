/*
使用#include <algorithm>中的reverse(s.begin(),s.end())函数进行字符串翻转。
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int reverse_2()
{
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}