#include<iostream>
#include <string>
using namespace std;

#define MAX 10000

int main(){
	int index = 2; 
	string first, second; //�ε��� �񱳸� ���� ���ڿ��� ���� 

	cin >> first >> second; 

	//���ڿ��� ���ڸ����� �� ��, �ش� ���ڿ��� ������ ��� 
	while(index >= 0){
		if (first[index] == second[index]) { //���ڸ��� ������ 
			cout << first[index--]; //��� ��� �� index�� ���δ�
			continue;
			//ù ���ڸ� �� ����� ���� ������ index ���� ���� �ʰ�, ������ ��
			//ù ���ڸ� �� ����� ������, index�� �ϳ� �ٰ� ���� ������ ���� 
		}
		
		if (first[index] > second[index]) {
			while (index >= 0 ) {
				//index�� �ٿ����� ���
				cout << first[index--];
			}
		}
		else {
			while (index >= 0) {
				cout << second[index--];
			}
		}
	}

	return 0;
}
