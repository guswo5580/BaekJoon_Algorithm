#include<cstdio>

int main() {
	int n;
	scanf("%d", &n);
	//���� ��Ÿ��
	for (int i = 1; i <= n; i++) {
		//���� ��Ÿ��
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}