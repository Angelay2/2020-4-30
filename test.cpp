#include "��.h"

// 1. C++�е�auto: �Զ������Ƶ�(�ڱ���ʱ�Զ������Ƶ�) ���������κ�����
//	 ��auto����ı���, ����Ҫ�г�ʼ�����ʽ
//	 auto ������ = ��ʼ�����ʽ
//	 auto ����1 = ���ʽ1. ����2 = ���ʽ2, ...(���ʽ�����ͱ���һ��)
//	 ��������, ���鲻����auto����
// 2. ��Χfor: ������ǰ��Χ�ļ���
//	 for(���� ��ǰ�����ı���ֵ : ��Ҫ�����ļ�������)
// 3. nullptr: ָ���ֵ, ��һ���ؼ��� ����Ҫ���κ�ͷ�ļ�
//	 ����: nullptr_t
//   ���Խ�������ָ�����͵���ʽת��
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
	auto& ra2 = a;// auto����, ����&������ͨ����, ra�Ƶ�����������
	auto ra3 = a;// ra3�Ƶ��ɺ�aһ��������

	
}
// ������auto����������ĵط�
// 1. ����������������Ϊauto 
//void funa(auto a){
//}
// 2. auto����������������
// auto array[] = { 1, 2, 3 };
// 3. ����������. ������ʽ���Ͳ�һ��, Ҳ������auto������
// auto p = 3, q = 4;// �Ե�
// auto f = 3, g = 3.3;// ���



// ���ڷ�Χ��forѭ��(ֻ�ܱ�����Χȷ���ļ���)
//  for: Ԫ������ ��ǰ��Ҫ������Ԫ��ֵ : ��Ҫ�����ļ���
void test2(){
	int array[] = { 1, 2, 3, 4, 5, 6 };
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i){
		cout << array[i] << " ";
	}
	cout << endl;

	// ���ڷ�Χfor��ѭ��
	// ʹ�ü�, ��ȫ(����Խ��)
	for (int a : array){ // aΪ����Ŀ���
		// ���Լ�continue, break��������ʹ��
		cout << a << " ";
	}
	cout << endl;

	for (int& a : array){ // aά���鱾��ÿ��Ԫ��
		// ���Լ�continue, break��������ʹ��
		cout << a << " ";
	}
	cout << endl;

	// ָ������û�а취����ԭ����Ĵ�С ���ܱ���
	//int* pa = array;
	//for (int a : pa){}

	// �����Զ���ļ���, ����������ṩ��begin, end����, �Լ������ò���, ==, ����ʹ�÷�Χfor
}

void fun1(int a){
	cout << "fun(int)" << endl;
}
void fun1(int* a){
	cout << "fun2(int*)" << endl;
}
void test3(){
	int* pi = NULL; // �ȼ��� int* pi = 0;

	// NULL: ������, ���Կ�������0, Ҳ���Կ���ָ���ֵ,
	// ������Ĭ��NULLΪ����0
	fun1(NULL);// �ߵ���fun1(int a)����,

	// nullptrֻ����ָ���ֵ Ĭ��ָ������, �����ڶ�����
	// ֧�ֽ�������ָ������ת�� ���Ա���κ�ָ������
	int* pi2 = nullptr; 
	fun1(nullptr);
	cout << typeid(nullptr).name() << endl;


}
int main1(){
	test3();

	system("pause");
	return 0;
}