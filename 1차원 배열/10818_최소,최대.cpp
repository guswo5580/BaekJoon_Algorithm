#include<cstdio>

int MAX = -1000000;
int min = 1000000;

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a); // n개 정수 입력 

		//입력할 때마다 이전 최대, 최소 값과 비교
		if (MAX < a)
			MAX = a;

		if (min > a)
			min = a;
	}
	//공백을 포함한 최대 최소 출력 
	printf("%d %d\n", min, MAX);
	return 0;
}