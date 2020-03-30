#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	//vector를 이용한 pair 설정
	//각 원소는 하나의 int = first, 하나의 string = second로 구성된다
	//이용은 v로 단순화해서 사용할 수 있다 
	vector<pair<int, string>> v; 

	//push_back = 배열의 마지막 원소에 삽입
	v.push_back(pair<int, string>(90, "조현재")); //pair와 삽입 Data 정의 유의
	v.push_back(pair<int, string>(85, "최 환"));
	v.push_back(pair<int, string>(99, "박원일"));
	v.push_back(pair<int, string>(95, "박진영"));

	//begin = vector의 처음 원소, end  = vector의 마지막 원소
	//기준을 정하지 않으면 pair의 int 요소로 판별
	sort(v.begin(), v.end()); 

	for (int i = 0; i < v.size(); i++) { //vector의 크기 = size
		//vector의 각 요소 접근
		cout << v[i].second << " "; //first = pair의 첫 원소, second = pair의 두 번째 원소
	}

	return 0;
}