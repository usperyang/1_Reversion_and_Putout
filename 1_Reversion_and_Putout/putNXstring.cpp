#include <iostream>
#include <string>

using namespace std;

//优化的程序作为一个类
int putNXstring()
{
	const int ArSize = 30;
	char astring[ArSize];//逆转前
	char bstring[ArSize];//逆转后
	cout << "Enter the string：" << endl;
	cin.getline(astring, ArSize);//一个一个字符的进行输入

	cout << "逆转操作" << endl;
	cout << astring << endl;
	int num = 0;//记录字符长短
	for (int i = 0; i < ArSize; i++)
	{
		if (astring[i] >= 'a' && astring[i] <= 'z')
		{
			num++;
		}
		else if (astring[i] >= '0' && astring[i] <= '9')
		{
			num++;
		}
		else if (astring[i] >= 'A' && astring[i] <= 'Z')
		{
			num++;
		}

	}

	//cout << num;//测试num

	for (int i = num - 1, j = 0; i >= 0; i--, j++)
	{
		bstring[j] = astring[i];
	}

	cout << bstring << endl;

	return 0;
}