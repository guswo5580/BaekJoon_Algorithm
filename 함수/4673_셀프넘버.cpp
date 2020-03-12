#include<iostream>

using namespace std;

bool N[10001]; //1���� 10000���� 

//d(n)�� ���ϴ� �Լ� = ���� �ѹ��� �ƴ� ���� ã�� �Լ� 
int Figure(int n) {
	int sum = n;  //ó�� �ڱ� �ڽ��� ���Ѵ� 

	//n = int ���� , �ڸ����� �ٿ� 0.xx �� �������� ���� while�� Ż��!!! 
	while (n) { 
		sum += n % 10; //1�� �ڸ��� �߰��� ���Ѵ� 
		n /= 10; //n�� �ڸ����� �ٿ��ش� 
	}
	return sum;
}

int main() {

	for (int i; i < 10001; i++) { //bool �迭�� ��ȸ
		
		int index = Figure(i); 

		N[index] = true; //�����ڰ� �ִ� ���� �迭 ��ġ ���� true�� ����
	}

	for (int i = 1; i < 10001; i++) { //�迭�� 1������ 10001��Ҹ� �˻� 
		
		if(!N[i]) //bool �迭�� false ���� ����
			cout << N[i] << endl;
		
	}

	return 0;
}
