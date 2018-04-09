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
	long long a;
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
	//chapter07_trainning_7_39();

	/*cout << lengthOfLongestSubstring("ohomm") << endl;*/

	cout << sizeof(StructA) << endl;

	//ClassAA *a = nullptr;
	//ClassBB *b = nullptr;

	//a->funcA();
	//b->funcB();

	int a = -1;
	a = a << 2;
	cout << a << endl;

	cout << sizeof(ClassAA) << endl;
	cout << sizeof(ClassBB) << endl;

	while (true)
	{
		int stopTemp = 0;
		std::cin >> stopTemp;
	}
	return 1;
}