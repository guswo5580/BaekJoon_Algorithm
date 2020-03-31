#include<iostream>
#include<queue>

using namespace std;

int main() {
	//int 타입의 stack을 생성
	queue<int> s;

	//Stack 라이브러리 사용
	s.push(7);
	s.push(4);
	s.push(3);
	s.push(2);
	s.pop();
	s.pop();

	//queue가 비었을 때, while 탈출
	while (!s.empty()) {
		//front 위치에 있는 것을 출력
		cout << s.front() << " ";

		//출력 후에는 pop을 이용해 queue를 비워주기
		s.pop();

	}

	return 0;
}