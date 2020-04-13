#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX = 1001;

int N, M, V;
bool check[MAX]; //�湮�ߴ��� �ľ�

int adjacent[MAX][MAX]; //���� ���

//���� ����Ʈ ������ ����
//vector<vector<int>> adjacent_list; 
vector<int> adjacent_list[MAX];

void bfs(int index) {

	queue<int> answer; //�湮 ��� ���� ť

	answer.push(index);  //���� ��� ť�� ����
	check[index] = true; //���� ��� �湮ó�� 

	//���� ��� Ž�� ����
	while (!answer.empty()) {
		int x = answer.front(); //front�� ��ġ�� ��� ����
		answer.pop(); //���� ��带 ����
		cout << x << " ";

		/*
			���� ��� for�� 
			�迭�� ��ȸ -> i�� �ش� ���� ����
			i�� �������� ���� ���� 
			�迭�� ��ġ �̵�
			
			for (int i : adjacent_list[x]) {
				if (!check[i]) {
					check[i] = true;
					answer.push(i);
				}
			}
		*/

		for (int i = 0; i < adjacent_list[x].size(); i++) {
			int y = adjacent_list[x][i];
			if (!check[y]) {
				check[y] = true;
				answer.push(y);
			}
		}
	}
}

void dfs(int index) {
	check[index] = true;
	cout << index << " ";

	for (int i : adjacent_list[index]) {
		if (!check[i]) {
			dfs(i);
		}
	}
}

int main() {
	
	cin >> N >> M >> V; 

	//adjacent_list.assign(N, vector<int>());

	for (int i = 0; i < M; i++) {
		int u, v; //���� �Է�
		cin >> u >> v;

		//���� ���� �ο�
		adjacent_list[u].push_back(v);
		adjacent_list[v].push_back(u);
	}

	for (int i = 1; i <= N; i++) {
		//�� ��� �湮, ���� 
		sort(adjacent_list[i].begin(), adjacent_list[i].end());
	}

	dfs(V);
	cout << endl;

	memset(check, 0, sizeof(check));
	bfs(V);

	return 0;

	/*
		for (int i = 0; i < M; i++)
		{
			//���� ��� ����
			//�� ������ ����ġ 1, 0�� �־� ������ ����
			int from, to;
			cin >> from >> to;
			adjacent[from][to] = 1;
			adjacent[to][from] = 1;
		}
	*/
}
/*
	//���� ������ �� ��� ���� ���

	for (int i = 0; i < adjacent_list.size(); i++) {
		for (int j = 0; j < adjacent_list[i].size(); j++) {
			cout << adjacent_list[i][j];
		}
	}
*/