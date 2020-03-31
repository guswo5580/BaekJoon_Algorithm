/*
	DFS 깊이 우선 탐색
	=> BFS 와 마찬가지로 맹목적으로 전체 노드를 탐색할 때 사용

	Stack을 이용!! 
	재귀를 이용하는 것으로도 구현이 가능하다

	진행 흐름 
	1. 시작 노드 방문 -> 스택에 담는다 
	2. 인접한 노드 하나를 방문
	3. 방문한 노드에 대해서 인접한 노드를 방문 --- 반복 
	4. 더 이상 방문할 노드가 없을 때, 스택에서 해당 노드를 꺼낸다 --- 반복
	5. 아직 방문하지 않은 노드에 스택 top이 위치한다면
	6. 인접한 노드를 방문한다 --- 3.~ 4. 반복
	7. 4. 반복

*/
#include<iostream>
#include<vector>

using namespace std;

int number = 7; //전체 노드
int c[7]; //방문한 노드를 체크하는 배열
vector<int> a[8]; //후에 큐에서 꺼낸 값을 담을 배열

void dfs(int start) {
	if (c[start]) return; //이미 방문한 노드라면 반환
	
	//방문하지 않았다면
	c[start] = true; //방문처리
	cout << start << " ";

	//인접 노드에 대해서
	for (int i = 0; i < a[start].size(); i++) {
		int y = a[start][i]; //방문한 노드를 벡터(스택)에 추가
		dfs(y); //현재 방문한 노드에 대해서 다시 bfs를 시작
	}
}

int main() {
	//vector를 이용해 노드의 간선 연결하기

	//1과 2 노드는 서로 인접한 노드
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