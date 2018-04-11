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

class Person
{
public:

	Person()
		:_name("")
		, _address("")
	{
	}

	Person(string name, string address)
		:_name(name)
		, _address(address)
	{
	}

	const string& getName() const
	{
		return _name;
	}

	const string& getAddress() const
	{
		return _address;
	}

	//练习7.9 添加person的读取成员函数
	istream& read(istream& in)
	{
		cin >> _name >> _address;
		return in;
	}

	//练习7.9 天机Person的打印成员函数
	ostream& print(ostream& out) const
	{
		out << "name = " << _name << ", address = " << _address;
		return out;
	}

private:
	string _name;
	string _address;
};


class Screen
{
public:
	//声明pos为std::string::size_type别名
	typedef std::string::size_type pos;
	//使用默认构造函数
	Screen() = default;
	//使用构造函数初始化屏幕宽高
	Screen(const pos width, const pos height)
		: _width(width)
		, _height(height)
		, _content("")
	{
	}
	//使用构造函数初始化屏幕宽高和初始字符串
	Screen(const pos width, const pos height, char c)
		: _width(width)
		, _height(height)
		, _content(string(width * height, c))
	{
	}
	//设置屏幕尺寸
	Screen& setSize(const pos width = -1, const pos height = -1)
	{
		_width = (width > 0 ? width : _width);
		_height = (height > 0 ? height : _height);
		return *this;
	}
	//移动光标
	inline Screen& move(const pos row, const pos col);
	//获取光标位置的字符
	char getContent() const
	{
		return _content[_cursor];
	}
	//获取指定位置的字符
	inline char getContent(const pos row, const pos col) const;
	//设置光标位置字符
	inline Screen& set(char c);
	//设置指定行列位置字符
	inline Screen& set(const pos row, const pos col, char c);
	//打印字符串-普通版
	Screen& display(ostream& out)
	{
		doDisplay(out);
		out << "this is normal version ";
		return *this;
	}
	//打印字符串-访问版
	const Screen& display(ostream& out) const
	{
		doDisplay(out);
		out << "this is const version ";
		return *this;
	}
private:
	inline void doDisplay(ostream& out) const;
	pos _width = 0;
	pos _height = 0;
	pos _cursor = 0;
	string _content;
};

//获取指定位置的字符
inline char Screen::getContent(const pos row, const pos col) const
{
	return _content[_width * row + col];
}

//移动光标
inline Screen& Screen::move(const pos row, const pos col)
{
	_cursor = _width * row + col;
	return *this;
}

//设置光标位置字符
inline Screen& Screen::set(char c)
{
	_content[_cursor] = c;
	return *this;
}

//设置指定行列位置字符
inline Screen& Screen::set(const pos row, const pos col, char c)
{
	_content[row * _width + col] = c;
	return *this;
}

//打印字符串
inline void Screen::doDisplay(ostream& out) const
{
	out << _content;
}










//练习7-9，添加Person类读入成员函数和打印成员函数
void chapter07_trainning_7_9();

//练习7.27，打印测试定义的Screen是否正确
void chapter07_trainning_7_27();

//练习7-39，两个单参数的重载构造函数都提供了默认实参，这种行为合法吗？
void chapter07_trainning_7_39();

