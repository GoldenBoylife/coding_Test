
#include <string>
#include <iostream>
using namespace std;

int main() {
	string str;
	getline(cin, str, '\n');
	int len, n = 0;
	len = str.length();

	for (int i = 'a'; i <= 'z'; i++) {
		for(char j :str){
			if (str.at(j) == i) {
				printf("%d ", j);
				n++;
				break;
			}
		}
		if (n == 0) {
			printf("-1 ");
		}
		n = 0;
	}
}
