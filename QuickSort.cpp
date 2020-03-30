#include<iostream>

using namespace std;

/*
	�� ���� : Ư���� ���� �������� ������ ������ ������ ����
	�ǹ� = ù ����, �������� ������ �� 

	���� -> ���� �� : �ǹ����� ū ���� ã�´�
	���� �� -> ���� : �ǹ����� ���� ���� ã�´� 
		=> �� ������ ��ġ�� �ٲ۴� 

	������ ��� : ���� ���� �Ǻ��� ���� �ٲ۴� 
	�ٲ� ������ �ǹ� ���� �������� ���ʰ� �������� �ǹ����� ���� ���� ū ������ ����

	=> ���ĵ� ������ �ǹ��� �������� ����, ���� �� ���� ���տ� ���� ���� ����� ������ ����
*/

//����, ������ ������ �ϳ��� �����Ǹ� ���� ������ ������ ��
void quickSort(int* data, int start, int end) {  //�迭, ������, ���� 
	if (start >= end) {
		return;
	}

	int key = start; //key���� ù ����
	int i = start + 1, j = end; //i = �� ��° ���� , j = �� ���� 

	int temp;

	while (i <= j) { //���� ������ ������ ��
		while (data[i] <= data[key]) { //key������ ū ���� ���� ������
			i++;
		}
		while (data[j] >= data[key] && j > start) { //key������ ���� ���� ���� ������, ������ �Ѿ�� �ʵ��� ���� 
			j--;
		}

		if (i > j) {//���� �����ȴٸ� j ��ġ�� key���� ��ü
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {//�������� �ʾҴٸ� j �� i�� ��ü
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}

		//���ĵ� �ǹ��� �������� ���ʰ� ���������� �ٽ� ������ ����
		quickSort(data, start, j - 1);
		quickSort(data, j + 1, end);
	}
}

int main(){
	int number = 10;
	int data[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

	quickSort(data, 0, number - 1);

	for (int i = 0; i < number; i++) {
		cout << data[i];
	}

	return 0;
}
