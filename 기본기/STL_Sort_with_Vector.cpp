#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	//vector�� �̿��� pair ����
	//�� ���Ҵ� �ϳ��� int = first, �ϳ��� string = second�� �����ȴ�
	//�̿��� v�� �ܼ�ȭ�ؼ� ����� �� �ִ� 
	vector<pair<int, string>> v; 

	//push_back = �迭�� ������ ���ҿ� ����
	v.push_back(pair<int, string>(90, "������")); //pair�� ���� Data ���� ����
	v.push_back(pair<int, string>(85, "�� ȯ"));
	v.push_back(pair<int, string>(99, "�ڿ���"));
	v.push_back(pair<int, string>(95, "������"));

	//begin = vector�� ó�� ����, end  = vector�� ������ ����
	//������ ������ ������ pair�� int ��ҷ� �Ǻ�
	sort(v.begin(), v.end()); 

	for (int i = 0; i < v.size(); i++) { //vector�� ũ�� = size
		//vector�� �� ��� ����
		cout << v[i].second << " "; //first = pair�� ù ����, second = pair�� �� ��° ����
	}

	return 0;
}