#include<iostream>
using namespace std;

int function(int num)
{
	int total = 0;
	int realTotal = 0;

	for (int i = (num + 1); i < (num * 2); i++)
	{
		for (int m = 2; m < i; m++)
		{
			if (i%m == 0)
				total++;
		}
		if (total == 0)
			realTotal++;
	}
	return realTotal;
}

int main()
{
	cout << "123456보다 작은 양의 정수를 입력하세요.(단, 0을 눌러야 끝이 납니다.) : " << endl;

	while (1)
	{
		int userNumber;
		cin >> userNumber;
		cout << function(userNumber) << endl;
		if (userNumber <= 0)
			break;
	}

	system("pause");
	return 0;
}
