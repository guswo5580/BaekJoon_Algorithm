#include<iostream>

using namespace std;

//���� = 6���� --- 1�� �߽����� 6���� �þ�� 
//1 layer = 2~7, 2 layer = 8~19 --- 
int main(){
	
	int N; 
	int layer = 0; //6�� �����Ǵ� ��

	cin >> N;

	for (int i = 2; i <= N; layer++) {
		//6*1 -> 6*2 -> --- ������� N�� ���Ѵ� 
		i += 6 * layer;
	}
	if (N == 1) layer = 1; 

	cout << layer << endl;
	
	return 0;
}
