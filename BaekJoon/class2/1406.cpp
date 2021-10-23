/*
������ ����
 �ҹ��ڸ� ��� �ִ� 600,000�� �Է�
 Ŀ��, ������ �� ��, �� ��, �߰� ������ ���� ��ġ�� �� �ִ�. 
 ���̰� L�� ���ڿ��� ���� �����⿡ �ԷµǾ� ������, Ŀ���� 
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
			/*L������ �������� ��ĭ �̵�*/
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
			/*P�Է½� Ŀ�� ���ʿ� �Է��ؾ� �ϴ� insert*/
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
 
