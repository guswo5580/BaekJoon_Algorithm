/*
	BFS �ʺ� �켱 Ž�� 
	- �͸����� ��ü Ž�� �� ��� 
	- "�ִ� ���"�� ã�µ� �ַ� �̿�

	Queue�� �̿�!!!

	���� ��� 
	
	1. ��� �ϳ��� ť�� ���� -> �湮ó�� 
	2. ť���� ��带 ������ 
	3. �湮�ߴ� ���� ������ ��带 ť�� ����
	4. �湮�� ��尡 ť�� �ִ��� ������ ��尡 �����Ѵٸ� ť�� ����
	5. �湮�� �Ϸ��� ���� ť���� ������

	=> �Ÿ��� ����� �ͺ��� Ž���� �̷������
*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int number = 7; //��ü ���
int c[7]; //�湮�� ��带 üũ�ϴ� �迭
vector<int> a[8]; //�Ŀ� ť���� ���� ���� ���� �迭

void bfs(int start) {
	queue<int> q;

	q.push(start); // ���� ��� �Է�
	c[start] = true; // �ش� ��带 �湮ó��

	while (!q.empty()) {
		int x = q.front(); //�湮 ��带 ������
		q.pop(); //���� ��带 ����
		cout << x;

		//���� x�� ������ ��忡 ���ؼ�
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if (!c[y]) { //y ��带 �湮���� �ʾҴٸ�
				q.push(y); //ť�� �����ϰ� 
				c[y] = true; //�湮ó��
			}
		}
	}
}

int main() {
	//vector�� �̿��� ����� ���� �����ϱ�
	
	//1�� 2 ���� ���� ������ ���
	a[1].push_back(2);
	a[2].push_back(1);

	a[1].push_back(3);
	a[3].push_back(1);

	a[2].push_back(3);
	a[3].push_back(2);

	a[2].push_back(4);
	a[4].push_back(2);

	a[2].push_back(5);
	a[5].push_back(2);

	a[3].push_back(6);
	a[6].push_back(3);

	a[3].push_back(7);
	a[7].push_back(3);

	a[6].push_back(7);
	a[7].push_back(6);

	bfs(1);


	return 0;
}