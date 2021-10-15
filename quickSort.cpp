#include <iostream>
using namespace std;

/*�� ���Ŀ����� ����Լ��� ���δ�.*/
int number =10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9} ;

void quickSort(int *data,int left,int right)
{
	/*���Ұ� 1���� ��� ����*/
	if (left >= right)
		return;
	int key = left;//Ű�� ù��° ���Ҵ�. 
	int start = left + 1;	//Ű������ ��ĭ�� �̵��ϸ鼭 Ű���� ū�� ã�� 
	int end = right;
	
	while (start<=end)
	{
		/*Ű ������ ū ������ ����� �ݺ�*/
		while (data[key] >= data[start] && start <= right)
			start++;
		/*Ű ������ ������ ���� ��  && start���� Ŭ �� �ݺ�*/
		while (data[key] <= data[end] && end > left)
			end--;
		/*���� ������ ���¸� key���� end���� ��ü*/
		if (start > end)
			swap(data[key], data[end]);
		/*���� �������� ���� ���¸� ū���� start�� �������� end�� ��ü*/
		else
			swap(data[start], data[end]);
	}
	/*���� �������� ����������*/
	//	key�� �������� ���� �׷�, ������ �׷� ���� ���Ľ�Ŵ. 
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
