#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>v;
	for( int i =0; i <5; i++) {
		v.push_back(i);	
	}
	
	for( int i =0; i< v.size(); i++) {
		cout << "[" << v[i] << "]";
	}
	cout << endl;
	/*»ðÀÔÇÏ±â */
	for( int i =1; i <4 ;i++) {
		v.insert(v.begin()+i,i+4);
		//
	}
	for( int i =0; i< v.size(); i++) {
		cout << "[" << v[i] << "]";
	}
	cout << endl;
}
