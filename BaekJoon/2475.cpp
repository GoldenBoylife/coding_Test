#include <iostream>
using namespace std;
/*
�м�
	������ȣ 1~5��° �ڸ�
	������  1��° �ڸ�
	������ = ������ȣ ���� 5�� ���� ���� -> �� -> 10 ���� ������ 

*/

int main() {
	int arr[5];
	int hap=0;
	for(int i =0; i<5;i++) {
		cin >> arr[i]; 
		hap += (arr[i]*arr[i]);
	}
	cout << hap%10<<endl;
	
	
}
