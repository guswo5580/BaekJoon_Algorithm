#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
}
int main() {
	int a[10] = { 3,4,5,1,2,7,9,8,6,10 };

	//sort 이용 
	//sort(배열, 배열 크기, 정의한 비교) --- 기본은 오름차순
	sort(a, a + 10, compare);

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}


	return 0;
}