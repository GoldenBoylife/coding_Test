#include <iostream>
using namespace std;

class Animal {
public:
	virtual void move() = 0;
	//순수 가상함 수 정의함.
	// 이런 함수를 쓸것이다. 이런 정도
	//너무 추상적이므로 자식 클래스에서 반드시 재정의해야함. 
};

class Human : public Animal {
public:
	virtual void move() {
		cout << "두발로 움직입니다." << endl;
	}
};

class Dog : public Animal {
public:
	virtual void move() {
		cout << "네발로 움직입니다. " << endl;
	}
};

/*이제 클래스를 배열로 만들 수 있게 된다. */
void main() {
	Animal* animals[5];
	//aniamls의 요소들은 각각 주소값을 가지게 된다.
	animals[0] = new Human();
	//첫번째에 Human 클래스의 주소값을
	animals[1] = new Human();
	animals[2] = new Dog();
	animals[3] = new Dog();
	animals[4] = new Human();

	for (auto a : animals) {
		//a로 선언해서 aniamls 배열 끝날 때까지 반복
		a->move();


	}
}
