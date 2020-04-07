#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> test1 = { 1, 2, 3, 4, 5 };
vector<int> test2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
vector<int> test3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

vector<int> score = { 0,0,0 };

vector<int> solution(vector<int> answers) {
	vector<int> answer;

	int max_score = 0;

	for (int i = 0; i < answers.size(); i++) {
		if (answers[i] == test1[i % 5]) score[0] += 1;
		if (answers[i] == test2[i % 8]) score[1] += 1;
		if (answers[i] == test3[i % 10]) score[2] += 1;
	}

	max_score = max(score[0], max(score[1], score[2]));

	if (max_score == score[0]) answer.push_back(1);
	if (max_score == score[1]) answer.push_back(2);
	if (max_score == score[2]) answer.push_back(3);
	// for (int i = 0; i < 3; i++){
	//     if (score[i] == max_score)
	//         answer.push_back(i + 1);
	// }

	return answer;
}