#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	int currentWeight = weight; //�ٸ��� ���� ���� ����

	queue<int> bridge; //�ٸ��� ������ Ʈ���� ��� ť 

	for (int i = 0; i < truck_weights.size(); i++) {
		while (true) {
			if (currentWeight >= truck_weights[i]) { //Ʈ���� �� ������ �� ������

				bridge.push(truck_weights[i]);
				currentWeight -= truck_weights[i];
				answer++;

				//������ �����ߴ��� Ȯ��
				if (bridge.size() >= bridge_length) { //bridge.size = ������ Ʈ���� �̵��Ÿ�
					currentWeight += bridge.front(); //�ٸ��� ���밡�� ���� �ʱ�ȭ 
					bridge.pop(); //ť ����
				}
				break; //�ݺ��� Ż��
			}
			else //������ �� ������ ������ �巰�� ���� 
				bridge.push(0);

			//������ �����ߴ��� Ȯ��
			if (bridge.size() >= bridge_length) {
				currentWeight += bridge.front();
				bridge.pop();
			}

			answer++; //�ð��� ��� ����
		}
	}
	answer += bridge_length; //������ Ʈ���� ���� �ð��� �ݺ������� ����� �Ұ�

	return answer;
}