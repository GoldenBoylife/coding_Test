/*
����
	�־��� ���� N���� �ּڰ��� �ִ� 
	
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	cin >> n;
	int M=-INT_MAX,m=INT_MAX;
	int arr[n];
	for( int i=0; i<n;i++) {
		cin >> arr[i];	
		if( arr[i] >=M)
			M= arr[i];
		if(arr[i] <=m)
			m =arr[i];
	}
	cout << m << " " << M << endl;
}
