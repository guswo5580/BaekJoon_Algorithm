#include<iostream>
//속도 향상을 위한 장치 
#define endl '\n'
using namespace std;
int main() {
	//cin,cout의 속도 저하를 보완
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	/*
		//공백을 입력하는 경우 = EOF 를 이용하여 판단 
		while (scanf("%d %d", &a, &b) != EOF) {
			printf("%d\n", a + b);
		}
	*/
	while (cin >> a >> b) {
		cout << a + b << endl;
	}
	return 0;
}