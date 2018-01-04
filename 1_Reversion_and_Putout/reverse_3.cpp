/*
使用string::reverse_iterator迭代器进行迭代使用。
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
	使用迭代器的时候有两种迭代器，其中分别是正向迭代器和反向迭代器，
	这里使用了反向迭代器string::reverse_iterator rIt ;
	正向迭代器是string::iterator rIt ;
	*/
	for (rIt = s.rbegin(); rIt != s.rend(); ++rIt)
	{
		cout << *rIt;
	}
	return 0;
}