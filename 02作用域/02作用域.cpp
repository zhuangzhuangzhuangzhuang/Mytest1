#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int a = 10;

int main()
{
	int a = 20;
	//�ͽ�ԭ��
	cout << a << endl;
	cout << ::a << endl;

	system("pause");
	return EXIT_SUCCESS;
}

