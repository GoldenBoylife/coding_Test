#include <iostream>
using namespace std;

class Animal {
public:
	virtual void move() = 0;
	//���� ������ �� ������.
	// �̷� �Լ��� �����̴�. �̷� ����
	//�ʹ� �߻����̹Ƿ� �ڽ� Ŭ�������� �ݵ�� �������ؾ���. 
};

class Human : public Animal {
public:
	virtual void move() {
		cout << "�ι߷� �����Դϴ�." << endl;
	}
};

class Dog : public Animal {
public:
	virtual void move() {
		cout << "�׹߷� �����Դϴ�. " << endl;
	}
};

/*���� Ŭ������ �迭�� ���� �� �ְ� �ȴ�. */
void main() {
	Animal* animals[5];
	//aniamls�� ��ҵ��� ���� �ּҰ��� ������ �ȴ�.
	animals[0] = new Human();
	//ù��°�� Human Ŭ������ �ּҰ���
	animals[1] = new Human();
	animals[2] = new Dog();
	animals[3] = new Dog();
	animals[4] = new Human();

	for (auto a : animals) {
		//a�� �����ؼ� aniamls �迭 ���� ������ �ݺ�
		a->move();


	}
}
