#include<iostream>
#include<vector>
#include<string>

using namespace std;

//��ϰ4-13 ��ֵ��������ҽ���ɲ���
void chapter04_trainning_4_13()
{
	int i;
	double d;
	d = i = 3.5;
	cout << "d = " << d << ", i = " << i << endl;//Ԥ��d = 3.0, i = 3
	i = d = 3.5;
	cout << "d = " << d << ", i = " << i << endl;//Ԥ��d = 3.5, i = 3
}

//��ϰ4-20 ���б��ʽ�Ƿ�Ϸ�
void chapter04_trainning_4_20()
{
	vector<string> vec = { "abc", "dev" };
	vector<string>::iterator iter = vec.begin();

	*iter++;//�Ϸ���������iter����һλ���ҽ���ʼֵ������

	//(*iter)++;//����string���͵�++���ò���û�ж���

	//*iter.empty();//���󣬽�������������ȼ��ȳ�Ա���ʷ�Ҫ�͡��ȼ��� iter.empty(),iter�ǵ��������ͣ�û��empty��Ա����

	iter->empty();//�Ϸ�����������ʹ�� -> ��Ա���ʷ����ʳ�Ա������

	//++*iter;//����string���͵�++ǰ�ò���û�ж���

	iter++->empty();//�Ϸ����൱��iter->empty(), iter++
}

//��ϰ4-21 ʹ������������ҳ��������������� * 2
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

//��ϰ4-28 �����������������ռ�ռ�Ĵ�С
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
	//cout << "sizeof(void) = " << sizeof(void) << endl;//void������sizeof

	//��ϰ4-29 Ԥ�����н��
	int x[10];
	int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;//Ԥ�� sizeof(x) = 4 * 10, sizeof(*x) = 4���� = 10
	cout << sizeof(p) / sizeof(*p) << endl;//Ԥ�� sizeof(p) = 4, sizeof(*p) = 4, �� = 1
}

//��ϰ4-28 ʹ�ú��õ����������д
void chapter04_trainning_4_31()
{
	//����
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

	//�����������д
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