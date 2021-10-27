/*
팩토리얼 구현하기 
*/
#include<bits/stdc++.h>
using namespace std;

int facto_iter(int n){
	int result =1;
	for (int i =1; i< n+1 ;i++) 
		result *=i;
	return result;
}

int facto_recur(int m){
	/*n=1되면 반환하기*/
	if (m<=1)
		return 1;
	return m* facto_iter(m-1);
	//5*4*3*2*1 이렇게 진행된다. 	
}


int main() {
	/*반복적으로 구현*/
	cout << "반복 " << facto_iter(5);
	
	/*재귀함수로 구현*/	
	cout << "재귀 " << facto_recur(5); 
}
 
