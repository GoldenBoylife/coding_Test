#include <iostream>
using namespace std;

/*퀵 정렬에서는 재귀함수가 쓰인다.*/
int number =10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9} ;

void quickSort(int *data,int left,int right)
{
	/*원소가 1개인 경우 종료*/
	if (left >= right)
		return;
	int key = left;//키는 첫번째 원소다. 
	int start = left + 1;	//키값에서 한칸씩 이동하면서 키보다 큰값 찾기 
	int end = right;
	
	while (start<=end)
	{
		/*키 값보다 큰 값만날 대까지 반복*/
		while (data[key] >= data[start] && start <= right)
			start++;
		/*키 값보다 작은값 만날 때  && start보다 클 때 반복*/
		while (data[key] <= data[end] && end > left)
			end--;
		/*현재 엇갈린 상태면 key값과 end값을 교체*/
		if (start > end)
			swap(data[key], data[end]);
		/*현재 엇갈리지 않은 상태면 큰값인 start와 작은값인 end를 교체*/
		else
			swap(data[start], data[end]);
	}
	/*서로 엇갈려서 빠져나오면*/
	//	key값 기준으로 왼쪽 그룹, 오른쪽 그룹 각각 정렬시킴. 
	quickSort(data, left, end - 1);
	quickSort(data, end + 1, right);

}
int main()
{
	quickSort(data,0,number-1);
	for (int i = 0; i < number; i++)
		cout << data[i] << " ";
	return 0;
}
