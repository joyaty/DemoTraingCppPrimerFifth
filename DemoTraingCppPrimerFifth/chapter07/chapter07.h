#include<iostream>
#include<string>

#pragma once

using namespace std;

class ClassA
{
public:
	//ClassA();

	ClassA(string str = "")
	{
		cout << "this is string constructor" << endl;
	}

	ClassA(istream& in = cin)
	{
		cout << "this is istream constructor" << endl;
	}

	~ClassA()
	{
	}

private:

};

//��ϰ7-39�����������������ع��캯�����ṩ��Ĭ��ʵ�Σ�������Ϊ�Ϸ���
void chapter07_trainning_7_39();

