#include<cstdio>
int main() {
	//n = 총 개수 , x = 비교 정수 , a = 수열(배열)
	int n, x, a;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		//총 개수 만큼 수열을 입력
		scanf("%d", &a);
		//입력 받은 수열과 x를 비교 & 출력
		if (a < x) printf("%d ", a);
	}
	return 0;
}