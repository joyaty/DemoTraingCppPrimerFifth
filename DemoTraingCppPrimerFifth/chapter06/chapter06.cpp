#include<iostream>
#include<string>
#include<initializer_list>
#include<cassert>
#include<vector>

using namespace std;

size_t count_call()
{
	static int callCount;//δ�ṩ��ʼ��ֵ��ִ��ֵ��ʼ��������ʼ��Ϊ0

	return callCount++;
}

//��ϰ6-7 ����һ����������ͳ�Ƹú����ĵ��ô���
void chapter06_trainning_6_7()
{
	for (size_t i = 0; i != 10; ++i)
	{
		cout << count_call() << endl;
	}
}

//ָ���βΣ���������ֵ
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

//��ϰ6-10 ����һ��ָ���βΣ���������ֵ
void chapter06_trainning_6_10()
{
	int a = 0;
	int b = 100;
	cout << "before swap��" << endl;
	cout << "outsideFunc: a = " << a << ", &a = " << &a << endl;
	cout << "outsideFunc: b = " << b << ", &b = " << &b << endl;
	test_swap2_int(&a, &b);
	cout << "after swap��" << endl;
	cout << "outsideFunc: a = " << a << ", &a = " << &a << endl;
	cout << "outsideFunc: b = " << b << ", &b = " << &b << endl;
}

//����-�ж�string�����Ƿ��д�д��ĸ
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

//����-��string�����дΪСд
void test_changeStringToLower(string &str)
{
	for (char &c : str)
	{
		c = tolower(c);
	}
}

//��ϰ6-17 ��дһ���������ж�string�����Ƿ��д�д��ĸ
//��дһ����������string�����дΪСд
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

//ʹ��initializer_list���ݿɱ�������int�Ͳ���
int test_useInitializer_list(initializer_list<int> il)
{
	int sum = 0;
	for (auto iter = il.begin(); iter != il.end(); ++iter)
	{
		sum += (*iter);
	}
	return sum;
}

//��ϰ6-27 ��дһ����������������������ֵ�ĺ�
void chapter06_trainning_6_27()
{
	cout << "sum = " << test_useInitializer_list({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << endl;
	//����������Ϣ
#ifndef NDEBUG
	cout << __FUNCTION__ << ", " << __LINE__ << ", " << __FILE__ << ", " << __TIME__ << ", " << __DATE__ << endl;
#endif
}

//��ϰ6-55����д�ĸ��������ֱ������int����+��-��*��/���㣬�������int���������ĸ�ָ��ú����ĺ���ָ�뵽vector�У�Ȼ��ʹ�ú���ָ�����
int test_add(const int, const int);
int test_sub(const int, const int);
int test_multi(const int, const int);
int test_div(const int, const int);

//func�Ǹ����ͺ����ĺ���ָ��
typedef int(*func)(const int, const int);

//func2�Ǹ����ͺ����ĺ������ͣ�ʹ��ʱ+ "*"
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

