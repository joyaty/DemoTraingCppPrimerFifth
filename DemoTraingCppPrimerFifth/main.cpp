#include<iostream>

#include<unordered_set>
#include<set>
#include<map>
//C++��һ����ϰ��
//#include "chapter01\chapter01.h"

//C++�ڶ�����ϰ��
//#include "chapter02\chapter02.h"

//C++��������ϰ��
//#include "chapter03\chapter03.h"

//C++��������ϰ��
//#include "chapter04\chapter04.h"

//C++��������ϰ��
//#include"chapter05\chapter05.h"

//C++��������ϰ��
//#include "chapter06\chapter06.h"

//C++��������ϰ��
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


	//for test ��Ա����ֵ����ֵ�����÷���ֵ���������÷���ֵ����Ҫ����ͷ�ļ� #include "chapter07\chapter07.h"
	//Person person = Person("JoyatY", "FuJian XiaMen, CN");
	//string name = person.getName();
	//string address = person.getAddress();
	//name = "Yang de xuan";
	//address = "Xiamen Fujian, CN";
	////person.getName() = "outside change name";//�������ÿ���Ϊ��ֵ
	////person.getAddress() = "out side change address��";
	//cout << "name = " << name << ", address = " << address << "\n, person.getName() = " << person.getName() << ", person.getAddress() = " << person.getAddress() << endl;

	//cout << lengthOfLongestSubstring("ohomm") << endl;

	//for test �ڴ�������⡣
	//cout << sizeof(StructA) << endl;

	//for test ��ָ����ó�Ա�����ͳ�Ա�麯�����Ǹ������ڱ����ĸ������ڱ���
	//ClassAA *a = nullptr;
	//a->funcA();//�����ڱ���
	//ClassBB *b = nullptr;
	//b->funcB();//�����ڱ���

	//for test���жϸ��������Ʋ�������߷���Ϊ�Ƿ���
	//int a = -1;
	//a = a << 2;
	//cout << a << endl;

	//for test�����ճ�Ա������ͺ����麯���Ŀճ�Ա���sizeof(��ָ������)
	//cout << sizeof(ClassAA) << endl;
	//cout << sizeof(ClassBB) << endl;

	while (true)
	{
		int stopTemp = 0;
		std::cin >> stopTemp;
	}
	return 1;
}