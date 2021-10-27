/*
����
 ������ 1 ~N
 ó������ ����ִ�. 
 �� ���� ( ���� ������ ����-> ������ ������� �� ��ٸ���)
 �����Ҵ� Queue�� ����( First In First Out)
 �������� �˻� -> ����x ->����� ��ٸ�.
 				->���� ������ -> ��ȣ ���� �ͺ��� ä��

 
 ������(���� ���� *�������� å����)
 
 M�� ������ ������ �̿�
 ���� �ȴ�.
  
  
*/

#include <stdio.h>
#include <queue>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
int N, M;
using namespace std;
int main(void)
{
	cin >> N >> M;
	//N:������ �� , M: �ڵ��� �� 
	vector<int> rate_par(N);
	vector<int> parked_car(N);
	
	 /*�������� ���� �� ����*/
	for (int i = 0; i < N; i++)
		cin >> rate_par[i];
	
	/*������*/
	//1�� ~M�������� ���� 
	//�� M+1�� ������? /s �ƿ� wei_ca[0]�� �Ⱦ���	
	vector<int> wei_car(M+1);
	for (int i = 1; i <= M; i++)
	{
		cin >> wei_car[i];
	}
	long long int tot = 0;
	int cur_num = 0;		
	queue<int> wait;		//FIFO ��ٸ� ��
	/*�� ���� ��� ���� ��x 2�� */ 
	for (int i = 0; i < 2 * M; i++)
	{
		//printf("%lld", tot);

		int car_num;
		cin >> car_num;
		/*�ڵ��� �� */
		//car_num�� ������� ��, ������� �� < ���� ��ü���� 
		if (car_num > 0 && cur_num < rate_par.size() )
		{
			/*������ ������(N)��ŭ �ݺ��ؼ� ��*/
			for (int j = 0; j < parked_car.size(); j++)
			{
				/*j��° �ڸ��� ����*/
				if (parked_car[j] == 0)
				{
					parked_car[j] = car_num;
					//car_num �� ���� 
					cur_num++;
					tot += wei_car[car_num] * rate_par[j];
					break;
				}
			}
		}
		/*���� ���ε� ���� ������ ���ڸ�*/
		else if(car_num >0)	{
			wait.push(car_num);
			//wait Queue�� �ڵ��� �ֱ�. 
		}
		
		/*���� ��*/ 
		else if (car_num < 0) {
			for (int j = 0; j < parked_car.size(); j++) {
				if (parked_car[j] == -car_num)//����
				{
					cur_num--;
					//���� �ڵ��� �� -- 
					parked_car[j] = 0;
					/*������ ��á�� �� */
					if (!wait.empty())
					{
						int t = wait.front();
						//�� �տ� �ִ� �� t 
						wait.pop();
						//�� �տ� �ִ� �� �� 
						parked_car[j] = t;
						//���� �� 
						cur_num++;
						tot += rate_par[j] * wei_ca[t];
						//���Դ� ������� *   
					}
					break;
				
				}
				
			}
		}

	}
	printf("%lld", tot);
	return 0;
}
