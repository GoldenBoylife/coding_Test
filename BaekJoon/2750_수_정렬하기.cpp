/*
문제 2750 : 수 정렬하기 
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[n] ={0,};
	//입력부 
	for(int i=0 ; i<n ;i++) {
		int a; 
		cin >> a;
		arr[i]= a;
	}
	sort(arr,arr+n);
	
	//출력부
	for(int i =0; i< n;i++) {
		cout << arr[i] << endl;
	}
}
