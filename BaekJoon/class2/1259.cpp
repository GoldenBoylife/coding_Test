/*
펠린드롬: 뒤에서 읽어도 똑같다.
0은 맨앞에 올 수 없다.

전략
	문자열로 받기
	문자열 뒤집기
	문자열 받은 것과 뒤집은 것이 같으면 yes출력 아님 no 

*/


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string input;
	vector<string> str;
	vector<string> re_str;
	int i=0;

	
	do{
		cin >> input;
		str.push_back(input);
		
	}while(input != "0");
	
	for(int i =0; i< str.size()-1 ;i++) {
		re_str.push_back(str[i]);
		reverse(re_str[i].begin(), re_str[i].end());
		
		if(re_str[i] == str[i]){
			cout << "yes\n";
		}
		else
			cout << "no\n";
	}
}
