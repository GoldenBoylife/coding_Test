/*
분석
	세자리 수 두개 
	그자를 거꾸로 -> 큰수 알기 
	 
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int a,b;
	string str_a, str_b;
	cin>> a >> b;
	str_a = to_string(a);
	str_b = to_string(b);
	//printf("%s %s", str_a, str_b);
	reverse(str_a.begin(), str_a.end());
	reverse(str_b.begin(), str_b.end());
	stoi(str_a) > stoi(str_b) ? cout <<str_a : cout << str_b;
	
}
