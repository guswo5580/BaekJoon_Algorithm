#include<cstdio>

int MAX = 1000;
int MIN = 100;

int main() {

	int A; //�ڿ��� �Է� 
	int Multiple = 1; //�Է°��� ���� �� ���� 
	int Count[10] = { 0, }; //���� ���� ������ �迭, 0���� �ʱ�ȭ
	
	for (int i = 0; i < 3; i++) {
		scanf("%d", &A); //A ������ �Է°��� ����

		Multiple *= A; //A�� ������ ���ϱ�
	}

	//������ �� �ڸ� �� �˾Ƴ��� = ������ ������ ���!! 
	while (Multiple > 0) { //���� Ȱ�� = while
		
		Count[Multiple % 10] ++; //1�� �ڸ����� ������ �����ڸ� ����, ���� �ľ� -> �ش� ��ȣ �迭�� �� ����
		
		Multiple /= 10; //���� ���� 1�� �ڸ����� ����
	}

	//Count�迭 ���� ���
	for (int i = 0; i < 10; i++) {
		printf("%d \n", Count[i]);
	}

	return 0;
}