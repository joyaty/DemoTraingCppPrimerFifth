#include<string>
#include<iostream>
#include<vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::vector;

//练习3-2 分别使用getline和>>操作符读取一行和一个词
void chapter03_trainning_3_2()
{
	string str1;
	getline(cin, str1);
	cout << "str1 = " << str1 << endl;
	string str2;
	while (cin >> str2)
	{
		cout << "str2 = " << str2 << endl;
	}
}

//练习3-4 输入两个字符串，比较是否相等并输入结果，不相等输出大的字符串。然后比较两个字符串的长度，输出长度大的字符串
void chapter03_trainning_3_4()
{
	string str1, str2;
	cin >> str1 >> str2;

	if (str1 == str2)
	{
		cout << "str1 = " << str1 << ", str2 = " << str2 << " is equal" << endl;
	}
	else if (str1 > str2)
	{
		cout << "str1 = " << str1 << " is large" << endl;
	}
	else if (str1 < str2)
	{
		cout << "str2 = " << str2 << " is large" << endl;
	}

	if (str1.size() > str2.size())
	{
		cout << "str1 = " << str1 << " is longer, size() = " << str1.size() << endl;
	}
	else if (str1.size() < str2.size())
	{
		cout << "str2 = " << str2 << " is longer, size() = " << str2.size() << endl;
	}
	else
	{
		cout << "str1 = " << str1 << " is same long as str2 = "<< str2 <<", size() = " << str1.size() << endl;
	}
}

//练习3-5 输入n个字符串，输出拼接的长字符串和空格间隔的字符串
void chapter03_trainning_3_5()
{
	string str;
	string sumStr;
	string spaceStr;
	while (cin >> str)
	{
		if (str == "end")
		{
			break;
		}
		sumStr += str;
		spaceStr += " " + str;
	}
	cout << "sumStr = " << sumStr << endl;
	cout << "spaceStr = " << spaceStr << endl;
}

//练习3-6 使用范围for将字符串内所有字符用X替代
void chapter03_trainning_3_6()
{
	string testStr = "askdfwr451sfa, wefs";

	//范围for版本
	for (auto &c : testStr)
	{
		c = 'X';
	}
	cout << "new testStr = " << testStr << endl;

	//传统for循环版本
	testStr = "askdfwr451sfa, wefs";
	cout << "restore testStr = " << testStr << endl;
	for (decltype(testStr.size()) i = 0; i < testStr.size(); ++i)
	{
		testStr[i] = 'X';
	}
	cout << "new testStr = " << testStr << endl;

	//while循环版本
	testStr = "askdfwr451sfa, wefs";
	cout << "restore testStr = " << testStr << endl;
	decltype(testStr.size()) i = 0;
	while (i < testStr.size())
	{
		testStr[i] = 'X';
		++i;
	}
	cout << "new testStr = " << testStr << endl;
}

//读入一个有标点符号的字符串，除去所有的标点符号，输出剩余部分
void chapter03_trainning_3_10()
{
	string str;
	cin >> str;
	cout << "input str = " << str << endl;
	string finalStr;
	for (auto c : str)
	{
		if (!ispunct(c))
		{
			finalStr += c;
		}
	}
	cout << "final str = " << finalStr << endl;
}


//练习3-16 输入例子的vector对象，预测值容量，输出看是否正确
void chapter03_trainning_3_16()
{
	vector<int> vec1; //预测0个元素
	cout << "a. vec1.size() = " << vec1.size() << endl;

	vector<int> vec2(10); //预测10个int元素，每个元素为0
	cout << "b. vec2.size() = " << vec2.size() << ", vec2[2] = " << vec2[2] << endl;

	vector<int> vec3(10, 42);//预测10个int元素，每个元素为42
	cout << "c. vec3.size() = " << vec3.size() << ", vec3[3] = " << vec3[3] << endl;

	vector<int> vec4{10};//预测1个int元素，元素为10
	cout << "d. vec4.size() = " << vec4.size() << ", vec4[0] = " << vec4[0] << endl;

	vector<int> vec5{ 10, 42 };//预测2个int元素，元素为10, 42
	cout << "e. vec5.size() = " << vec5.size() << ", vec5[0] = " << vec5[0] << ", vec5[1] = " << vec5[1] << endl;

	vector<string> vec6{ 10 };//预测10个string元素，元素为""
	cout << "f. vec6.size() = " << vec6.size() << ", vec6[9] = " << vec6[9] << endl;

	vector<string> vec7{ 10, "hi" };//预测10个string元素，元素为"hi"
	cout << "g. vec7.size() = " << vec7.size() << ", vec7[6] = " << vec7[6] << endl;
}

