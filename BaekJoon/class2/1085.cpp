/*
�м�
	���� x,y�� �ִ�. 
	���簢���� �� ���� ��ǥ�濡 ����
	���� �Ʒ� �������� (0,0) ... �迭�� �ϸ� �»��
	�������� �������� (w,h) ... �迭�δ� ���ϴ� 
	���簢���� ��輱���� ���� �Ÿ��� �ּҰ���? 
����
	���� ��ġ(x,y)���� w,h�� ���ؼ� ���� ����� �� ���Ѵ�.
	���� ��ġ (6,2)���  (10,3)�� �迭���� 1ĭ�� ���� �ȴ�.  
*/

#include <iostream>
using namespace std;

int main() {
	int x,y,w,h;
	cin >> x >> y >> w >>h;
	int min=9999;
	int w_x = w-x;
	int h_y = h-y;
	int min_x;
	int min_y;
	if(w_x <x)
		 min_x = w_x;
	else
		 min_x = x;
	if(h_y < y)
		 min_y = h_y;
	else 
		min_y = y;
	if( min_x < min_y) 
		cout << min_x;
	else
		cout << min_y;
}

