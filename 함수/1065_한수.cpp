#include<iostream>
using namespace std;

int cnt = 0;

void figure(int n) {
	for (int i = 1; i <= n; i++) {
		if (i < 100) {
			//1~99������ ��� ��������
			cnt++;
		}

		if (i >= 100 && i <= 1000) {
			//3�ڸ� ������ ��
			//100�� �ڸ� - 10�� �ڸ� == 10�� �ڸ� - 1�� �ڸ�
			if (i/100 - (i/10)%10 == (i/10)%10 - i%10) {
				cnt++; 
			}
		}
	}

	cout << cnt;
}

int main(){
	int N; 

	cin >> N;

	figure(N);

	return 0;
}
