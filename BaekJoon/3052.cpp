/*
	A,B 
	10�� �Է� -> 42�� ���� ������ ���Ѵ�. 
	-> ���� �ٸ� ���� � �ִ��� Ȯ�� 
����
	42�� ������ �������� arr[42]�� ������.
	arr���� 0�� �ƴѰ��� � �ִ��� count
	 
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
