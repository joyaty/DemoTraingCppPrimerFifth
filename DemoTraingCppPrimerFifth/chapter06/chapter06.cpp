#include<iostream>
#include<string>
#include<initializer_list>
#include<cassert>
#include<vector>

using namespace std;

size_t count_call()
{
	static int callCount;//未提供初始化值，执行值初始化，被初始化为0

	return callCount++;
}

//练习6-7 定义一个函数可以统计该函数的调用次数
void chapter06_trainning_6_7()
{
	for (size_t i = 0; i != 10; ++i)
	{
		cout << count_call() << endl;
	}
}

//指针形参，交换两个值
void test_swap2_int(int *a, int *b)
{
	cout << "insideFunc: a = " << a << ", &a = " << &a << endl;
	cout << "insideFunc: b = " << b << ", &b = " << &b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;

	a = nullptr;
	b = nullptr;

	cout << "insideFunc: a = " << a << ", &a = " << &a << endl;
	cout << "insideFunc: b = " << b << ", &b = " << &b << endl;
}

//练习6-10 定义一个指针形参，交换两个值
void chapter06_trainning_6_10()
{
	int a = 0;
	int b = 100;
	cout << "before swap：" << endl;
	cout << "outsideFunc: a = " << a << ", &a = " << &a << endl;
	cout << "outsideFunc: b = " << b << ", &b = " << &b << endl;
	test_swap2_int(&a, &b);
	cout << "after swap：" << endl;
	cout << "outsideFunc: a = " << a << ", &a = " << &a << endl;
	cout << "outsideFunc: b = " << b << ", &b = " << &b << endl;
}

//函数-判断string对象是否有大写字母
int test_checkStringHaveUpper(const string& str)
{
	int upperCharPos = -1;
	int curIndex = 0;
	for (const char c : str)
	{
		if (c >= 'A' && c <= 'Z')
		{
			upperCharPos = curIndex;
			break;
		}
		++curIndex;
	}
	return upperCharPos;
}

//函数-将string对象改写为小写
void test_changeStringToLower(string &str)
{
	for (char &c : str)
	{
		c = tolower(c);
	}
}

//练习6-17 编写一个函数，判断string对象是否有大写字母
//再写一个函数，将string对象改写为小写
void chapter06_trainning_6_17()
{
	while (true)
	{
		string str;
		cin >> str;
		int upperIndex = test_checkStringHaveUpper(str);
		if (upperIndex >= 0){
			cout << "string = " << str << "has upper, posIndex = " << upperIndex << ", will conver all to lower!" << endl;
			test_changeStringToLower(str);
		}
		cout << "lowe str = " << str << endl;

		cout << "need Continue?" << endl;
		bool needContinue;
		cin >> needContinue;
		if (!needContinue)
		{
			break;
		}
	}
}

//使用initializer_list传递可变数量的int型参数
int test_useInitializer_list(initializer_list<int> il)
{
	int sum = 0;
	for (auto iter = il.begin(); iter != il.end(); ++iter)
	{
		sum += (*iter);
	}
	return sum;
}

//练习6-27 编写一个函数，结算数组中所有值的和
void chapter06_trainning_6_27()
{
	cout << "sum = " << test_useInitializer_list({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << endl;
	//辅助调试信息
#ifndef NDEBUG
	cout << __FUNCTION__ << ", " << __LINE__ << ", " << __FILE__ << ", " << __TIME__ << ", " << __DATE__ << endl;
#endif
}

//练习6-55，编写四个函数，分别对两个int进行+、-、*、/运算，结果返回int，并保存四个指向该函数的函数指针到vector中，然后使用函数指针计算
int test_add(const int, const int);
int test_sub(const int, const int);
int test_multi(const int, const int);
int test_div(const int, const int);

//func是该类型函数的函数指针
typedef int(*func)(const int, const int);

//func2是该类型函数的函数类型，使用时+ "*"
typedef int func2(const int, const int);

void chapter06_trainning_6_55()
{
	vector<func> vec;

	vec.push_back(test_add);
	vec.push_back(test_sub);
	vec.push_back(test_multi);
	vec.push_back(test_div);

	vector<func2*> vec2;
	vec2.push_back(test_add);
	vec2.push_back(test_sub);
	vec2.push_back(test_multi);
	vec2.push_back(test_div);


	int a = 10;
	int b = 4;
	for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter)
	{
		cout << (*iter)(a, b) << endl;
	}
	cout << endl;
	for (auto iter = vec2.cbegin(); iter != vec2.cend(); ++iter)
	{
		cout << (*iter)(a, b) << endl;
	}
}

int test_add(const int a, const int b)
{
	return a + b;
}
int test_sub(const int a, const int b)
{
	return a - b;
}
int test_multi(const int a, const int b)
{
	return a * b;
}
int test_div(const int a, const int b)
{
	return a / b;
}

