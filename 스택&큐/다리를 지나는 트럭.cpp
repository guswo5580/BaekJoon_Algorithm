#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	int currentWeight = weight; //다리의 수용 가능 무게

	queue<int> bridge; //다리에 진입한 트럭을 담는 큐 

	for (int i = 0; i < truck_weights.size(); i++) {
		while (true) {
			if (currentWeight >= truck_weights[i]) { //트럭이 더 진입할 수 있으면

				bridge.push(truck_weights[i]);
				currentWeight -= truck_weights[i];
				answer++;

				//끝까지 전진했는지 확인
				if (bridge.size() >= bridge_length) { //bridge.size = 진입한 트럭의 이동거리
					currentWeight += bridge.front(); //다리의 수용가능 무게 초기화 
					bridge.pop(); //큐 제거
				}
				break; //반복문 탈출
			}
			else //진입할 수 없으면 진입한 드럭을 전진 
				bridge.push(0);

			//끝까지 전진했는지 확인
			if (bridge.size() >= bridge_length) {
				currentWeight += bridge.front();
				bridge.pop();
			}

			answer++; //시간은 계속 증가
		}
	}
	answer += bridge_length; //마지막 트럭의 진행 시간은 반복문에서 계산이 불가

	return answer;
}