/*
ºĞ¼®
	666 -> 1666 ->2666 ... N-1+666
	 
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >>n;
	string str= "666";
	
	string head = to_string(n-1);
	if( head != "0"){
		head.append(str);
		cout << head;
	}
	else 
		cout << "666";
	
}
