#include<iostream>
using namespace std;

int Count[42] = { 0, }; //0~42까지의 나머지의 개수를 저장할 배열

int main() {

	int Num; //10개의 수를 입력받을 변수 

	int Find = 0; //서로 다른 나머지가 나왔을 때 증가하는 변수 

	for (int i = 0; i < 10; i++) {
		cin >> Num;

		// Count[Num % 42] ++; 입력값을 42로 나누어 수를 파악, 해당 배열 위치의 값을 증가 

		if (!Count[Num % 42]) { //배열의 0과 0이 아닌 수를 판별할 때의 조건!!! 
			Find++;
		}
	}
	cout << Find << endl;

	return 0; 
}