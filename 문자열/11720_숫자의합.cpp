#include<iostream>
using namespace std;

int main(){
	int input, sum = 0;

	char num; //���ڿ� ���� 
	
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> num;
		//���ڿ��� ���� = �ƽ�Ű �ڵ� ��
		//�ƽ�Ű�ڵ� - 48('0') = ���� ���� �� 
		sum += num - 48;  
	}

	cout << sum << endl;

	return 0;
}
