#include<iostream>
#include<string>
#include<vector>

using namespace std;


//练习5-10 5-11 改写统计元音字符例子switch
void chapter05_trainning_5_10()
{
	string str;
	cout << "please input a string:" << endl;
	getline(cin, str);
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	int spaceCnt = 0, tableCnt = 0, newLineCnt = 0;
	for (const char c : str)
	{
		switch (c)
		{
			//练习5-10 统计a e i o u五个元音字符数量
			case 'a': case 'A':
				++aCnt;
				break;
			case 'e': case 'E':
				++eCnt;
				break;
			case 'i': case 'I':
				++iCnt;
				break;
			case 'o': case 'O':
				++oCnt;
				break;
			case 'u': case 'U':
				++uCnt;
				break;

			//练习5-11 统计空格、制表符、换行符数量
			case ' ':
				++spaceCnt;
				break;
			case '\t':
				++tableCnt;
				break;
			case '\n':
				++newLineCnt;
				break;
			default:
				break;
		}
	}
	//练习5-10 统计a e i o u五个元音字符数量
	cout << "aCnt = " << aCnt << ", eCnt = " << eCnt << ", iCnt = " << iCnt << ", oCnt = " << oCnt << ", uCnt = " << uCnt << endl;
	//练习5-11 统计空格、制表符、换行符数量
	cout << "spaceCnt = " << spaceCnt << ", tableCnt = " << tableCnt << ", newLineCnt = " << newLineCnt << endl;
}

//练习5-12 统计含有两个字符的字符序列数量，ff、fl、fi
void chapter05_trainning_5_12()
{
	vector<string> vec;
	string tempStr;
	while (cin >> tempStr && tempStr != "end")
	{
		vec.push_back(tempStr);
	}
	int ffCnt = 0, flCnt = 0, fiCnt = 0;
	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		for (auto sIter = (iter->begin() + 1); sIter != iter->end(); ++sIter)
		{
			char curChar = *sIter;
			char lastChar = *(sIter - 1);
			switch (lastChar)
			{
			case 'f':
			{
						if (curChar == 'f')
						{
							++ffCnt;
						}
						else if (curChar == 'l')
						{
							++flCnt;
						}
						else if (curChar == 'i')
						{
							++fiCnt;
						}
			}
				break;
			default:
				break;
			}
		}
	}

	cout << "ffCnt = " << ffCnt << ", flCnt = " << flCnt << ", fiCnt = " << fiCnt << endl;
}

//练习5-13 验证下列语句的合法性
void chapter05_trainning_5_13()
{
	//1.0
	//unsigned eventCnt = 0, oddCnt = 0;
	//int digit = 0;
	//cin >> digit;
	//switch (digit)
	//{
	//case 1, 3, 5, 7, 9://case标签后必须是常量表达式，不可是逗号表达式
	//	break;
	//default:
	//	break;
	//}

	//2.0
	//unsigned ival = 512, jval = 1024, kval = 4096;
	//unsigned bufSize;
	//unsigned swt = ival;
	//switch (swt)
	//{
	//case ival://case标签后必须是常量表达式
	//	break;
	//case jval:
	//	break;
	//case kval:
	//	break;
	//default:
	//	break;
	//}
}

//练习5-17 检查两个vector是否一个是另一个的前缀
void chapter05_trainning_5_17()
{
	vector<int> vec1 = {0, 1, 1, 2, 3 ,5, 8};
	vector<int> vec2 = {0, 1, 1, 2};

	vector<int>::iterator vecSmallBegin;
	vector<int>::iterator vecSmallEnd;
	vector<int>::iterator vecLarge;
	if (vec1.size() < vec2.size())
	{
		vecSmallBegin = vec1.begin();
		vecSmallEnd = vec1.end();
		vecLarge = vec2.begin();
	}
	else
	{
		vecLarge = vec1.begin();
		vecSmallBegin = vec2.begin();
		vecSmallEnd = vec2.end();
	}
	bool isPrefix = true;
	for (; vecSmallBegin != vecSmallEnd; ++vecSmallBegin, ++vecLarge)
	{
		if (*vecSmallBegin != *vecLarge)
		{
			isPrefix = false;
			break;
		}
	}

	cout << "vec1 is vec2 prefix vector, or vec2 is vec1 prefix vector ? the answer is ---> " << isPrefix << endl;
}

//练习5-20 检查两个vector是否一个是另一个的前缀
void chapter05_trainning_5_20()
{
	string str1;
	cin >> str1;
	string str2;
	while (cin >> str2 && !str2.empty())
	{
		if (str2 == str1)
		{
			break;
		}
		else
		{
			str1 = str2;
			str2 = "";
		}
	}
	if (str1 == str2)
	{
		cout << "find same str, str = " << str1 << endl;
	}
	else
	{
		cout << "not found same str!" << endl;
	}
}