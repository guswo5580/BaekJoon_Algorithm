#include<iostream>
using namespace std;

int main() {
	int scores[1000]; //�Է¹��� �л��� ���� 
	int Test; //�׽�Ʈ ����
	int N; //�л��� �� 
	int count = 0; //��������� ���� �л��� count

	cin >> Test;

	while (Test--) {
		double avg = 0; //�л� ��ü�� ��� ���� 

		double StdAvg = 0; //��� ���� �̻��� �л� ����, �����
		
		cin >> N;

		for (int i = 0; i < N; i++) {
			//�迭�� ���� �Է� 
			cin >> scores[i];
			//������ �� 
			avg += scores[i];
		}

		avg = (double)avg / N; //�л� ��ü�� ���� ���

		for (int i = 0; i < N; i++) {
			//�л��� ���� > ��ü ����̸� 
			if (scores[i] > avg) {
				count++; 
			}
		}

		StdAvg = (double)count / N * 100; //��� ���� �̻��� �л��� �����
		
		cout.precision(3); //�Ҽ��� �ڸ��� ����
		cout << fixed << StdAvg << "%" << endl;
		//fixed = �Ҽ��� �Ʒ��θ� precision�� ����
	}

	return 0;
}