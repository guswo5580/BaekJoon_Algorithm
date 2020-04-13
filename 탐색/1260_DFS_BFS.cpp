#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX = 1001;

int N, M, V;
bool check[MAX]; //방문했는지 파악

int adjacent[MAX][MAX]; //인접 행렬

//인접 리스트 이차원 벡터
//vector<vector<int>> adjacent_list; 
vector<int> adjacent_list[MAX];

void bfs(int index) {

	queue<int> answer; //방문 노드 저장 큐

	answer.push(index);  //시작 노드 큐에 삽입
	check[index] = true; //시작 노드 방문처리 

	//인접 노드 탐색 시작
	while (!answer.empty()) {
		int x = answer.front(); //front에 위치한 노드 추출
		answer.pop(); //꺼낸 노드를 삭제
		cout << x << " ";

		/*
			범위 기반 for문 
			배열을 순회 -> i에 해당 값을 대입
			i를 바탕으로 내부 연산 
			배열의 위치 이동
			
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
		int u, v; //간선 입력
		cin >> u >> v;

		//인접 간선 부여
		adjacent_list[u].push_back(v);
		adjacent_list[v].push_back(u);
	}

	for (int i = 1; i <= N; i++) {
		//각 노드 방문, 정렬 
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
			//인접 행렬 생성
			//두 정점에 가중치 1, 0을 주어 간선을 형성
			int from, to;
			cin >> from >> to;
			adjacent[from][to] = 1;
			adjacent[to][from] = 1;
		}
	*/
}
/*
	//이중 벡터의 각 요소 접근 방법

	for (int i = 0; i < adjacent_list.size(); i++) {
		for (int j = 0; j < adjacent_list[i].size(); j++) {
			cout << adjacent_list[i][j];
		}
	}
*/