#include<string>
#include<iostream>
#include<vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::vector;

//��ϰ3-2 �ֱ�ʹ��getline��>>��������ȡһ�к�һ����
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

//��ϰ3-4 ���������ַ������Ƚ��Ƿ���Ȳ���������������������ַ�����Ȼ��Ƚ������ַ����ĳ��ȣ�������ȴ���ַ���
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

//��ϰ3-5 ����n���ַ��������ƴ�ӵĳ��ַ����Ϳո������ַ���
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

//��ϰ3-6 ʹ�÷�Χfor���ַ����������ַ���X���
void chapter03_trainning_3_6()
{
	string testStr = "askdfwr451sfa, wefs";

	//��Χfor�汾
	for (auto &c : testStr)
	{
		c = 'X';
	}
	cout << "new testStr = " << testStr << endl;

	//��ͳforѭ���汾
	testStr = "askdfwr451sfa, wefs";
	cout << "restore testStr = " << testStr << endl;
	for (decltype(testStr.size()) i = 0; i < testStr.size(); ++i)
	{
		testStr[i] = 'X';
	}
	cout << "new testStr = " << testStr << endl;

	//whileѭ���汾
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

//����һ���б����ŵ��ַ�������ȥ���еı����ţ����ʣ�ಿ��
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


//��ϰ3-16 �������ӵ�vector����Ԥ��ֵ������������Ƿ���ȷ
void chapter03_trainning_3_16()
{
	vector<int> vec1; //Ԥ��0��Ԫ��
	cout << "a. vec1.size() = " << vec1.size() << endl;

	vector<int> vec2(10); //Ԥ��10��intԪ�أ�ÿ��Ԫ��Ϊ0
	cout << "b. vec2.size() = " << vec2.size() << ", vec2[2] = " << vec2[2] << endl;

	vector<int> vec3(10, 42);//Ԥ��10��intԪ�أ�ÿ��Ԫ��Ϊ42
	cout << "c. vec3.size() = " << vec3.size() << ", vec3[3] = " << vec3[3] << endl;

	vector<int> vec4{10};//Ԥ��1��intԪ�أ�Ԫ��Ϊ10
	cout << "d. vec4.size() = " << vec4.size() << ", vec4[0] = " << vec4[0] << endl;

	vector<int> vec5{ 10, 42 };//Ԥ��2��intԪ�أ�Ԫ��Ϊ10, 42
	cout << "e. vec5.size() = " << vec5.size() << ", vec5[0] = " << vec5[0] << ", vec5[1] = " << vec5[1] << endl;

	vector<string> vec6{ 10 };//Ԥ��10��stringԪ�أ�Ԫ��Ϊ""
	cout << "f. vec6.size() = " << vec6.size() << ", vec6[9] = " << vec6[9] << endl;

	vector<string> vec7{ 10, "hi" };//Ԥ��10��stringԪ�أ�Ԫ��Ϊ"hi"
	cout << "g. vec7.size() = " << vec7.size() << ", vec7[6] = " << vec7[6] << endl;
}

//��ϰ3-17 ����һ��ʴ���vector�����У�ȫ����ת��Ϊ��д������ı��Ĵʣ�ÿ����һ��
void chapter03_trainning_3_17()
{
	cout << "ʹ�÷�Χfor����ʵ��" << endl;
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

	//ʹ�õ�����ʵ��
	cout << "ʹ�õ�����ʵ��" << endl;
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

//��ϰ3-20 ����һ����������vector�����У���������������ĺͣ�����β�Գ��������ĺ�
void chapter03_trainning_3_20()
{
	vector<int> vec;
	int value;
	while (cin >> value)
	{
		vec.push_back(value);
	}

	cout << "����������==== �±�ʵ��:" << endl;
	for (decltype(vec.size()) i = 1; i < vec.size(); ++i)
	{
		cout << "vec[" << i - 1 << "] + vec[" << i << "] = " << vec[i - 1] << " + " << vec[i] << " = " << vec[i - 1] + vec[i] << endl;
	}

	//������ʵ��
	cout << "����������==== ������ʵ��:" << endl;
	for (auto iter = vec.begin() + 1; iter != vec.end(); ++iter)
	{
		cout << *iter << " + " << *(iter - 1) << " = " << *(iter - 1) + *iter << endl;
	}
	//�±�ʵ��
	cout << "��β�ԳƼ�==== �±�ʵ��:" << endl;
	for (decltype(vec.size()) i = 0; i < vec.size() / 2; ++i)
	{
		cout << "vec[" << i << "] + vec[" << vec.size() - 1 - i << "] = " << vec[i] << " + " << vec[vec.size() - 1 - i] << " = " << vec[i] + vec[vec.size() - 1 - i] << endl;
	}
	//������ʵ��
	cout << "��β�ԳƼ�==== ������ʵ��:" << endl;
	for (auto iter = vec.begin(); iter != vec.begin() + (vec.end() - vec.begin()) / 2; ++iter)
	{
		cout << *iter << " + " << *(vec.end() - 1 - (iter - vec.begin())) << " = " << *(vec.end() - 1 - (iter - vec.begin())) + *iter << endl;
	}


	string a;
	cin >> a;
}

//��ϰ3-22 ��������10��������vector����ʹ�õ���������������Ϊԭ�������������
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

//��ϰ3-25 ʹ�õ���������ֶγɼ�
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