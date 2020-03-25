#include<iostream>
#include <string>

using namespace std;

int main(){
	
	int A, B, C; 

	cin >> A >> B >> C;

	//손익분기점 
	//A + Bx < Cx 인 경우 
	//x > A/(C-B)의 식을 얻을 수 있다

	//C-B를 계산
	C -= B; 
	
	//C-B가 음수, 0인 경우 손익분기점 X 
	if (C <= 0) cout << -1 << endl;

	//x > A/(C-B)이므로 초과하는 정수를 반환
	else cout << (A / C) + 1 << endl;

	
	return 0;
}
