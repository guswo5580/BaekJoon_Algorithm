#include<iostream>
using namespace std;

int Score[1000]; //���� ������ ���� �迭 

int main() {
	int N; //���� ���� ���� 
	int MAX = 0; //�ִ��� ���� ����

	float Result = 0; //��� ���� ���� ���� 

	cin >> N; 

	for (int i = 0; i < N; i++) { 
		cin >> Score[i]; //������ �Է¹޾� �迭�� ����

		if (MAX < Score[i]) { 
			//�ִ��� ã�� ����
			MAX = Score[i];
		}
	}
	
	for (int i = 0; i < N; i++) {
		//��� �� = Score�迭�� �� ���� / �ִ� * 100���� ����
		Result += (float)Score[i] / MAX * 100; //Ÿ���� ��ȭ ����
	}

	cout << Result;

	return 0;
}