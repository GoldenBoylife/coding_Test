/*
���丮�� �����ϱ� 
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
	/*n=1�Ǹ� ��ȯ�ϱ�*/
	if (m<=1)
		return 1;
	return m* facto_iter(m-1);
	//5*4*3*2*1 �̷��� ����ȴ�. 	
}


int main() {
	/*�ݺ������� ����*/
	cout << "�ݺ� " << facto_iter(5);
	
	/*����Լ��� ����*/	
	cout << "��� " << facto_recur(5); 
}
 
