//ʹ�����������ת
#include <iostream>
#include <string>

using namespace std;

int reverse_1()
{
	string s;
	cin >> s;
	for (int i = s.size() - 1; i >= 0; --i)
	{
		cout << s[i];
	}
	cout << endl;
	return 0;
}