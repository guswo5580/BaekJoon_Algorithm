#include<iostream>

using namespace std;

bool N[10001]; //1부터 10000까지 

//d(n)을 구하는 함수 = 셀프 넘버가 아닌 값을 찾는 함수 
int Figure(int n) {
	int sum = n;  //처음 자기 자신을 더한다 

	//n = int 변수 , 자릿수를 줄여 0.xx 로 내려가는 순간 while을 탈출!!! 
	while (n) { 
		sum += n % 10; //1의 자리를 추가로 더한다 
		n /= 10; //n의 자리수를 줄여준다 
	}
	return sum;
}

int main() {

	for (int i; i < 10001; i++) { //bool 배열을 순회
		
		int index = Figure(i); 

		N[index] = true; //생성자가 있는 값의 배열 위치 값을 true로 변경
	}

	for (int i = 1; i < 10001; i++) { //배열의 1번부터 10001요소를 검사 
		
		if(!N[i]) //bool 배열의 false 값을 추출
			cout << N[i] << endl;
		
	}

	return 0;
}
