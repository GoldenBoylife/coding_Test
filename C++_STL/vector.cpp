#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> vec; 
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	
	int i =1;
	for(auto elem : vec){
		cout<< "vec 의 " << i << "번째 원소 :: " <<elem<<endl; 
		i++;
	}
	
}

