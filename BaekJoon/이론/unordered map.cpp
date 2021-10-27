#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<string, int> my_um ;
    //unordered_map선언 key와 번호를 넣음. 

    if (my_um.empty()) {
        cout << "지금은 비어있습니다" << endl;
    }

    /*3가지 방식으로 추가할 수 있다. */
    my_um.insert(make_pair("mouse", 1));
    my_um["lion"] = 2;      //이 방식이 기억하기 쉽겠군
    my_um.insert({ "Zelephant",3 });
    
	
    

    cout << "unordered_map의 크기는 " << my_um.size() << " 입니다" << endl;

   
    
    /*삽입 맨 나중에 된 것이 먼저 출력된다.*/
    // pair<string,int>대신 auto 넣어도 된다. 
    for (pair<string, int> elem : my_um) {
        cout << "key : " << elem.first << " value : " << elem.second << endl;
        
    }

    /*만약 같으면 */
    if (my_um.find("lion") != my_um.end()) {
        my_um.erase("lion");
    }
    cout << "unordered_map의 크기는 " << my_um.size() << " 입니다" << endl;

    // auto로 해도 무방
    for (auto elem : my_um) {
        cout << "key : " << elem.first << " value : " << elem.second << endl;
    }

    return 0;
}


