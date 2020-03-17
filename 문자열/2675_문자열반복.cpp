#include<iostream>
using namespace std;

int main(){
	
	int N, R;
	string S;

	cin >> N;

	//Testcase 반복 
	for (int i = 0; i < N; i++) {
		//cin을 나열하여 입력받을 수 있음에 유의 
		cin >> R >> S; 
		
		//입력받은 문자열을 순회 
		for (int j = 0; j < S.length(); j++) {
			//반복 횟수만큼 해당 문자 증가
			for (int k = 0; k < R; k++) {
				cout << S[j];
			}
		}

		cout << endl;
	}
	return 0;
}
