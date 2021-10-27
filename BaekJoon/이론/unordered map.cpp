#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<string, int> my_um ;
    //unordered_map���� key�� ��ȣ�� ����. 

    if (my_um.empty()) {
        cout << "������ ����ֽ��ϴ�" << endl;
    }

    /*3���� ������� �߰��� �� �ִ�. */
    my_um.insert(make_pair("mouse", 1));
    my_um["lion"] = 2;      //�� ����� ����ϱ� ���ڱ�
    my_um.insert({ "Zelephant",3 });
    
	
    

    cout << "unordered_map�� ũ��� " << my_um.size() << " �Դϴ�" << endl;

   
    
    /*���� �� ���߿� �� ���� ���� ��µȴ�.*/
    // pair<string,int>��� auto �־ �ȴ�. 
    for (pair<string, int> elem : my_um) {
        cout << "key : " << elem.first << " value : " << elem.second << endl;
        
    }

    /*���� ������ */
    if (my_um.find("lion") != my_um.end()) {
        my_um.erase("lion");
    }
    cout << "unordered_map�� ũ��� " << my_um.size() << " �Դϴ�" << endl;

    // auto�� �ص� ����
    for (auto elem : my_um) {
        cout << "key : " << elem.first << " value : " << elem.second << endl;
    }

    return 0;
}


