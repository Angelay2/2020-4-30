#include "类.h"

// 1. C++中的auto: 自动类型推导(在编译时自动类型推导) 本身不代表任何类型
//	 用auto定义的变量, 必须要有初始化表达式
//	 auto 变量名 = 初始化表达式
//	 auto 变量1 = 表达式1. 变量2 = 表达式2, ...(表达式的类型必须一致)
//	 函数参数, 数组不能用auto声明
// 2. 范围for: 遍历当前范围的集合
//	 for(类型 当前遍历的变量值 : 需要遍历的集合名称)
// 3. nullptr: 指针空值, 是一个关键字 不需要包任何头文件
//	 类型: nullptr_t
//   可以进行任意指针类型的隐式转化
struct A{

};
void test(){
	
	auto a = 10;
	auto b = 3 + 4;
	auto c = 1.2;
	auto d = 'a';
	A sa;
	auto e = sa;

	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
	cout << typeid(e).name() << endl;

	int& ra = a;
	auto& ra2 = a;// auto引用, 不加&就是普通变量, ra推导成引用类型
	auto ra3 = a;// ra3推导成和a一样的类型

	
}
// 不能用auto来定义变量的地方
// 1. 函数参数不能声明为auto 
//void funa(auto a){
//}
// 2. auto不能用来定义数组
// auto array[] = { 1, 2, 3 };
// 3. 定义多个变量. 如果表达式类型不一致, 也不能用auto来声明
// auto p = 3, q = 4;// 对的
// auto f = 3, g = 3.3;// 错的



// 基于范围的for循环(只能遍历范围确定的集合)
//  for: 元素类型 当前需要遍历的元素值 : 需要遍历的集合
void test2(){
	int array[] = { 1, 2, 3, 4, 5, 6 };
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i){
		cout << array[i] << " ";
	}
	cout << endl;

	// 基于范围for的循环
	// 使用简单, 安全(不会越界)
	for (int a : array){ // a为数组的拷贝
		// 可以加continue, break可以正常使用
		cout << a << " ";
	}
	cout << endl;

	for (int& a : array){ // a维数组本身每个元素
		// 可以加continue, break可以正常使用
		cout << a << " ";
	}
	cout << endl;

	// 指针类型没有办法计算原数组的大小 不能遍历
	//int* pa = array;
	//for (int a : pa){}

	// 对于自定义的集合, 如果集合中提供了begin, end方法, 以及解引用操作, ==, 可以使用范围for
}

void fun1(int a){
	cout << "fun(int)" << endl;
}
void fun1(int* a){
	cout << "fun2(int*)" << endl;
}
void test3(){
	int* pi = NULL; // 等价于 int* pi = 0;

	// NULL: 二义性, 可以看做整数0, 也可以看成指针空值,
	// 编译器默认NULL为整数0
	fun1(NULL);// 走到了fun1(int a)函数,

	// nullptr只代表指针空值 默认指针类型, 不存在二义性
	// 支持进行任意指针类型转换 可以变成任何指针类型
	int* pi2 = nullptr; 
	fun1(nullptr);
	cout << typeid(nullptr).name() << endl;


}
int main1(){
	test3();

	system("pause");
	return 0;
}