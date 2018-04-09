#include<iostream>
#include<string>

using namespace std;

//练习2-3，阅读程序，预测结果
void chapter02_trainning_2_3()
{
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl; //预测 32
	cout << u - u2 << endl; //预测 2^32 - 32

	int i = 10, i2 = 42;
	cout << i2 - i << endl;//预测 32
	cout << i - i2 << endl;//预测 -32
	cout << i - u << endl;//预测0
	cout << u - i << endl;//预测0
}

string global_str; //预测初始化为空
int global_int; //预测初始化为0
int global_int2 = 10;
//练习2-9 and 2-10 初始化相关
void chapter02_trainning_2_9()
{
	//1-9
	int a = 0x20;
	int b = { 3 };
	int c(3.14); // int c = {3.14} //编译器报错，列表初始化不允许可能有丢失信息风险的初始化。
	int d = 3.14;
	cout << a << " " << b << " " << c << " " << d << " " << endl;
	//double m = n = 999.99; //注意报错n未定义

	//1-10
	string local_str;//预计初始化为空串
	int local_int;//预计报错undefined

	cout << "global_str = " << global_str << ", global_int = " << global_int << ", local_str = " << local_str << endl; // ", local_int = " << local_int << endl;

	int global_int2 = 1;
	cout << "global_int2 = " << global_int2 << endl; //global_int2 覆盖了全局变量 global_int2
	cout << "::global_int2 = " << ::global_int2;// :: 显式访问全局作用域

	//extern int global_value = 10; //extern 外部变量的局部声明，函数内部使用extern修饰声明不允许初始化
}

//练习2-14 预测下列代码是否合法，输出多少
void chapter02_trainning_2_14()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
	{
		sum += i;
	}
	cout << "i = " << i << ", sum = " << sum << endl; //预测合法，输出 i = 100， sum = 45
}

//练习2-15，引用定义，初始化，和不同类型变量及引用之间的赋值
void chapter02_trainning_2_15()
{
	//练习2-15
	int ival = 1.01;//正确，信息丢失
	//int &rval1 = 1.01;//错误，非常量引用的初始值必须是左值
	int &rval2 = ival;//正确
	//int &rval3; //错误，引用必须被初始化

	//练习2-16
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;//正确，同时d的值也变更
	cout << "r2 = " << r2 << ", d = " << d << endl;
	r2 = r1;//正确，r2变更为0，同时d也变更为0
	cout << "r2 = " << r2 << ", d = " << d << endl;
	r2 = 3.14159;
	i = r2;//正确，信息丢失，i为3，r1也为3
	cout << "r1 = " << r1 << ", i = " << i << endl;
	r1 = d;//正确，
	cout << "r1 = " << r1 << ", i = " << i << endl;

	//练习2-17
	i = 5;
	r1 = 10;
	cout << "r1 = " << r1 << ", i = " << i << endl;
}

//练习2-18,2-20,
void chapter02_trainning_2_18()
{
	//练习2-18 练习指针，变更指针指向和指针指向的值
	int i = 0;
	int *p1 = &i;
	int *p2 = 0; // nullptr 空指针

	int b = 1;
	p2 = &b;
	*p2 = 10;
	cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << ", b = " << b << endl;
	p2 = p1;
	cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
	 
	//练习2-20 预测下列程序的作用
	int a = 42;
	int *p = &a;
	*p = *p * *p;
	cout << "*p = " << *p << endl; //预测，计算i^2
}

