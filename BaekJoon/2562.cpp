#include <iostream>
using namespace std;
/*
분석
	9개 서로다른 자연수
	->최대값 찾기
	->최대값이 몇번째 수인지 확인
	 
*/

int main() {
	int arr[9];
	int max =-9999;
	int max_idx =-10;
	for(int i=0; i<9 ;i++) {
		cin >> arr[i];
		if (max < arr[i]){
			max = arr[i];
			max_idx = i;
		}
	}
	cout << max <<endl << max_idx +1 <<endl;
	
}
