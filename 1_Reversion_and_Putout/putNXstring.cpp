#include <iostream>
#include <string>

using namespace std;

//�Ż��ĳ�����Ϊһ����
int putNXstring()
{
	const int ArSize = 30;
	char astring[ArSize];//��תǰ
	char bstring[ArSize];//��ת��
	cout << "Enter the string��" << endl;
	cin.getline(astring, ArSize);//һ��һ���ַ��Ľ�������

	cout << "��ת����" << endl;
	cout << astring << endl;
	int num = 0;//��¼�ַ�����
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

	//cout << num;//����num

	for (int i = num - 1, j = 0; i >= 0; i--, j++)
	{
		bstring[j] = astring[i];
	}

	cout << bstring << endl;

	return 0;
}