//练习3-17 读入一组词存入vector对象中，全部词转化为大写，输出改变后的词，每个词一行
void chapter03_trainning_3_17()
{
	cout << "使用范围for遍历实现" << endl;
	vector<string> vec;
	string str;
	while (cin >> str)
	{
		if (str == "end")
		{
			break;
		}
		vec.push_back(str);
	}
	for (auto &str : vec)
	{
		for (auto &c : str)
		{
			c = toupper(c);
		}
	}

	for (auto str : vec)
	{
		cout << str << endl;
	}

	//使用迭代器实现
	cout << "使用迭代器实现" << endl;
	vector<string> vec2;
	string str2;
	while (cin >> str2)
	{
		if (str2 == "end")
		{
			break;
		}
		vec2.push_back(str2);
	}
	for (auto iter = vec2.begin(); iter != vec2.end(); ++iter)
	{
		for (auto strIter = iter->begin(); strIter != iter->end(); ++strIter)
		{
			*strIter = toupper(*strIter);
		}
	}
	for (auto iter = vec2.begin(); iter != vec2.end(); ++iter)
	{
		cout << *iter << endl;
	}
}

//练习3-20 读入一组整数存入vector对象中，输出相邻两个数的和，和收尾对称两个数的和
void chapter03_trainning_3_20()
{
	vector<int> vec;
	int value;
	while (cin >> value)
	{
		vec.push_back(value);
	}

	cout << "相邻整数加==== 下标实现:" << endl;
	for (decltype(vec.size()) i = 1; i < vec.size(); ++i)
	{
		cout << "vec[" << i - 1 << "] + vec[" << i << "] = " << vec[i - 1] << " + " << vec[i] << " = " << vec[i - 1] + vec[i] << endl;
	}

	//迭代器实现
	cout << "相邻整数加==== 迭代器实现:" << endl;
	for (auto iter = vec.begin() + 1; iter != vec.end(); ++iter)
	{
		cout << *iter << " + " << *(iter - 1) << " = " << *(iter - 1) + *iter << endl;
	}
	//下标实现
	cout << "首尾对称加==== 下标实现:" << endl;
	for (decltype(vec.size()) i = 0; i < vec.size() / 2; ++i)
	{
		cout << "vec[" << i << "] + vec[" << vec.size() - 1 - i << "] = " << vec[i] << " + " << vec[vec.size() - 1 - i] << " = " << vec[i] + vec[vec.size() - 1 - i] << endl;
	}
	//迭代器实现
	cout << "首尾对称加==== 迭代器实现:" << endl;
	for (auto iter = vec.begin(); iter != vec.begin() + (vec.end() - vec.begin()) / 2; ++iter)
	{
		cout << *iter << " + " << *(vec.end() - 1 - (iter - vec.begin())) << " = " << *(vec.end() - 1 - (iter - vec.begin())) + *iter << endl;
	}


	string a;
	cin >> a;
}

//练习3-22 创建含有10个整数的vector对象，使用迭代器将所有数变为原来的两倍，输出
void chapter03_trainning_3_22()
{
	vector<int> vec = { 8, 10, 5, 32, 1, 35, 11, 88, 0, -4 };
	cout << "init vector data is :" << endl;
	for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter)
	{
		cout << *iter << " ";
	}
	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		*iter *= 2;
	}
	cout << endl << "after *2 vector data is :" << endl;
	for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter)
	{
		cout << *iter << " ";
	}

	auto iterBegin = vec.begin();
	auto iterEnd = vec.end();

	cout << endl;
}

//练习3-25 使用迭代器计算分段成绩
void chapter03_trainning_3_25()
{
	vector<int> vec = {42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93};
	vector<int> total(11, 0);
	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		int index = (*iter) / 10;
		*(total.begin() + index) += 1;
	}
	for (auto iter = total.cbegin(); iter != total.cend(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

}