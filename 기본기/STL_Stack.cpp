#include<iostream>
#include<stack>

using namespace std;

int main() {
	//int Ÿ���� stack�� ����
	stack<int> s;

	//Stack ���̺귯�� ���
	s.push(7);
	s.push(4);
	s.push(3);
	s.push(2);
	s.pop();
	s.pop();

	//stack�� ����� ��, while Ż��
	while (!s.empty()) {
		//top�� �̿��� ������ ���
		cout << s.top() << " ";
		//��� �Ŀ��� pop�� �̿��� top�� ��ġ�� ����
		s.pop();

	}

	return 0;
}