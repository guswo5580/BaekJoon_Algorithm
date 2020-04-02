#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;

	stack<int> st; //��� ���� ������ ����
	bool check = false; //������ ž�� ã�Ҵ��� ����

	for (int i = heights.size() - 1; i >= 0; i--) { //�ڽ��� �����ϰ� �ں��� �˻�
		for (int j = i - 1; j >= 0; j--) {//i���� �ϳ� �տ��� i�� ������ ��Ҹ� �˻�
			if (heights[j] > heights[i]) {
				st.push(j + 1); //���ÿ� index + 1���� ����
				check = true; //üũ ǥ��

				break;
			}
		}
		if (!check) { //�ڱ⺸�� ū Ÿ���� ���ٸ�
			st.push(0); //0�� ���ÿ� ����
		}
		check = false; //üũ �ʱ�ȭ
	}
	while (!st.empty()) { //stack�� �� ������
		answer.push_back(st.top()); //������ �ڿ��� ����
		st.pop(); //������ �� ������
	}

	return answer;
}