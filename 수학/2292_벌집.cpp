#include<iostream>

using namespace std;

//벌집 = 6각형 --- 1을 중심으로 6개씩 늘어난다 
//1 layer = 2~7, 2 layer = 8~19 --- 
int main(){
	
	int N; 
	int layer = 0; //6씩 증가되는 층

	cin >> N;

	for (int i = 2; i <= N; layer++) {
		//6*1 -> 6*2 -> --- 방식으로 N과 비교한다 
		i += 6 * layer;
	}
	if (N == 1) layer = 1; 

	cout << layer << endl;
	
	return 0;
}
