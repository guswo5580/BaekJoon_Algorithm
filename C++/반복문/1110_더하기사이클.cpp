#include<iostream>
//�ӵ� ����� ���� ��ġ 
#define endl '\n'
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num; //�Է� ����
	int left; //���� ����
	int right; // ���� �� ����

	int sum; //left + right 

	int result; //���� ����� �� 
	
	int count; //���� Ƚ�� 

	cin >> num; 
	if (num < 10) {
		//�Է� ���� 10���� ���� �� �ڸ� ���̸� 10�� ��
		num *= 10; 
	}

	result = num; //����� ����� ���� = �ʱ� �Է°� 

	while (1) {
		left = result / 10; //����Ŭ ������� 10�� �ڸ�
		right = result % 10; //����Ŭ ������� 1�� �ڸ� 

		sum = left + right; 

		result = (right * 10) + (sum % 10); //���ο� ����Ŭ�� ����� ����, right = 10�� �ڸ�,sum = 1�� �ڸ�

		count++; //���� Ƚ���� ���� 

		if (num == result) //�ʱ� �Է°��� ����Ŭ�� ������� �������� 
			break;
	}
	cout << count; 

	return 0;
}