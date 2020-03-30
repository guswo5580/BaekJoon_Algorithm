#include<iostream>

using namespace std;

/*
	퀵 정렬 : 특정한 값을 기준으로 반으로 나누어 정렬을 수행
	피벗 = 첫 원소, 오름차순 정렬일 때 

	왼쪽 -> 오른 쪽 : 피벗보다 큰 값을 찾는다
	오른 쪽 -> 왼쪽 : 피벗보다 작은 값을 찾는다 
		=> 두 원소의 위치를 바꾼다 

	엇갈린 경우 : 작은 값과 피봇의 값을 바꾼다 
	바뀐 기존의 피벗 값을 기준으로 왼쪽과 오른쪽은 피벗보다 작은 값과 큰 값으로 정렬

	=> 정렬된 기존의 피벗을 기준으로 왼쪽, 오른 쪽 원소 집합에 대해 같은 방식의 정렬을 진행
*/

//왼쪽, 오른쪽 끝에서 하나씩 증감되며 서로 교차할 때까지 비교
void quickSort(int* data, int start, int end) {  //배열, 시작점, 끝점 
	if (start >= end) {
		return;
	}

	int key = start; //key값은 첫 원소
	int i = start + 1, j = end; //i = 두 번째 원소 , j = 끝 원소 

	int temp;

	while (i <= j) { //서로 엇갈릴 때까지 비교
		while (data[i] <= data[key]) { //key값보다 큰 값을 만날 때까지
			i++;
		}
		while (data[j] >= data[key] && j > start) { //key값보다 작은 값을 만날 때까지, 범위를 넘어가지 않도록 조정 
			j--;
		}

		if (i > j) {//서로 엇갈렸다면 j 위치와 key값을 교체
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {//엇갈리지 않았다면 j 와 i를 교체
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}

		//정렬된 피벗을 기준으로 왼쪽과 오른쪽으로 다시 정렬을 수행
		quickSort(data, start, j - 1);
		quickSort(data, j + 1, end);
	}
}

int main(){
	int number = 10;
	int data[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

	quickSort(data, 0, number - 1);

	for (int i = 0; i < number; i++) {
		cout << data[i];
	}

	return 0;
}
