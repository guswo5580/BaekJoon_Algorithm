#include<iostream>

using namespace std;

int main(){
	
	int N; 
	int cnt = 0; 

	cin >> N; 

	//�׸��� �˰����� �̿� 
	//�ʿ� ���� ������ ���� ������ �� �ʿ��� ������ �����Ѵ�

	while (true) {
		if (N % 5 == 0) { //5kg ������ ������ �������� ��� 
			cnt += N / 5;
			cout << cnt << endl;
			break; 
		}
		else if (N <= 0) {
			cout << -1 << endl;
			break;
		}
		//5�� ������ �������� ������ 3kg ������ ��´� 
		else {
			N -= 3;
			cnt++; 
		}
	}
	
	return 0;
}
