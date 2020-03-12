#include<iostream>
#include<vector>

using namespace std;


//문제에서 정의한 vector STL을 사용 
long long sum(vector<int>, &a) {
	
	long long sum = 0; 

	//STL의 vector 내부 메서드 --- size : 배열의 크기!!! 
	for (int i = 0; i < a.size(); i++) {
		sum += a[i];
	}

	return sum; 
}