/*
	BFS 너비 우선 탐색 
	- 맹목적인 전체 탐색 시 사용 
	- "최단 경로"를 찾는데 주로 이용

	Queue를 이용!!!

	진행 방식 
	
	1. 노드 하나를 큐에 삽입 -> 방문처리 
	2. 큐에서 노드를 꺼낸다 
	3. 방문했던 노드와 인접한 노드를 큐에 삽입
	4. 방문한 노드가 큐에 있더라도 인접한 노드가 존재한다면 큐에 삽입
	5. 방문을 완료한 것은 큐에서 꺼낸다

	=> 거리가 가까운 것부터 탐색이 이루어진다
*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int number = 7; //전체 노드
int c[7]; //방문한 노드를 체크하는 배열
vector<int> a[8]; //후에 큐에서 꺼낸 값을 담을 배열

void bfs(int start) {
	queue<int> q;

	q.push(start); // 시작 노드 입력
	c[start] = true; // 해당 노드를 방문처리

	while (!q.empty()) {
		int x = q.front(); //방문 노드를 꺼낸다
		q.pop(); //꺼낸 노드를 삭제
		cout << x;

		//꺼낸 x와 인접한 노드에 대해서
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if (!c[y]) { //y 노드를 방문하지 않았다면
				q.push(y); //큐에 삽입하고 
				c[y] = true; //방문처리
			}
		}
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

	bfs(1);


	return 0;
}