#include<iostream>
#include<algorithm>

using namespace std;

class Student {
public : 
	string name;
	int score;

	//������ ����
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}

	//���� ���� 
	bool operator < (Student& student) { //���� Operator ���� �� ��
		//���� ��� ����
		return this->score < student.score;
	}
};
int main() {
	Student students[] = {
		Student("������", 90),
		Student("�� ȯ", 91),
		Student("�ڿ���", 97),
		Student("������", 77)
	};

	//sort �Լ� ���� 
	sort(students, students + 4);

	for (int i = 0; i < 4; i++) {
		cout << students[i].name << " ";
	}

	return 0;
}