#include<iostream>
using namespace std;

int cnt = 0;

void figure(int n) {
	for (int i = 1; i <= n; i++) {
		if (i < 100) {
			//1~99까지는 모두 등차수열
			cnt++;
		}

		if (i >= 100 && i <= 1000) {
			//3자리 숫자일 때
			//100의 자리 - 10의 자리 == 10의 자리 - 1의 자리
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
