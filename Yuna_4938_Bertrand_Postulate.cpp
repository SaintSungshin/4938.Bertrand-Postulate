#include<iostream>
using namespace std;

int main()
{
	cout << "Enter the number : ";
	const int NUMBER = 123456;
	int list[NUMBER];

	int i = 0; 
	while (i < NUMBER) {
		cin >> list[i];
		if (list[i] == 0)	//0을 입력하면 입력을 그만 받기
			break;

		i++;
	}

	//n보다 크고 2n보다 작거나 같은 소수의 갯수를 담는 배열
	int count[NUMBER] = { 0 };


	int b = 0;
	int a = 0;
	while (list[b] != 0) {
		for (int j = list[b] + 1; j <= list[b] * 2; j++) {
			int k = 2;	//나누는 수
			while(k<j) {
				a = j % k;
				if (a == 0)	//소수가 아닌수
					break;
				k++;
			}
			if (k == j)	//소수인 수
				count[b]++;
		}
		b++;
	}

	for (int l = 0; l <i ; l++)
		cout << count[l] << endl;

	system("pause");
	return 0;
}
