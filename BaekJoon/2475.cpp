#include <iostream>
using namespace std;
/*
분석
	고유번호 1~5번째 자리
	검증수  1번째 자리
	검증수 = 고유번호 숫자 5개 각각 제곱 -> 합 -> 10 나눈 나머지 

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
