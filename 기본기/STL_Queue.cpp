#include<iostream>
#include<queue>

using namespace std;

int main() {
	//int Ÿ���� stack�� ����
	queue<int> s;

	//Stack ���̺귯�� ���
	s.push(7);
	s.push(4);
	s.push(3);
	s.push(2);
	s.pop();
	s.pop();

	//queue�� ����� ��, while Ż��
	while (!s.empty()) {
		//front ��ġ�� �ִ� ���� ���
		cout << s.front() << " ";

		//��� �Ŀ��� pop�� �̿��� queue�� ����ֱ�
		s.pop();

	}

	return 0;
}