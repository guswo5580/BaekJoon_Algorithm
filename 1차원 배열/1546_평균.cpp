#include<iostream>
using namespace std;

int Score[1000]; //시험 점수를 담을 배열 

int main() {
	int N; //시험 과목 개수 
	int MAX = 0; //최댓값을 담을 변수

	float Result = 0; //평균 값을 담을 변수 

	cin >> N; 

	for (int i = 0; i < N; i++) { 
		cin >> Score[i]; //점수를 입력받아 배열에 저장

		if (MAX < Score[i]) { 
			//최댓값을 찾아 변경
			MAX = Score[i];
		}
	}
	
	for (int i = 0; i < N; i++) {
		//평균 값 = Score배열의 각 점수 / 최댓값 * 100으로 변경
		Result += (float)Score[i] / MAX * 100; //타입의 변화 유의
	}

	cout << Result;

	return 0;
}