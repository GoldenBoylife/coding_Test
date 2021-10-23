/*
분석
 
전략
 667부터 1씩 증가하면서 666들어가 있으면 count++;
 입력된 n과 count가 같으면출력 
*/
#include <iostream>
using namespace std;

int main() {
	int n ;
	cin >> n;
	int count =0;
	
	for( int i =666 ;;i++) {
		if(to_string(i).find("666") != string::npos){
			count++;
			if( count == n){
				cout << i;
				break;
			}
		}
	}
}
