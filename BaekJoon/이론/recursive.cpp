#include <bits/stdc++.h>
using  namespace std;


void Recur(int i ) {
	/*5�� ȣ������ �� ����ǵ���*/
	if(i ==5){ 
		
		return ;
	}
	cout << i+1 << "�� ° ����Լ��� ȣ���Ѵ�." <<endl; 
	Recur(i+1);
	cout << i+1<< "�� ° ����Լ��� �����մϴ�."<<endl;
	// ����Լ� ������ �ϳ��� ����ȴ�.  
}
int main(){
	int i =0;
	Recur(i) ;

}
