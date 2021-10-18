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
	
	cout << "--- �ʱ� vect---" <<endl;
	print_vect(vect);	
	
	
	cout << "--- ���� �� vect---" <<endl;
	vect.insert(vect.begin()+2,30);
	//ó������ 2��° �ڸ��� 30�߰�  
	print_vect(vect);
	
	
	cout << "---������ �Ѵ����� 2�� �߰��ϰ� 2 ���� vect---"  <<endl;
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
