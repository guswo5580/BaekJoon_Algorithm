#include<cstdio>
int main() {
	//n = �� ���� , x = �� ���� , a = ����(�迭)
	int n, x, a;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		//�� ���� ��ŭ ������ �Է�
		scanf("%d", &a);
		//�Է� ���� ������ x�� �� & ���
		if (a < x) printf("%d ", a);
	}
	return 0;
}