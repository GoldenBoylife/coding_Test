/*
분석
	현재 x,y에 있다. 
	직사각형은 각 변이 좌표충에 평행
	왼쪽 아래 꼭지점은 (0,0) ... 배열로 하면 좌상단
	오른쪽위 꼭지점은 (w,h) ... 배열로는 우하단 
	직사각형의 경계선까지 가는 거리의 최소값은? 
전략
	현재 위치(x,y)에서 w,h를 비교해서 가장 가까운 값 구한다.
	현재 위치 (6,2)라면  (10,3)인 배열에서 1칸만 가면 된다.  
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

