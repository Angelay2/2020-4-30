#include "��.h"

/*
��Ķ���ģ��: �������ڴ��еĴ洢��ʽ
������Ϊ������̫��Ĳ��� ����ÿһ��������˵�����д�Ĳ��� �����ͬ�Ķ���ÿ��������һ��(��Դ�˷�)
�ڶ����� , ������Ա���ڹ����Ĵ����, 
*/

// ��Ĵ�Сֻ�ͳ�Ա�����й�, �ͳ�Ա�����޹�, �����СΪ1, 
// ��Ĵ�С��ѭ�ڴ����ԭ��
// ��Ա�������ڶ�����,��Ա��������ڹ����Ĵ����
// �Զ������ͱ������Ƕ��� ������������ �����Ͷ���û������ ,ֻ�ǽз���ͬ
// �������������������ﶨ��

/*����淶:
	��Ա�����ͷǳ�Ա����
	��Ա����: һ�� ����"_������" ���� "m_������" ���� "������_"
*/

class B{
public: 
	void fun(int a){
		// a: �ǳ�Ա����
		// 
	}
private:
	int _a;
};
// һ������ һ������
class C{
public:
	void func(int a){
		++a;
		cout << a << endl;
	}
private:
	int _c;
};

// ֻ��һ������
class D{
public:
	void func(int a){
		++a;
		cout << a << endl;
	}
};
// ����
class E{};

B globalB; // �����ݶ�
void test7(){
	int num = sizeof(B); // 4
	num = sizeof(C); // 4
	num = sizeof(D); // 1
	num = sizeof(E); //1

	int a = 10; // ��ջ��
	int* pa = (int*)malloc(sizeof(int)); // ����

	B b; // ջ
	B* pb = (B*)malloc(sizeof(B)); // ����
}
int main(){
	test7();

	system("pause");
	return 0;
}