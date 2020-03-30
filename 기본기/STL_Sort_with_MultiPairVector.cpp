#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//vector - pair 이용 시, 비교 함수 선언
bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
	if (a.second.first == b.second.first) {
		//점수가 같다면, 생년월일로 구분
		return a.second.second > b.second.second;
	}
	else {
		//아니라면 점수가 큰 쪽을 반환
		return a.second.first > b.second.first;
	}
}

int main() {

	//이중 pair 활용
	vector<pair<string, pair<int, int>>> v;

	//v.push_back(pair<string, pair<int, int>>("조현재", pair<int, int>(90, 19940308)));
	//make_pair 이용하기
	v.push_back(pair<string, pair<int, int>>("조현재", make_pair(90, 19940308)));
	v.push_back(pair<string, pair<int, int>>("최 환", make_pair(85, 19930726)));
	v.push_back(pair<string, pair<int, int>>("박원일", make_pair(96, 19920108)));
	v.push_back(pair<string, pair<int, int>>("박진영", make_pair(91, 19930416)));

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " ";
	}

	return 0;
}