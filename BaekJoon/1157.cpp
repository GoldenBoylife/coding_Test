#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int alph[26]={0,};
	cin >> str;
	for(int i =0; i< str.size() ;i++) {
		if(str[i] >90){
			//cout << (int)str[i]<<endl;	
			alph[(int)str[i] -97]++; 
		}
		else {
			//cout << (int)str[i] <<endl;
			alph[(int)str[i] -65]++;
		}
	}
	/*�Էµ� alph �߿��� ���� ū �� ã��*/
	//	���� ���� ���� ������ ? ��� 
	int Max = -9999;
	int max_idx =0; 
	bool err =0;
	for(int i =0; i < 26 ;i++) {

		//cout << alph[i] << " ";
		if(Max == alph[i]){
			err = 1;
			
		}
		else if(Max < alph[i]){
			err =0;
			Max = max(Max,alph[i]);
			max_idx = i;
		}
		
	}
	//cout << endl << max_idx << " "<< Max <<endl;
	if( err ==1){
		cout << '?'<<endl;
	}
	else{
		cout<< (char)(max_idx + 65)  <<endl;
	}
}
	

