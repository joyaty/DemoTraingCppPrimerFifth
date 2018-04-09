#include<iostream>
#include<string>

using namespace std;

//��ϰ2-3���Ķ�����Ԥ����
void chapter02_trainning_2_3()
{
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl; //Ԥ�� 32
	cout << u - u2 << endl; //Ԥ�� 2^32 - 32

	int i = 10, i2 = 42;
	cout << i2 - i << endl;//Ԥ�� 32
	cout << i - i2 << endl;//Ԥ�� -32
	cout << i - u << endl;//Ԥ��0
	cout << u - i << endl;//Ԥ��0
}

string global_str; //Ԥ���ʼ��Ϊ��
int global_int; //Ԥ���ʼ��Ϊ0
int global_int2 = 10;
//��ϰ2-9 and 2-10 ��ʼ�����
void chapter02_trainning_2_9()
{
	//1-9
	int a = 0x20;
	int b = { 3 };
	int c(3.14); // int c = {3.14} //�����������б��ʼ������������ж�ʧ��Ϣ���յĳ�ʼ����
	int d = 3.14;
	cout << a << " " << b << " " << c << " " << d << " " << endl;
	//double m = n = 999.99; //ע�ⱨ��nδ����

	//1-10
	string local_str;//Ԥ�Ƴ�ʼ��Ϊ�մ�
	int local_int;//Ԥ�Ʊ���undefined

	cout << "global_str = " << global_str << ", global_int = " << global_int << ", local_str = " << local_str << endl; // ", local_int = " << local_int << endl;

	int global_int2 = 1;
	cout << "global_int2 = " << global_int2 << endl; //global_int2 ������ȫ�ֱ��� global_int2
	cout << "::global_int2 = " << ::global_int2;// :: ��ʽ����ȫ��������

	//extern int global_value = 10; //extern �ⲿ�����ľֲ������������ڲ�ʹ��extern���������������ʼ��
}

//��ϰ2-14 Ԥ�����д����Ƿ�Ϸ����������
void chapter02_trainning_2_14()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
	{
		sum += i;
	}
	cout << "i = " << i << ", sum = " << sum << endl; //Ԥ��Ϸ������ i = 100�� sum = 45
}

//��ϰ2-15�����ö��壬��ʼ�����Ͳ�ͬ���ͱ���������֮��ĸ�ֵ
void chapter02_trainning_2_15()
{
	//��ϰ2-15
	int ival = 1.01;//��ȷ����Ϣ��ʧ
	//int &rval1 = 1.01;//���󣬷ǳ������õĳ�ʼֵ��������ֵ
	int &rval2 = ival;//��ȷ
	//int &rval3; //�������ñ��뱻��ʼ��

	//��ϰ2-16
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;//��ȷ��ͬʱd��ֵҲ���
	cout << "r2 = " << r2 << ", d = " << d << endl;
	r2 = r1;//��ȷ��r2���Ϊ0��ͬʱdҲ���Ϊ0
	cout << "r2 = " << r2 << ", d = " << d << endl;
	r2 = 3.14159;
	i = r2;//��ȷ����Ϣ��ʧ��iΪ3��r1ҲΪ3
	cout << "r1 = " << r1 << ", i = " << i << endl;
	r1 = d;//��ȷ��
	cout << "r1 = " << r1 << ", i = " << i << endl;

	//��ϰ2-17
	i = 5;
	r1 = 10;
	cout << "r1 = " << r1 << ", i = " << i << endl;
}

//��ϰ2-18,2-20,
void chapter02_trainning_2_18()
{
	//��ϰ2-18 ��ϰָ�룬���ָ��ָ���ָ��ָ���ֵ
	int i = 0;
	int *p1 = &i;
	int *p2 = 0; // nullptr ��ָ��

	int b = 1;
	p2 = &b;
	*p2 = 10;
	cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << ", b = " << b << endl;
	p2 = p1;
	cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
	 
	//��ϰ2-20 Ԥ�����г��������
	int a = 42;
	int *p = &a;
	*p = *p * *p;
	cout << "*p = " << *p << endl; //Ԥ�⣬����i^2
}

