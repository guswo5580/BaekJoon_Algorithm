#include<iostream>
#include <string>

using namespace std;

int check(char c) {
	int t=0;

	switch (c)
	{
	case 'A' : 
	case 'B' :
	case 'C' :
		t = 3;
		break;

	case 'D':
	case 'E':
	case 'F':
		t = 4; 
		break;
		
	case 'G':
	case 'H':
	case 'I':
		t = 5; 
		break;

	case 'J':
	case 'K':
	case 'L':
		t = 6;
		break;

	case 'M':
	case 'N':
	case 'O':
		t = 7; 
		break;

	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		t = 8; 
		break;

	case 'T':
	case 'U':
	case 'V':
		t = 9;
		break;

	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		t = 10;
		break;

	default:
		break;
	}

	return t; 
}
int main(){
	
	string dial; 
	cin >> dial; 

	int time = 0; 

	for (int i = 0; i < dial.length(); i++) {
		if (dial[i] == 0) { //0에는 알파벳이 없음 
			time += 11; 
		}
		else if (dial[i] == 1) { //1에는 알파벳이 없음 
			time += 2;
		}
		else {
			time += check(dial[i]);
		}
	}

	cout << time;

	return 0;
}
