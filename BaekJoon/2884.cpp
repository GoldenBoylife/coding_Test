/*
�м�
	45�� ���� �˶� ����
	
	�ð踸��� 
*/
#include <iostream>

using namespace std;

int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	
	b= b-45;
	if( b<0 ){
		b= b+60;
		a= a-1;
		if(a<0){
			a =23;
		}
	}
	cout << a << " " << b<<endl;
	 
}
