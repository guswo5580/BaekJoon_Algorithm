#include<iostream>
using namespace std;

int main(){
	//���ڿ� �̿� ��, string�� Ȱ��
	string s;
	cin >> s;

	//a���� z���� �˻�
	for (int i = 'a'; i <= 'z'; i++) {
		//���ڿ� �� �˻��Ұ� ���� ��� 
		if (s.find(i) == string::npos)
			cout << -1 << " ";
		else {
			//�ִ� ���, �ε��� ��ȣ ��ȯ
			cout << s.find(i) << " ";
			//continue;
		}
	}

	/*
		find : ���ڿ� �� �ش��Ұ� �ִ��� �˻� 
		- ������ : ó�� ��Ÿ�� �ε��� ��ȯ 
		- ������ : string::npos�� ��ȯ 
	*/
	return 0;
}
