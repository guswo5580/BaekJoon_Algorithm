#include<iostream>
using namespace std;

int main() {
	char Test[80]; //�Է¹��� OX 
	int N; //�Է¹��� test ���� 
	int sequence = 0; //������ test ����

	int correct = 0; //���� ����  
	int score = 0; //����

	cin >> N;

	while (N > sequence) { //�Է� test ��ŭ ���� 
		cin >> Test; 
		
		//Test ���ڿ��� ��ȸ
		for (int i = 0; i < strlen(Test); i++) {
			if (Test[i] == 'O') {
				correct++;
				score += correct;
			}
			else {
				//�ϳ��� Ʋ���� ���� ������ �����Ƿ� correct�� �ʱ�ȭ
				correct = 0;
			}
		}

		//�� �׽�Ʈ ���� ��� 
		cout << score << endl;

		//���� �� �ʱ�ȭ
		correct = 0;
		score = 0;

		//���� Ƚ�� ���� 
		sequence++;
	}

	return 0;
}