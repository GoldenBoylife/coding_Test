/*
���� 2750 : �� �����ϱ� 
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[n] ={0,};
	//�Էº� 
	for(int i=0 ; i<n ;i++) {
		int a; 
		cin >> a;
		arr[i]= a;
	}
	sort(arr,arr+n);
	
	//��º�
	for(int i =0; i< n;i++) {
		cout << arr[i] << endl;
	}
}
