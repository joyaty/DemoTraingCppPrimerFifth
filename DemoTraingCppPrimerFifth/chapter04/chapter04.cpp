#include<iostream>
#include<vector>
#include<string>

using namespace std;

//练习4-13 赋值运算符的右结合律测试
void chapter04_trainning_4_13()
{
	int i;
	double d;
	d = i = 3.5;
	cout << "d = " << d << ", i = " << i << endl;//预测d = 3.0, i = 3
	i = d = 3.5;
	cout << "d = " << d << ", i = " << i << endl;//预测d = 3.5, i = 3
}

//练习4-20 下列表达式是否合法
void chapter04_trainning_4_20()
{
	vector<string> vec = { "abc", "dev" };
	vector<string>::iterator iter = vec.begin();

	*iter++;//合法，迭代器iter后移一位，且将初始值解引用

	//(*iter)++;//错误，string类型的++后置操作没有定义

	//*iter.empty();//错误，解引用运算符优先级比成员访问符要低。先计算 iter.empty(),iter是迭代器类型，没有empty成员函数

	iter->empty();//合法，迭代器可使用 -> 成员访问符访问成员函数。

	//++*iter;//错误，string类型的++前置操作没有定义

	iter++->empty();//合法，相当于iter->empty(), iter++
}

//练习4-21 使用条件运算符找出奇数，并且奇数 * 2
void chapter04_trainning_4_21()
{
	vector<int> vec = { 2, 3, 5, 1, 2, 4, 5, 66, 75 };

	for (const auto value : vec)
	{
		cout << value << " ";
	}
	cout << endl;

	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		*iter = ((*iter) % 2 == 0 ? *iter : (*iter) * 2);
	}

	for (const auto value : vec)
	{
		cout << value << " ";
	}
	cout << endl;
}

//练习4-28 输出所有内置类型所占空间的大小
void chapter04_trainning_4_28()
{
	cout << "sizeof(char) = " << sizeof(char) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;
	cout << "sizeof(short) = " << sizeof(short) << endl;
	cout << "sizeof(short*) = " << sizeof(short*) << endl;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(long) = " << sizeof(long) << endl;
	cout << "sizeof(long*) = " << sizeof(long*) << endl;
	cout << "sizeof(long long) = " << sizeof(long long) << endl;
	cout << "sizeof(long long*) = " << sizeof(long long*) << endl;
	cout << "sizeof(bool) = " << sizeof(bool) << endl;
	cout << "sizeof(bool*) = " << sizeof(bool*) << endl;
	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;
	//cout << "sizeof(void) = " << sizeof(void) << endl;//void不允许被sizeof

	//练习4-29 预测运行结果
	int x[10];
	int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;//预测 sizeof(x) = 4 * 10, sizeof(*x) = 4，商 = 10
	cout << sizeof(p) / sizeof(*p) << endl;//预测 sizeof(p) = 4, sizeof(*p) = 4, 商 = 1
}

//练习4-28 使用后置递增运算符改写
void chapter04_trainning_4_31()
{
	//例子
	vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int>::size_type cnt = vec.size();
	for (vector<int>::size_type i = 0; i < vec.size(); ++i, --cnt)
	{
		vec[i] = cnt;
	}
	for (const auto value : vec)
	{
		cout << value << " ";
	}
	cout << endl;

	//后置运算符改写
	vector<int> vec2 = { 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int>::size_type cnt2 = vec2.size();
	for (vector<int>::size_type i = 0; i < vec2.size(); i++, cnt2--)
	{
		vec2[i] = cnt2;
	}
	for (const auto value : vec2)
	{
		cout << value << " ";
	}
	cout << endl;
}