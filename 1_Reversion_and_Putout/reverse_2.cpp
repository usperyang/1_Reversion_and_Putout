/*
ʹ��#include <algorithm>�е�reverse(s.begin(),s.end())���������ַ�����ת��
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