//��ϰ2-27 2-28 2-29 const ָ�� ����
void chapter02_trainning_2_27()
{
	//��ϰ2-27 ������Щ�ǶԵģ���Щ�Ǵ�ģ�˵������
	////int i = -1; // , &r = 0;//&r = 0���� &r����һ��ָ���������ã���������ֵ��ʼ������const int &r = 0����ȷ��
	//const int i = -1, &r = 0; //��ȷ������ͬ��
	//const int i2 = i, &r = i;//��ȷ������һ��i��ֵ��const int i2, i2�޷����޸ġ�&r ��һ��ָ���������ã��������õĶ����Ƿ��Ǹ�����δ�����ƣ�const int &rֻ�Ƕ�r�Ĳ��������޶���������ֵ������
	//const int *p1 = &i2;//��ȷ��p1Ϊָ������ָ��
	////int *const p2 = &i2;//��������i2��һ��������������ָ������ָ�����Σ���const int *p2 = &i2�Ŷԣ��ڶ���const����ν��
	//const int *const p3 = &i2;//��ȷ������ͬ�ϡ�
	////const int *const p4;//����p4Ϊָ�����ĳ���ָ�룬�����ʼ��

	//��ϰ2-28
	//int i, *const cp; //����һ��int�ͱ���i������ָ��cp����ʱcp�����ʼ�����ʶ��������
	//int *p1, *const p2 = &i; //����һ��ָ��int��ָ��p1������ָ��p2����ʱp2�����ʼ�����ʶ��������
	//const int ic, &r = ic; //����һ��int�ͳ����������������ṩ��ʼ�����ʶ�������󣬵ڶ���������һ�����ó���ic�����á�
	//const int *const p3 = &ic; //����һ��ָ��int�����ĳ���ָ�룬�������ʼ�����������
	//const int *p;//����һ��ָ������δ��ʼ����ָ��p

	//��ϰ2-29����Ҫ2-28������
	//i = ic;//��ȷ����const int ��ֵ������int
	//p1 = p3;//����p3��һ��ָ������ָ�룬��ָ���ֵ�޷��޸ģ���p1��ָͨ���޴�����
	//p1 = &ic;//����ͬ�ϣ�ic�ǳ���������ʹ��ָ������ָ��const int ���Ρ�p1����ָͨ�롣
	//p3 = &ic;//���� *const p3 ����ָ�룬�޷��޸�ָ��ָ��
	//p2 = p1;//���� ����ͬ��
	//ic = *p3;//����ic��һ���������޷��޸���ֵ

	//��ϰ2-30 2-31
	//const int v2 = 0;
	//int v1 = v2;
	//int *p1 = &v1, &r1 = v1;
	//const int *p2 = &v2, *const p3 = &v2, &r2 = v2;

	//r1 = v2;
	//p1 = p2; //���� p2�еײ�const ,p1û��
	//p2 = p1; //��ȷ int* ����ת��Ϊconst int *
	//p1 = p3; //���� p3�ж���const, p1û��
	//p3 = p1; //���� p3�еײ�const p1û��

}

//��ϰ2-35 �ж����ж��壬�ƶ�����
void chapter02_trainning_2_35()
{
	const int i = 42;//�ƶϣ�int�ͳ���
	auto j = i;//�ƶ�1��int�ͱ�����Ӧ�ÿ��Ա��j��ֵ
	const auto &k = i;//�ƶ�2��int�ͳ������ã����ɱ��k��ֵ
	auto *p = &i;//�ƶ�3��ָ��int�ͳ�����ָ��ָ����Ա䣬ָ��Ķ��󲻿ɱ�
	const auto j2 = i, &k2 = i;//�ƶ�4��j2�����ͳ�����5,k2�ǳ���i�����ͳ�������

	//��֤
	cout <<"1. " << ++j << endl;
	cout << "2. &k = " << &k << ", &i = " << &i << endl; //++k����������˵���ǳ����������ַһ��˵��������
	int i2 = 444;
	p = &i2;
	cout << "3. " << *p << endl; //++*p����������˵���ǳ�����*pֵ���˵����ָ��ɱ䡣
	cout << "4. &i = " << &i << ", &j2 = " << &j2 << endl; //++j2����������˵���ǳ����������ַ��һ��˵���Ƕ����ĳ���
	cout << "5. &k2 = " << &k2 << ", &i = " << &i << endl;//++k2����������˵���ǳ����������ַһ��˵��������
 }

//��ϰ2-36 decltype���Ͷ���
void chapter02_trainning_2_36()
{
	int a = 3, b = 4;
	decltype(a) c = a; //c��int�͵ı���
	decltype((b)) d = a;//d��a������
	decltype(a = b) e = a;//��ֵ���ʽ�������ã�ע��decltype�еı��ʽ�����ϲ���ִ�С����e��a������
	++c;
	cout << "c = " << c << ", a = " << a << ", b = " << b << endl;//Ӧ����� c = 4, a = 3, b = 4
	++d;
	cout << "d = " << d << ", a = " << a << ", b = " << b << endl;//Ӧ����� d = 4, a = 4, b = 4
	
	++a;//a = 5
	++e;
	cout << "e = " << e << ", a = " << a << ", b = " << b << endl;//Ӧ����� e = 6, a = 6, b = 4
}