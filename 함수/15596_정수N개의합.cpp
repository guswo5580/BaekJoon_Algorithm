#include<iostream>
#include<vector>

using namespace std;


//�������� ������ vector STL�� ��� 
long long sum(vector<int>, &a) {
	
	long long sum = 0; 

	//STL�� vector ���� �޼��� --- size : �迭�� ũ��!!! 
	for (int i = 0; i < a.size(); i++) {
		sum += a[i];
	}

	return sum; 
}