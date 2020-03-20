#include<iostream>
#include <string>
using namespace std;

#define MAX 10000

int main(){
	int index = 2; 
	string first, second; //인덱스 비교를 위해 문자열로 선언 

	cin >> first >> second; 

	//문자열의 끝자리부터 비교 후, 해당 문자열의 역순을 출력 
	while(index >= 0){
		if (first[index] == second[index]) { //끝자리가 같으면 
			cout << first[index--]; //요소 출력 후 index를 줄인다
			continue;
			//첫 끝자리 비교 결과가 같지 않으면 index 값은 줄지 않고, 끝부터 비교
			//첫 끝자리 비교 결과가 같으면, index는 하나 줄고 다음 연산을 수행 
		}
		
		if (first[index] > second[index]) {
			while (index >= 0 ) {
				//index를 줄여가며 출력
				cout << first[index--];
			}
		}
		else {
			while (index >= 0) {
				cout << second[index--];
			}
		}
	}

	return 0;
}
