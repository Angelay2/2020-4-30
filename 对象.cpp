#include "类.h"

/*
类的对象模型: 对象在内存中的存储方式
函数行为不会有太大的差异 对于每一个对象来说不会有大的差异 如果相同的东西每个都保存一份(资源浪费)
在对象中 , 函数成员放在公共的代码段, 
*/

// 类的大小只和成员变量有关, 和成员函数无关, 空类大小为1, 
// 类的大小遵循内存对齐原则
// 成员变量存在对象中,成员函数存放在公共的代码段
// 自定义类型变量就是对象 不是内置类型 变量和对象没有区别 ,只是叫法不同
// 对象的区域决定与在哪里定义

/*代码规范:
	成员变量和非成员变量
	成员变量: 一般 加上"_变量名" 或者 "m_变量名" 或者 "变量名_"
*/

class B{
public: 
	void fun(int a){
		// a: 非成员变量
		// 
	}
private:
	int _a;
};
// 一个变量 一个函数
class C{
public:
	void func(int a){
		++a;
		cout << a << endl;
	}
private:
	int _c;
};

// 只有一个函数
class D{
public:
	void func(int a){
		++a;
		cout << a << endl;
	}
};
// 空类
class E{};

B globalB; // 在数据段
void test7(){
	int num = sizeof(B); // 4
	num = sizeof(C); // 4
	num = sizeof(D); // 1
	num = sizeof(E); //1

	int a = 10; // 在栈上
	int* pa = (int*)malloc(sizeof(int)); // 堆上

	B b; // 栈
	B* pb = (B*)malloc(sizeof(B)); // 堆上
}
int main(){
	test7();

	system("pause");
	return 0;
}