#include "��.h"

// 1. C++�ж���һ����: struct / class ���� + {}  -->  ���൱����һ������
// �����ͺ����й�ϵ �Ͷ�����һ������, ����Ҫ���������ĺ���
// struct��class�����Ψһ������: ��Ա����Ȩ�޲�ͬ, ����û������
// ���ڳ�Ա�������Է��ʳ�Ա���� ���ڲ���Ա֮������໥����

// ��(ͼֽ)����ռ�ڴ� ֻ��ͨ�����Ͷ���ı���(����)��ռ�ڴ�(�������)
// ���ʵ����: ����һ�������͵ı���(�����������ʵ�����Ķ���) --> ����(ͨ��ͼֽ�����ķ���)
// ���ͱ�����Զ�������, Person p

// 2. �������Ʒ�(�����˵���˽�ñ���֪�����)
// ���г�Ա�����ڶ��ǿɼ��� �������� ��������������޶���(public, private, protectedֻ�Ƕ�����������
// ����Ȩ�޵���������: �ӵ�ǰ�����޶�����ʼ����һ���޶�����ʼ��λ��

// 3. ���������: ���� + :: + ��Ա
// ������ĳ�Ա�����ڵ�ǰ���������, ������ȫ����

// 4.��װ: �ඨ��(���ݴ��������һ��) + �����޶���(��ѡ��ر�¶������) 
//--> ���ڹ���ͱ�������, ʹ���߷��� ����ʹ�óɱ�

// (1). ��struct����һ����(��Ա��Ĭ��Ȩ�޶��ǹ��е�) 
// ��C++�� �����һ���ṹ��, �ṹ�����һ����
struct Person{
	// ��Ա����

	int getAge(){
		return age;
	}
	void print(){
		cout << name << " " << age << " " << gender << " " << number << endl;
	}

	void driveCar(){
		cout << "driveCar()" << endl;
	}

	// ��Ա����
	int age;
	char* name;
	char* gender;
	int number;
};
// struct��û�з������Ʒ�ʱ���൱��ȫ������ ���ⶼ�ɷ���
void test4(){
	Person p;
	p.age = 10; 
	p.name = "Angela";
	p.gender = "female";
	p.number = 2017;
	p.print();
}

// (2). ��class����һ����(Ĭ�Ϸ���Ȩ����˽�е�)
class Person2{

public: // ����Ϊpublic�ĳ�Ա �����ⶼ�ǿ��Է��ʵ�, ���������µĶ��ǹ��õ�
	int getAge(){
		return age;
	}
	void print(){
		cout << name << " " << age << " " << gender << " " << number << endl;
	}

	void driveCar(){
		cout << "driveCar()" << endl;
	}
private: // ���ڴ�public��private�ĳ�Ա���ǹ��õ�, ��private�µ����ⲻ�ܷ���,
	int age;
	char* name;
	char* gender;

protected: // ����Ϊprotected�ĳ�Ա Ҳ��ʾ�����Ա�����ⲻ�ɼ�
	int number;
};

void test5(){
	Person2 p;
	p.print();// ��ȥ��public ���Ϊ˽�е� ���ܷ���
	// p.age = 10; // ���ܷ���
	// p.number = 2013;// ���ܷ���
}

// 3. ���������: ���� + :: + ��Ա
// Person2::driveCar �����driveCar����Person2���������
//void Person2::driveCar(){
	//cout << "diverCar()" << endl;
//}
// diverCar: ����ȫ��������
void driverCar(){
	cout << "dirverCar()" << endl;
}

int main2(){
	

	test4();
	system("pause");
	return 0;
}