#include<iostream>
using namespace std;

int main(){
	
	int N, R;
	string S;

	cin >> N;

	//Testcase �ݺ� 
	for (int i = 0; i < N; i++) {
		//cin�� �����Ͽ� �Է¹��� �� ������ ���� 
		cin >> R >> S; 
		
		//�Է¹��� ���ڿ��� ��ȸ 
		for (int j = 0; j < S.length(); j++) {
			//�ݺ� Ƚ����ŭ �ش� ���� ����
			for (int k = 0; k < R; k++) {
				cout << S[j];
			}
		}

		cout << endl;
	}
	return 0;
}
