#include<iostream>
//�ӵ� ����� ���� ��ġ 
#define endl '\n'
using namespace std;
int main() {
	//cin,cout�� �ӵ� ���ϸ� ����
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	/*
		//������ �Է��ϴ� ��� = EOF �� �̿��Ͽ� �Ǵ� 
		while (scanf("%d %d", &a, &b) != EOF) {
			printf("%d\n", a + b);
		}
	*/
	while (cin >> a >> b) {
		cout << a + b << endl;
	}
	return 0;
}