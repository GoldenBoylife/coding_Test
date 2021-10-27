#include <bits/stdc++.h>
using  namespace std;


void Recur(int i ) {
	/*5번 호출했을 때 종료되도록*/
	if(i ==5){ 
		
		return ;
	}
	cout << i+1 << "번 째 재귀함수를 호출한다." <<endl; 
	Recur(i+1);
	cout << i+1<< "번 째 재귀함수를 종료합니다."<<endl;
	// 재귀함수 끝나고 하나씩 실행된다.  
}
int main(){
	int i =0;
	Recur(i) ;

}
