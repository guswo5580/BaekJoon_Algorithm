#include<iostream>
#include<algorithm>

using namespace std;

/*
	Heap 정렬
	=> Heap 트리구조를 이용하여 정렬하는 알고리즘
	=> 기본적으로 이진트리 구조

	최대 힙 : 부모가 자식보다 더 큰 값을 가지는 트리
	최대 힙 조건이 무너지는 노드에 대해 힙 생성 알고리즘을 적용한다

	힙 생성 알고리즘 = 트리의 높이와 같다!! 
	힙은 완전 이진트리이므로 (logN * 트리의 높이 N) 으로 볼 수 있다

	실제로는 입력 값(높이)의 1/2 만으로도 힙을 생성할 수 있다 
	따라서 1/2n * log N으로 볼 수 있다 
	1/2n > log N 이므로 O(1/2n) -> O(n)으로 이야기할 수 있다

	힙 생성 알고리즘은 하단 노드부터 시작하여
	부모 -> 자식을 비교, 큰 값을 부모로 바꾸는 작업을 진행한다

	힙 생성 알고리즘을 통해 최대 힙 트리가 만들어지면
	가장 상단 노드(가장 큰 값)과 가장 하단 노드(가장 작은 값)을 서로 바꾼다 
	이 후, 가장 하단 노드를 제외한 나머지를 다시 최대 힙 트리로 만들고
	바꾸기를 반복하는 작업으로 정렬을 이룰 수 있다 
*/

int number = 9;
int heap[9] = { 7,6,5,8,3,5,9,1,6 };

int main() {

	//배열 -> 힙 만들기 
	for (int i = 1; i < number; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2; //이진 트리구조 형성
			
			//부모와 자식을 비교하여 큰 값을 부모 위치로 올린다
			if (heap[root] < heap[c]) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root; //바뀐다면 root를 바꿔준다
		} while (c != 0);
	}
	
	//크기를 뒤에서부터 줄여가며 반복적으로 힙을 구성
	for (int i = number - 1; i >= 0; i--) {
		//힙 구조 생성 후, 0번 노드는 가장 큰 값, 마지막 노드는 가장 작은 값
		//가장 큰 값을 마지막으로 보내기 
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;

		int root = 0;
		int c = 1; 
		do {
			c = 2 * root + 1; //자식 노드를 확인
			
			//자식 중에 더 큰 값을 찾기
			if (c < i - 1 && heap[c] < heap[c + 1]) {
				c++;
			}

			//루트보다 자식이 크면 교환
			if (c < i && heap[root] < heap[c]) {
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while (c < i);
	}

	for (int i = 0; i < number; i++) {
		cout << heap[i] << " ";
	}

	return 0;
}