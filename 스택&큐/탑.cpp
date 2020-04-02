#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;

	stack<int> st; //출력 값을 저장할 스택
	bool check = false; //수신할 탑을 찾았는지 여부

	for (int i = heights.size() - 1; i >= 0; i--) { //자신을 제외하고 뒤부터 검사
		for (int j = i - 1; j >= 0; j--) {//i보다 하나 앞에서 i와 나머지 요소를 검사
			if (heights[j] > heights[i]) {
				st.push(j + 1); //스택에 index + 1값을 저장
				check = true; //체크 표시

				break;
			}
		}
		if (!check) { //자기보다 큰 타워가 없다면
			st.push(0); //0을 스택에 삽입
		}
		check = false; //체크 초기화
	}
	while (!st.empty()) { //stack이 빌 때까지
		answer.push_back(st.top()); //벡터의 뒤에서 삽입
		st.pop(); //스택의 값 꺼내기
	}

	return answer;
}