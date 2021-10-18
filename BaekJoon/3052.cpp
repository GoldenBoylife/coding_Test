/*
	A,B 
	10개 입력 -> 42로 나눈 나머지 구한다. 
	-> 서로 다른 값이 몇개 있는지 확인 
전략
	42로 나누고 나머지를 arr[42]에 저장함.
	arr에서 0이 아닌것이 몇개 있는지 count
	 
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> arr(42);
	vector<int> input(10);
	int count =0;
	for(int i=0; i<input.size(); i++) {
		cin >> input[i];
		arr[input[i]%42]++;
	}
	for(auto a : arr){
		if( a !=0)
			count++;
	}
	cout << count <<endl;
	
	
	
	
}
