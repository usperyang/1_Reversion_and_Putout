/*
ʹ��string::reverse_iterator���������е���ʹ�á�
*/

#include <iostream>
#include <string>

using namespace std;

int reverse_3()
{
	string s;
	cin >> s;
	string::reverse_iterator rIt = s.rbegin();
	/*
	ʹ�õ�������ʱ�������ֵ����������зֱ�������������ͷ����������
	����ʹ���˷��������string::reverse_iterator rIt ;
	�����������string::iterator rIt ;
	*/
	for (rIt = s.rbegin(); rIt != s.rend(); ++rIt)
	{
		cout << *rIt;
	}
	return 0;
}