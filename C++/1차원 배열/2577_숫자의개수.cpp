#include<cstdio>

int MAX = 1000;
int MIN = 100;

int main() {

	int A; //자연수 입력 
	int Multiple = 1; //입력값을 곱한 값 저장 
	int Count[10] = { 0, }; //곱한 값을 저장할 배열, 0으로 초기화
	
	for (int i = 0; i < 3; i++) {
		scanf("%d", &A); //A 변수에 입력값을 저장

		Multiple *= A; //A의 값들을 곱하기
	}

	//정수의 각 자리 수 알아내기 = 나머지 연산자 사용!! 
	while (Multiple > 0) { //조건 활용 = while
		
		Count[Multiple % 10] ++; //1의 자리부터 나머지 연산자를 적용, 수를 파악 -> 해당 번호 배열의 값 증가
		
		Multiple /= 10; //곱한 값을 1의 자리부터 버림
	}

	//Count배열 값을 출력
	for (int i = 0; i < 10; i++) {
		printf("%d \n", Count[i]);
	}

	return 0;
}