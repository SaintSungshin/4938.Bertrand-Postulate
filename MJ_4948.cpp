#include <iostream>
using namespace std;

//º£¸£Æ®¶û °øÁØ ¼Ò¼ö(4938) - ±è¹ÎÁø

int getPrime(int num) {
	int count = 0;
	int total = 0;
	for (int i = num + 1; i <= (2 * num); i++) {
		for (int j = 2; j <= i; j++) {
			if (i % j == 0)
				count++;
		}
		if (count == 1)
			total++;
		
		count = 0;
	}
	return total;
}
int main() {
	 
	const int MAX = 123456;
	int list[MAX];
	
	for (int i = 0; i < MAX; i++) {
		cin >> list[i];
		if (list[i] == 0)
			break;
	}
	
	int j = 0;
	while (1) {
		
		if (list[j] != 0)
			cout << getPrime(list[j]) << endl;
		else 
			break;
		j++;
	}

	system("pause");
	return 0;
}