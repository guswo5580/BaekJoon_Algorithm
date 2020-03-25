#include<iostream>

using namespace std;

int main(){
	
	int N; 
	int cnt = 0; 

	cin >> N; 

	//그리디 알고리즘을 이용 
	//필요 없는 조건을 먼저 제거한 후 필요한 조건을 적용한다

	while (true) {
		if (N % 5 == 0) { //5kg 봉지로 나누어 떨어지는 경우 
			cnt += N / 5;
			cout << cnt << endl;
			break; 
		}
		else if (N <= 0) {
			cout << -1 << endl;
			break;
		}
		//5로 나누어 떨어지기 전까지 3kg 봉지에 담는다 
		else {
			N -= 3;
			cnt++; 
		}
	}
	
	return 0;
}
