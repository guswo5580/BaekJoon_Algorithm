#include<iostream>
#include <string>

using namespace std;

int main(){
	
	int A, B, C; 

	cin >> A >> B >> C;

	//���ͺб��� 
	//A + Bx < Cx �� ��� 
	//x > A/(C-B)�� ���� ���� �� �ִ�

	//C-B�� ���
	C -= B; 
	
	//C-B�� ����, 0�� ��� ���ͺб��� X 
	if (C <= 0) cout << -1 << endl;

	//x > A/(C-B)�̹Ƿ� �ʰ��ϴ� ������ ��ȯ
	else cout << (A / C) + 1 << endl;

	
	return 0;
}
