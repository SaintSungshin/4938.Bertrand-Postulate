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
		if (list[i] == 0)	//0�� �Է��ϸ� �Է��� �׸� �ޱ�
			break;

		i++;
	}

	//n���� ũ�� 2n���� �۰ų� ���� �Ҽ��� ������ ��� �迭
	int count[NUMBER] = { 0 };


	int b = 0;
	int a = 0;
	while (list[b] != 0) {
		for (int j = list[b] + 1; j <= list[b] * 2; j++) {
			int k = 2;	//������ ��
			while(k<j) {
				a = j % k;
				if (a == 0)	//�Ҽ��� �ƴѼ�
					break;
				k++;
			}
			if (k == j)	//�Ҽ��� ��
				count[b]++;
		}
		b++;
	}

	for (int l = 0; l <i ; l++)
		cout << count[l] << endl;

	system("pause");
	return 0;
}