#include<iostream>
#include <string>
using namespace std;

#define MAX 10000

int main(){

	int cnt = 0;

	//cin�� Ȱ���Ͽ� ������ ������ ���ڿ��� �Է�
	char str[MAX];
	cin.getline(str, MAX);

	//���ڿ� ��ȸ --- ������ ���� �ܾ Ȯ�� 
	for (int i = 0; i < strlen(str); i++) {
		//������ Ȯ��
		if (str[i] == ' ') {  
			//�� ó��, null ������ ������ ���ڿ��� ������ �ܾ��� ���� X
			if (i != 0 && i != strlen(str) - 1) { 
				cnt++; 
			}
		}
	}
	
	//���� �ѱ��ڸ� �Է��� ���
	if (strlen(str) == 1 && str[0] == ' ')
		cout << cnt << endl;

	//������ �� = ������ �� + 1
	else cout << cnt + 1 << endl;




	return 0;
}
