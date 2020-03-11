#include<cstdio>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		//공백 = 입력 수 - 행 순서 
		for (int j = n; j > i; j--) {
			printf(" ");
		}
		//별 = 입력 수 - 공백 수 
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}