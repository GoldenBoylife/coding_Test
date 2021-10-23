/*
에디터 구현
 소문자만 기록 최대 600,000자 입력
 커서, 문장의 맨 앞, 맨 뒤, 중간 임의의 곳에 위치할 수 있다. 
 길이가 L인 문자열이 현재 편집기에 입력되어 있으면, 커서가 
*/

#include <iostream>
#include <list>
using namespace std;

int main() {
	string str;
	cin >> str;
	list <char> lst(str.begin(),str.end());
	int  n;
	cin >> n;
	auto now = lst.end();

	while(n--){
		char cmd;
		cin >> cmd;
		switch(cmd){
			/*L누르면 왼쪽으로 한칸 이동*/
			case'L':
				if(	now != lst.begin())
					now--;
				break;
			case 'D':
				if(now != lst.end())
					now++;
				break;
			case 'B':
				if(now != lst.begin())
					now = lst.erase(--now);
				break;
			/*P입력시 커서 왼쪽에 입력해야 하니 insert*/
			case 'P':
				char add;
				cin >>add;
				lst.insert(now,add);
				break;
		}
	}
	for(auto l : lst)
		cout<< l;
	cout << endl;	
}
 
