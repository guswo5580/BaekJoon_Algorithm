#include<iostream>
using namespace std;

int main(){
	int input, sum = 0;

	char num; //문자열 생성 
	
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> num;
		//문자열의 숫자 = 아스키 코드 값
		//아스키코드 - 48('0') = 내부 숫자 값 
		sum += num - 48;  
	}

	cout << sum << endl;

	return 0;
}
