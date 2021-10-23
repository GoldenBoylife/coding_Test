 #include <iostream>
 #include <list>
 using namespace std;
 
 int main() {
 	list <int > lt;
 	lt.push_back(10);
 	lt.push_back(20);
 	lt.push_back(30);
 	lt.push_back(40);
 	lt.push_back(50);
 	list<int>::iterator iter = lt.begin() ;
 	cout << *iter <<endl;
 	//.begin()에 주소값이 있고 출력시 *해야 value나옴.  
 	list<int>::iterator iter2;
 	++iter;
 	++iter;
 	
 	iter2 = lt.erase(iter);
 	
 	/*리스트 전체 출력*/
 	for(iter = lt.begin(); iter != lt.end(); ++iter)
 		cout << *iter <<' ';
 	cout << endl;
 	
 	cout << "iter2 :" << *iter2 << endl;
 	
 	iter = iter2;
 	iter2 = lt.insert(iter,300);
 	for(iter= lt.begin(); iter != lt.end(); ++iter)
 		cout << *iter <<' ';
 	cout << endl;
 	cout << "iter2 : " << *iter2 << endl;
 	
 	return 0;
 		
 }
