/*
전략
 주차장 1 ~N
 처음에는 비어있다. 
 차 도착 ( 차가 여러대 도착-> 도착한 순서대로 줄 기다리기)
 대기장소는 Queue로 구현( First In First Out)
 주차공간 검사 -> 공간x ->빈공간 기다림.
 				->공간 여러개 -> 번호 작은 것부터 채움

 
 주차료(차량 무게 *주차공간 책정값)
 
 M대 차량이 주차장 이용
 순서 안다.
  
  
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
	//N:주차장 수 , M: 자동차 수 
	vector<int> rate_par(N);
	vector<int> parked_car(N);
	
	 /*주차장의 무게 당 가격*/
	for (int i = 0; i < N; i++)
		cin >> rate_par[i];
	
	/*차무게*/
	//1번 ~M번까지차 무게 
	//왜 M+1로 했을까? /s 아예 wei_ca[0]을 안쓰네	
	vector<int> wei_car(M+1);
	for (int i = 1; i <= M; i++)
	{
		cin >> wei_car[i];
	}
	long long int tot = 0;
	int cur_num = 0;		
	queue<int> wait;		//FIFO 기다림 줄
	/*차 출입 기록 저장 차x 2번 */ 
	for (int i = 0; i < 2 * M; i++)
	{
		//printf("%lld", tot);

		int car_num;
		cin >> car_num;
		/*자동차 입 */
		//car_num가 양수여야 입, 현재들어온 차 < 주차 전체공간 
		if (car_num > 0 && cur_num < rate_par.size() )
		{
			/*주차장 사이즈(N)만큼 반복해서 입*/
			for (int j = 0; j < parked_car.size(); j++)
			{
				/*j번째 자리에 주차*/
				if (parked_car[j] == 0)
				{
					parked_car[j] = car_num;
					//car_num 차 삽입 
					cur_num++;
					tot += wei_car[car_num] * rate_par[j];
					break;
				}
			}
		}
		/*차는 입인데 주차 공간이 모자름*/
		else if(car_num >0)	{
			wait.push(car_num);
			//wait Queue에 자동차 넣기. 
		}
		
		/*차량 출*/ 
		else if (car_num < 0) {
			for (int j = 0; j < parked_car.size(); j++) {
				if (parked_car[j] == -car_num)//빼기
				{
					cur_num--;
					//현재 자동차 수 -- 
					parked_car[j] = 0;
					/*주차장 꽉찼을 때 */
					if (!wait.empty())
					{
						int t = wait.front();
						//맨 앞에 있는 것 t 
						wait.pop();
						//맨 앞에 있는 것 출 
						parked_car[j] = t;
						//나간 차 
						cur_num++;
						tot += rate_par[j] * wei_ca[t];
						//무게당 주차요금 *   
					}
					break;
				
				}
				
			}
		}

	}
	printf("%lld", tot);
	return 0;
}
