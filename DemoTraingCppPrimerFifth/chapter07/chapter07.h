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

//练习7-39，两个单参数的重载构造函数都提供了默认实参，这种行为合法吗？
void chapter07_trainning_7_39();

