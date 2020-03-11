#include<cstdio>

int main() {
	int n;
	scanf("%d", &n);
	//행을 나타냄
	for (int i = 1; i <= n; i++) {
		//열을 나타냄
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}