#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	getline(cin,input);
	int count=1;
	if(input[0] ==' ')
		count--;
	if(input[input.size()-1] == ' ')
		count--;
	for( int i=0; i <input.size();i++){
		
		if( input[i] ==' ')
			count++;
		
	}
	cout << count <<endl;
	
}
	

