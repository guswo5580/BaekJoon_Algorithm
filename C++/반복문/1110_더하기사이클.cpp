#include<iostream>
//속도 향상을 위한 장치 
#define endl '\n'
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num; //입력 숫자
	int left; //왼쪽 숫자
	int right; // 오른 쪽 숫자

	int sum; //left + right 

	int result; //새로 진행될 수 
	
	int count; //진행 횟수 

	cin >> num; 
	if (num < 10) {
		//입력 수가 10보다 작은 한 자리 수이면 10을 곱
		num *= 10; 
	}

	result = num; //진행될 결과의 시작 = 초기 입력값 

	while (1) {
		left = result / 10; //사이클 결과값의 10의 자리
		right = result % 10; //사이클 결과값의 1의 자리 

		sum = left + right; 

		result = (right * 10) + (sum % 10); //새로운 사이클의 결과값 도출, right = 10의 자리,sum = 1의 자리

		count++; //진행 횟수를 가산 

		if (num == result) //초기 입력값과 사이클의 결과값이 같아지면 
			break;
	}
	cout << count; 

	return 0;
}