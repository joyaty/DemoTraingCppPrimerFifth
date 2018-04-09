#include<iostream>
#include<string>
#include<vector>

using namespace std;


//��ϰ5-10 5-11 ��дͳ��Ԫ���ַ�����switch
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
			//��ϰ5-10 ͳ��a e i o u���Ԫ���ַ�����
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

			//��ϰ5-11 ͳ�ƿո��Ʊ�������з�����
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
	//��ϰ5-10 ͳ��a e i o u���Ԫ���ַ�����
	cout << "aCnt = " << aCnt << ", eCnt = " << eCnt << ", iCnt = " << iCnt << ", oCnt = " << oCnt << ", uCnt = " << uCnt << endl;
	//��ϰ5-11 ͳ�ƿո��Ʊ�������з�����
	cout << "spaceCnt = " << spaceCnt << ", tableCnt = " << tableCnt << ", newLineCnt = " << newLineCnt << endl;
}

//��ϰ5-12 ͳ�ƺ��������ַ����ַ�����������ff��fl��fi
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

//��ϰ5-13 ��֤�������ĺϷ���
void chapter05_trainning_5_13()
{
	//1.0
	//unsigned eventCnt = 0, oddCnt = 0;
	//int digit = 0;
	//cin >> digit;
	//switch (digit)
	//{
	//case 1, 3, 5, 7, 9://case��ǩ������ǳ������ʽ�������Ƕ��ű��ʽ
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
	//case ival://case��ǩ������ǳ������ʽ
	//	break;
	//case jval:
	//	break;
	//case kval:
	//	break;
	//default:
	//	break;
	//}
}

//��ϰ5-17 �������vector�Ƿ�һ������һ����ǰ׺
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

//��ϰ5-20 �������vector�Ƿ�һ������һ����ǰ׺
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