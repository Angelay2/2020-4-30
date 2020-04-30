#include "Person3.h"

int Person3::getAge(){
	return age;
}
void Person3::print(){
	cout << name << " " << age << " " << gender << " " << number << endl;
}

void Person3::driveCar(){
	cout << "driveCar()" << endl;
}

void test6(){
	Person3 p;
	p.age = 10;
	p.name = "Angela";
	p.gender = "female";
	p.number = 2017;
	p.print();
}

int main3(){
	test6();
	system("pause");
	return 0;
}

