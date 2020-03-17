#include<iostream>
using namespace std;

int main(){
	//문자열 이용 시, string을 활용
	string s;
	cin >> s;

	//a부터 z까지 검사
	for (int i = 'a'; i <= 'z'; i++) {
		//문자열 내 검사요소가 없는 경우 
		if (s.find(i) == string::npos)
			cout << -1 << " ";
		else {
			//있는 경우, 인덱스 번호 반환
			cout << s.find(i) << " ";
			//continue;
		}
	}

	/*
		find : 문자열 내 해당요소가 있는지 검사 
		- 있으면 : 처음 나타난 인덱스 반환 
		- 없으면 : string::npos를 반환 
	*/
	return 0;
}
