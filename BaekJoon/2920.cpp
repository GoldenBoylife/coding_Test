/*
�м�
	���嵵 c,d,e,f,g,a,b,C,
	8�� �� -> ���ڷ� (ex) c->1 , C->8
	if 1->8�������
		ascending ���
	else if 8->1 ��������
		decending ��� 
	else 
		mixed ��� 

*/

#include <iostream>
#include <vector>
using namespace std;



int main() {
	vector<int> arr(8);
	for(int i=0; i<8;i++) 
		cin >> arr[i];	
	
	bool acens =true;
	bool decens = true;
	
	for(int i =1; i<8 ;i++) {
		if( arr[i-1] >arr[i]) 
			acens = false;
		if( arr[i-1] <arr[i])
			decens =false;
	}
	if(acens) 
		cout <<"ascending" <<endl;
	else if(decens)
		cout <<"descending" <<endl;
	else
		cout <<"mixed" <<endl;
		
}


