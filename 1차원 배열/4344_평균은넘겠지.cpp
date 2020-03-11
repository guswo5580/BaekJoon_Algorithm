#include<iostream>
using namespace std;

int main() {
	int scores[1000]; //입력받을 학생의 점수 
	int Test; //테스트 개수
	int N; //학생의 수 
	int count = 0; //평균점수를 넘은 학생을 count

	cin >> Test;

	while (Test--) {
		double avg = 0; //학생 전체의 평균 점수 

		double StdAvg = 0; //평균 점수 이상의 학생 비율, 백분율
		
		cin >> N;

		for (int i = 0; i < N; i++) {
			//배열에 점수 입력 
			cin >> scores[i];
			//점수의 합 
			avg += scores[i];
		}

		avg = (double)avg / N; //학생 전체의 점수 평균

		for (int i = 0; i < N; i++) {
			//학생의 점수 > 전체 평균이면 
			if (scores[i] > avg) {
				count++; 
			}
		}

		StdAvg = (double)count / N * 100; //평균 점수 이상의 학생의 백분율
		
		cout.precision(3); //소수점 자리수 결정
		cout << fixed << StdAvg << "%" << endl;
		//fixed = 소수점 아래로만 precision을 적용
	}

	return 0;
}