#include<iostream>
using namespace std;

int Count[42] = { 0, }; //0~42������ �������� ������ ������ �迭

int main() {

	int Num; //10���� ���� �Է¹��� ���� 

	int Find = 0; //���� �ٸ� �������� ������ �� �����ϴ� ���� 

	for (int i = 0; i < 10; i++) {
		cin >> Num;

		// Count[Num % 42] ++; �Է°��� 42�� ������ ���� �ľ�, �ش� �迭 ��ġ�� ���� ���� 

		if (!Count[Num % 42]) { //�迭�� 0�� 0�� �ƴ� ���� �Ǻ��� ���� ����!!! 
			Find++;
		}
	}
	cout << Find << endl;

	return 0; 
}