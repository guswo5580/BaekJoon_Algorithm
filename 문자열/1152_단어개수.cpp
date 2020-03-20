#include<iostream>
#include <string>
using namespace std;

#define MAX 10000

int main(){

	int cnt = 0;

	//cin을 활용하여 공백을 포함한 문자열을 입력
	char str[MAX];
	cin.getline(str, MAX);

	//문자열 순회 --- 공백을 통해 단어를 확인 
	for (int i = 0; i < strlen(str); i++) {
		//공백을 확인
		if (str[i] == ' ') {  
			//맨 처음, null 이전의 마지막 문자열의 공백은 단어의 기준 X
			if (i != 0 && i != strlen(str) - 1) { 
				cnt++; 
			}
		}
	}
	
	//공백 한글자만 입력한 경우
	if (strlen(str) == 1 && str[0] == ' ')
		cout << cnt << endl;

	//문자의 수 = 공백의 수 + 1
	else cout << cnt + 1 << endl;




	return 0;
}
