#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//vector - pair �̿� ��, �� �Լ� ����
bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
	if (a.second.first == b.second.first) {
		//������ ���ٸ�, ������Ϸ� ����
		return a.second.second > b.second.second;
	}
	else {
		//�ƴ϶�� ������ ū ���� ��ȯ
		return a.second.first > b.second.first;
	}
}

int main() {

	//���� pair Ȱ��
	vector<pair<string, pair<int, int>>> v;

	//v.push_back(pair<string, pair<int, int>>("������", pair<int, int>(90, 19940308)));
	//make_pair �̿��ϱ�
	v.push_back(pair<string, pair<int, int>>("������", make_pair(90, 19940308)));
	v.push_back(pair<string, pair<int, int>>("�� ȯ", make_pair(85, 19930726)));
	v.push_back(pair<string, pair<int, int>>("�ڿ���", make_pair(96, 19920108)));
	v.push_back(pair<string, pair<int, int>>("������", make_pair(91, 19930416)));

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " ";
	}

	return 0;
}