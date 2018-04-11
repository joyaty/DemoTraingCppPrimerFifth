#include<iostream>

#include<unordered_set>
#include<set>
#include<map>
//C++第一章练习题
//#include "chapter01\chapter01.h"

//C++第二章练习题
//#include "chapter02\chapter02.h"

//C++第三章练习题
//#include "chapter03\chapter03.h"

//C++第四章练习题
//#include "chapter04\chapter04.h"

//C++第五章练习题
//#include"chapter05\chapter05.h"

//C++第六章练习题
//#include "chapter06\chapter06.h"

//C++第七章练习题
#include "chapter07\chapter07.h"

//int lengthOfLongestSubstring(string s) {
//	int max = 0;
//	map<char, int> tempMap;
//	int curLength = 0;
//	int startIndex = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		curLength++;
//		auto ret = tempMap.insert(pair<char, int>(s[i], i));
//		if (!ret.second)
//		{
//			if (max == 0)
//			{
//				max = curLength - 1;
//			}
//			int tempIndex = tempMap.at(s[i]);
//
//			if (tempIndex >= startIndex)
//			{
//				startIndex = tempIndex + 1;
//				curLength = i + 1 - startIndex;
//				if (curLength > max)
//				{
//					max = curLength;
//				}
//			}
//			tempMap.erase(s[i]);
//			tempMap.insert(pair<char, int>(s[i], i));
//		}
//	}
//	if (curLength > max)
//	{
//		max = curLength;
//	}
//	return max;
//}

struct StructA
{
	char a;
	short s;
	int i;
	long long l;
};

class  ClassAA
{
public:

	void funcA();

private:

};

class ClassBB
{
public:
	virtual void funcB();

};


int main()
{

	chapter07_trainning_7_27();


	//for test 成员函数值返回值，引用返回值，常量引用返回值，需要引入头文件 #include "chapter07\chapter07.h"
	//Person person = Person("JoyatY", "FuJian XiaMen, CN");
	//string name = person.getName();
	//string address = person.getAddress();
	//name = "Yang de xuan";
	//address = "Xiamen Fujian, CN";
	////person.getName() = "outside change name";//返回引用可作为左值
	////person.getAddress() = "out side change address！";
	//cout << "name = " << name << ", address = " << address << "\n, person.getName() = " << person.getName() << ", person.getAddress() = " << person.getAddress() << endl;

	//cout << lengthOfLongestSubstring("ohomm") << endl;

	//for test 内存对齐问题。
	//cout << sizeof(StructA) << endl;

	//for test 空指针调用成员函数和成员虚函数，那个运行期报错，哪个编译期报错
	//ClassAA *a = nullptr;
	//a->funcA();//编译期报错
	//ClassBB *b = nullptr;
	//b->funcB();//运行期报错

	//for test：判断负数的左移操作，最高符号为是否保留
	//int a = -1;
	//a = a << 2;
	//cout << a << endl;

	//for test：检查空成员数据类和函数虚函数的空成员类的sizeof(虚指针问题)
	//cout << sizeof(ClassAA) << endl;
	//cout << sizeof(ClassBB) << endl;

	while (true)
	{
		int stopTemp = 0;
		std::cin >> stopTemp;
	}
	return 1;
}