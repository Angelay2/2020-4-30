#include "类.h"

class Person3{
public: // 声明为public的成员 在类外都是可以访问的, 从这里往下的都是公用的
	int getAge();
	void print();
	void driveCar();

	int age;
	char* name;
	char* gender;
	int number;
};