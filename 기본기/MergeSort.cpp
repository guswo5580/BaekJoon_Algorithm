#include<iostream>

using namespace std;

/*
	병합 정렬 : 일단 반으로 나누고, 나중에 합치면서 정렬
	=> 항상 반으로 나눈다? 피벗 X , 각 단계가 logN을 보장

	1. 8개의 원소가 있을 때 2개씩 5묶음으로 나눈다 
	2. 나뉜 묶음 안에서 2개씩 정렬한다 
	3. 인접 원소의 묶음을 모아 2+2=4개의 원소로 묶는다 
	4. 다시 정렬을 수행한다.
	5. 과정을 반복한다

	일반적으로 퀵 정렬보다 낫다고 할 수는 없지만
	퀵 정렬의 N^2이 나오는 한계점을 보완할 수 있다
*/


int sorted[8]; //매번 정렬 & 병합된 원소를 담는 배열

//배열을 정렬하면서 합치기
void merge(int a[], int m, int middle, int n) {
	//m = 왼쪽 배열 시작, middle = 합치는 중간지점, n = 오른쪽 배열 끝
	int i = m, j = middle + 1;
	int k = m; //sorted 함수 진행을 위한 변수

	while (i <= middle && j <= n) { //i가 속한 집합과 j가 속한 집합을 차례로 비교
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		
		//i, j가 속한 각 집합은 이미 정렬이 되어있기 때문에 진행이 가능
		k++; 
	}

	//i가 속한 집합이 먼저 끝날 경우, j의 남은 원소를 삽입
	if (i > middle) {
		for (int t = j; t <= n; t++) {
			sorted[k] = a[t];
			k++;
		}
	}

	//j가 속한 집합이 먼저 끝날 경우, i의 남은 원소를 삽입
	else {
		for (int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	}

	//정렬한 배열을 원래 배열에 삽입
	for (int t = m; t <= n; t++) {
		a[t] = sorted[t];
	}
}

//배열을 나눈다
void mergeSort(int a[], int m, int n) { //배열, 첫번째, 끝
	if (m < n) { //정렬이 되어있지 않을 때
		int middle = (m + n) / 2; //반으로 나눈다

		//왼쪽과 오른쪽으로 기준으로 계속 나눈다
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);

		//나눈 배열로 정렬, 병합 시작
		merge(a, m, middle, n);
	}
}

int main(){

	int arr[8] = { 7,6,5,8,3,4,9,1 };

	mergeSort(arr, 0, 7);
	
	for (int i = 0; i < 8; i++) {
		cout << arr[i];
	}

	return 0;
}
