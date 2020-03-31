/*
	DFS ���� �켱 Ž��
	=> BFS �� ���������� �͸������� ��ü ��带 Ž���� �� ���

	Stack�� �̿�!! 
	��͸� �̿��ϴ� �����ε� ������ �����ϴ�

	���� �帧 
	1. ���� ��� �湮 -> ���ÿ� ��´� 
	2. ������ ��� �ϳ��� �湮
	3. �湮�� ��忡 ���ؼ� ������ ��带 �湮 --- �ݺ� 
	4. �� �̻� �湮�� ��尡 ���� ��, ���ÿ��� �ش� ��带 ������ --- �ݺ�
	5. ���� �湮���� ���� ��忡 ���� top�� ��ġ�Ѵٸ�
	6. ������ ��带 �湮�Ѵ� --- 3.~ 4. �ݺ�
	7. 4. �ݺ�

*/
#include<iostream>
#include<vector>

using namespace std;

int number = 7; //��ü ���
int c[7]; //�湮�� ��带 üũ�ϴ� �迭
vector<int> a[8]; //�Ŀ� ť���� ���� ���� ���� �迭

void dfs(int start) {
	if (c[start]) return; //�̹� �湮�� ����� ��ȯ
	
	//�湮���� �ʾҴٸ�
	c[start] = true; //�湮ó��
	cout << start << " ";

	//���� ��忡 ���ؼ�
	for (int i = 0; i < a[start].size(); i++) {
		int y = a[start][i]; //�湮�� ��带 ����(����)�� �߰�
		dfs(y); //���� �湮�� ��忡 ���ؼ� �ٽ� bfs�� ����
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

	dfs(1);


	return 0;
}