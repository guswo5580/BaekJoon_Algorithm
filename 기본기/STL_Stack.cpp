#include<iostream>
#include<stack>

using namespace std;

int main() {
	//int 타입의 stack을 생성
	stack<int> s;

	//Stack 라이브러리 사용
	s.push(7);
	s.push(4);
	s.push(3);
	s.push(2);
	s.pop();
	s.pop();

	//stack이 비었을 때, while 탈출
	while (!s.empty()) {
		//top을 이용해 위에서 출력
		cout << s.top() << " ";
		//출력 후에는 pop을 이용해 top의 위치를 조정
		s.pop();

	}

	return 0;
}