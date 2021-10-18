#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T> 
void print_vect(vector<T>& vect){
	for(auto elem : vect){
		cout << "  " << elem <<endl;
	}

}

int main() {
	vector<int> vect;
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(4);
	
	cout << "--- 초기 vect---" <<endl;
	print_vect(vect);	
	
	
	cout << "--- 삽입 후 vect---" <<endl;
	vect.insert(vect.begin()+2,30);
	//처음에서 2번째 자리에 30추가  
	print_vect(vect);
	
	
	cout << "---역순서 한다음에 2를 발견하고 2 삭제 vect---"  <<endl;
	int i =0;
	reverse(vect.begin(),vect.end());
	for(auto elem : vect){
		if( elem==2){
			vect.erase(vect.begin()+i);
		}
		i++;
	}
	print_vect(vect);
	
	
	
}