//练习2-27 2-28 2-29 const 指针 引用
void chapter02_trainning_2_27()
{
	//练习2-27 下列哪些是对的，哪些是错的，说明理由
	////int i = -1; // , &r = 0;//&r = 0错误， &r不是一个指向常量的引用，不能用右值初始化。若const int &r = 0则正确。
	//const int i = -1, &r = 0; //正确，理由同上
	//const int i2 = i, &r = i;//正确，拷贝一个i的值给const int i2, i2无法别修改。&r 是一个指向常量的引用，但其引用的对象是否是个常量未做限制，const int &r只是对r的操作做了限定（不允许赋值操作）
	//const int *p1 = &i2;//正确，p1为指向常量的指针
	////int *const p2 = &i2;//错误，这里i2是一个常量，必须用指向常量的指针修饰，即const int *p2 = &i2才对，第二个const无所谓。
	//const int *const p3 = &i2;//正确，理由同上。
	////const int *const p4;//错误，p4为指向常量的常量指针，必须初始化

	//练习2-28
	//int i, *const cp; //声明一个int型变量i，常量指针cp，当时cp必须初始化，故而这里错误。
	//int *p1, *const p2 = &i; //声明一个指向int的指针p1，常量指针p2，当时p2必须初始化，故而这里错误。
	//const int ic, &r = ic; //声明一个int型常量，但常量必须提供初始化，故而这里错误，第二个是声明一个引用常量ic的引用。
	//const int *const p3 = &ic; //声明一个指向int常量的常量指针，但必须初始化，这里错误
	//const int *p;//声明一个指向常量的未初始化的指针p

	//练习2-29，需要2-28声明；
	//i = ic;//正确，将const int 的值拷贝到int
	//p1 = p3;//错误，p3是一个指向常量的指针，所指向的值无法修改，而p1普通指针无此限制
	//p1 = &ic;//错误，同上，ic是常量，必须使用指向常量的指针const int 修饰。p1是普通指针。
	//p3 = &ic;//错误 *const p3 常量指针，无法修改指针指向
	//p2 = p1;//错误 理由同上
	//ic = *p3;//错误，ic是一个常量，无法修改其值

	//练习2-30 2-31
	//const int v2 = 0;
	//int v1 = v2;
	//int *p1 = &v1, &r1 = v1;
	//const int *p2 = &v2, *const p3 = &v2, &r2 = v2;

	//r1 = v2;
	//p1 = p2; //错误 p2有底层const ,p1没有
	//p2 = p1; //正确 int* 可以转化为const int *
	//p1 = p3; //错误 p3有顶层const, p1没有
	//p3 = p1; //错误 p3有底层const p1没有

}

//练习2-35 判断下列定义，推断类型
void chapter02_trainning_2_35()
{
	const int i = 42;//推断，int型常量
	auto j = i;//推断1，int型变量，应该可以变更j的值
	const auto &k = i;//推断2，int型常量引用，不可变更k的值
	auto *p = &i;//推断3，指向int型常量的指向，指向可以变，指向的对象不可变
	const auto j2 = i, &k2 = i;//推断4，j2是整型常量，5,k2是常量i的整型常量引用

	//验证
	cout <<"1. " << ++j << endl;
	cout << "2. &k = " << &k << ", &i = " << &i << endl; //++k编译器错误，说明是常量，输出地址一致说明是引用
	int i2 = 444;
	p = &i2;
	cout << "3. " << *p << endl; //++*p编译器错误，说明是常量，*p值变更说明是指向可变。
	cout << "4. &i = " << &i << ", &j2 = " << &j2 << endl; //++j2编译器错误，说明是常量，输出地址不一致说明是独立的常量
	cout << "5. &k2 = " << &k2 << ", &i = " << &i << endl;//++k2编译器错误，说明是常量，输出地址一致说明是引用
 }

//练习2-36 decltype类型定义
void chapter02_trainning_2_36()
{
	int a = 3, b = 4;
	decltype(a) c = a; //c是int型的变量
	decltype((b)) d = a;//d是a的引用
	decltype(a = b) e = a;//赋值表达式产生引用，注意decltype中的表达式本质上并不执行。因此e是a的引用
	++c;
	cout << "c = " << c << ", a = " << a << ", b = " << b << endl;//应该输出 c = 4, a = 3, b = 4
	++d;
	cout << "d = " << d << ", a = " << a << ", b = " << b << endl;//应该输出 d = 4, a = 4, b = 4
	
	++a;//a = 5
	++e;
	cout << "e = " << e << ", a = " << a << ", b = " << b << endl;//应该输出 e = 6, a = 6, b = 4
}