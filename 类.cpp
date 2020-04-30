#include "类.h"

// 1. C++中定义一个类: struct / class 类名 + {}  -->  类相当于是一个类型
// 变量和函数有关系 就定义在一个类中, 不需要借助其他的函数
// struct与class定义的唯一区别是: 成员访问权限不同, 其他没有区别
// 类内成员函数可以访问成员变量 类内部成员之间可以相互访问

// 类(图纸)本身不占内存 只有通过类型定义的变量(房子)才占内存(土地面积)
// 类的实例化: 创建一个类类型的变量(这个变量叫类实例化的对象) --> 对象(通过图纸建立的房子)
// 类型变成了自定义类型, Person p

// 2. 访问限制符(决定人的隐私让别人知道与否)
// 所有成员在类内都是可见的 不受限制 下面的三个访问限定符(public, private, protected只是对类外有限制
// 访问权限的作用区间: 从当前访问限定符开始到下一个限定符开始的位置

// 3. 类的作用域: 类名 + :: + 成员
// 所有类的成员都属于当前类的作用域, 不属于全局域

// 4.封装: 类定义(数据打包定义在一起) + 访问限定符(有选择地暴露在外面) 
//--> 便于管理和保护数据, 使用者方便 降低使用成本

// (1). 用struct定义一个类(成员的默认权限都是公有的) 
// 在C++中 类就是一个结构体, 结构体就是一个类
struct Person{
	// 成员函数

	int getAge(){
		return age;
	}
	void print(){
		cout << name << " " << age << " " << gender << " " << number << endl;
	}

	void driveCar(){
		cout << "driveCar()" << endl;
	}

	// 成员变量
	int age;
	char* name;
	char* gender;
	int number;
};
// struct类没有访问限制符时就相当于全部公开 类外都可访问
void test4(){
	Person p;
	p.age = 10; 
	p.name = "Angela";
	p.gender = "female";
	p.number = 2017;
	p.print();
}

// (2). 用class定义一个类(默认访问权限是私有的)
class Person2{

public: // 声明为public的成员 在类外都是可以访问的, 从这里往下的都是公用的
	int getAge(){
		return age;
	}
	void print(){
		cout << name << " " << age << " " << gender << " " << number << endl;
	}

	void driveCar(){
		cout << "driveCar()" << endl;
	}
private: // 现在从public到private的成员都是公用的, 从private下的类外不能访问,
	int age;
	char* name;
	char* gender;

protected: // 声明为protected的成员 也表示这个成员对类外不可见
	int number;
};

void test5(){
	Person2 p;
	p.print();// 若去掉public 则变为私有的 不能访问
	// p.age = 10; // 不能访问
	// p.number = 2013;// 不能访问
}

// 3. 类的作用域: 类名 + :: + 成员
// Person2::driveCar 这里的driveCar属于Person2类的作用域
//void Person2::driveCar(){
	//cout << "diverCar()" << endl;
//}
// diverCar: 属于全局作用域
void driverCar(){
	cout << "dirverCar()" << endl;
}

int main2(){
	

	test4();
	system("pause");
	return 0;
}