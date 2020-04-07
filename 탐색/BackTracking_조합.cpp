/*
	Back Tracking
	=> DFS, BFS를 이용해 탐색을 진행할 때,
	전부다 탐색하지 않고 조건에 맞는 일부만 탐색하는 방법

	Ex) 중복을 허용한 집합의 부분집합을 도출하는 경우
	{1, 2 ,3}
	= 공집합 + {1}, {2}, {3},{1,2}, {1,3}, {2,1}, {2,3}, {3,1}, {3,2}, {1,2,3}, {1,3,2}, {2,1,3}, {2,3,1}, {3,1,2}, {3,2,1}

	위와 같이 모든 요소에 대해 탐색을 진행하는 경우를 "완전 탐색"이라고 한다

	Ex) 집합의 부분집합 중 2개의 원소로 이루어진 부분집합을 도출하는 경우
	= n P m(중복 허용) , n C m 과 같이 순열 혹은 조합을 구하는 경우

	위와 같이 조건에 따라 부분적인 요소에 대해 탐색을 진행하는 경우를 "부분 탐색"이라고 한다

	아래의 예시는 n C m 조합을 구하는 코드이다(재귀 DFS 기반)
*/

#include<iostream>
#include<vector>
using namespace std;

const int MAX = 9;
vector<int> v; //조건에 맞는 탐색한 수 저장
bool visit[MAX]; //탐색 여부 저장
int n, m;

void process(int index, int cnt) {
	//n에서 m개의 부분집합을 찾은 경우
	if (cnt == m) {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;

		return; //부분집합을 찾아 출력 후 재귀 지점으로 돌아가 남은 함수를 수행
	}

	for (int i = index; i <= n; i++) {
		if (!visit[i]) { //해당 수를 방문했는지 체크
			visit[i] = true;
			v.push_back(i);

			//조합의 경우, (1,2)와 (2,1)이 허용되지 않기 때문에
			//탐색하여 추출한 시작 index의 값을 넘겨주어야 한다
			process(i, cnt + 1); //재귀를 수행

			///////////////////////////////
			//DFS로 깊이가 끝까지 도달했을 때, 되돌아오며 변수들을 초기화 해준다
			//재귀의 귀환 지점 

			visit[i] = false;
			v.pop_back();
		}
	}
}

void process_start() {
	process(1, 0); //인덱스는 1부터 검사, cnt는 0부터 시작
}

int main() {
	cin >> n >> m;

	process_start();

	return 0;
}
