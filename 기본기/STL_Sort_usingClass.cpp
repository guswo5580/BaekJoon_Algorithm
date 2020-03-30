#include<iostream>
#include<algorithm>

using namespace std;

class Student {
public : 
	string name;
	int score;

	//생성자 선언
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}

	//정렬 기준 
	bool operator < (Student& student) { //좌측 Operator 우측 을 비교
		//문법 사용 주의
		return this->score < student.score;
	}
};
int main() {
	Student students[] = {
		Student("조현재", 90),
		Student("최 환", 91),
		Student("박원일", 97),
		Student("박진영", 77)
	};

	//sort 함수 실행 
	sort(students, students + 4);

	for (int i = 0; i < 4; i++) {
		cout << students[i].name << " ";
	}

	return 0;
}