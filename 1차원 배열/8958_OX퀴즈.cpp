#include<iostream>
using namespace std;

int main() {
	char Test[80]; //입력받을 OX 
	int N; //입력받을 test 개수 
	int sequence = 0; //실행한 test 개수

	int correct = 0; //맞은 개수  
	int score = 0; //총점

	cin >> N;

	while (N > sequence) { //입력 test 만큼 수행 
		cin >> Test; 
		
		//Test 문자열을 순회
		for (int i = 0; i < strlen(Test); i++) {
			if (Test[i] == 'O') {
				correct++;
				score += correct;
			}
			else {
				//하나라도 틀리면 연속 정답이 깨지므로 correct를 초기화
				correct = 0;
			}
		}

		//각 테스트 별로 출력 
		cout << score << endl;

		//기존 값 초기화
		correct = 0;
		score = 0;

		//진행 횟수 증가 
		sequence++;
	}

	return 0;
}