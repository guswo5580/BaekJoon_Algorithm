#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
}
int main() {
	int a[10] = { 3,4,5,1,2,7,9,8,6,10 };

	//sort �̿� 
	//sort(�迭, �迭 ũ��, ������ ��) --- �⺻�� ��������
	sort(a, a + 10, compare);

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}


	return 0;
}