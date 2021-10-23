/*
	정수 N개로 이루어진 수열 A와 정수 X 
*/

#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a>> b;
	int arr[a];
	for(int i=0; i< a; i++) {
		cin >> arr[i];		
		if( arr[i] < b)
			cout << arr[i] <<" "; 
	}
	puts("");
}
