/*
	Dynamic Programming
	하나의 문제에 대해 단 한번만 풀도록 하는 알고리즘 
	다시 알고리즘이 필요할 때는 값만 제시할 수 있도록

	이용 상황
	1. 큰 문제를 작은 문제로 나누는 경우
	2. 작은 문제에서 구한 정답 -> 큰 문제에서도 동일한 경우
	 : 피보나치 수열의 경우, 15번 = 14번 + 13번, 14번 = 13번 + 12번 ... 
	   15번을 구하는 문제 = 큰 문제, 14번을 구하는 문제 = 큰 문제에 속한 작은 문제 
	   14번의 값 -> 15번을 구할 때, 구한 답이 그대로 쓰인다

	=> 매번 새로운 인자를 구하는 것이 아니라 한번 구한 값은 배열 등에 저장해놓고 꺼내쓸 수 있도록 작성
*/

#include<iostream>
using namespace std;

//dp의 결과를 저장할 배열
int storage[100];

int No_dp(int x) {
	
	if (x == 1) return 1;
	if (x == 2) return 1;

	return No_dp(x - 1) + No_dp(x - 2);

}

int dp(int x) {

	if (x == 1) return 1;
	if (x == 2) return 1;
	
	//연산을 수행하기 전에 이전 결과값을 저장한 배열을 확인
	if (storage[x] != 0) return storage[x];

	//연산을 수행해야 한다면 연산의 결과를 배열에 저장하고 연산을 지속
	return storage[x] = dp(x - 1) + dp(x - 2);

	//만약 일정 수준 이상의 값이 들어와 연산의 오버플로우가 의심되는 경우
	//나머지 연산자를 이용해 0의 값으로 return 한다 
	return storage[x] = dp(x - 1) + dp(x - 2) % 10000;
}

/*
	dp VS No_dp

	No_dp의 경우, x를 구하기 위해 x이전의 연산을 매번 새롭게 수행해야한다 
	=> N의 높이를 가지고, 각각 2번의 연산이 필요하므로 N^2 만큼의 수행시간이 필요하다 

	dp의 경우, x를 구하기 위해 x이전의 연산의 결과를 저장하여 수행 횟수를 줄인다 
	=> N의 높이를 가지고, 2번의 연산이 1번씩 수행되므로 N만큼의 수행시간이 걸린다 
*/

int main() {

	cout << No_dp(20) << endl;
	cout << dp(20) << endl;

	return 0;
}