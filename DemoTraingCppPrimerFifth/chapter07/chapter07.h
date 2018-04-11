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

	//��ϰ7.9 ���person�Ķ�ȡ��Ա����
	istream& read(istream& in)
	{
		cin >> _name >> _address;
		return in;
	}

	//��ϰ7.9 ���Person�Ĵ�ӡ��Ա����
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
	//����posΪstd::string::size_type����
	typedef std::string::size_type pos;
	//ʹ��Ĭ�Ϲ��캯��
	Screen() = default;
	//ʹ�ù��캯����ʼ����Ļ���
	Screen(const pos width, const pos height)
		: _width(width)
		, _height(height)
		, _content("")
	{
	}
	//ʹ�ù��캯����ʼ����Ļ��ߺͳ�ʼ�ַ���
	Screen(const pos width, const pos height, char c)
		: _width(width)
		, _height(height)
		, _content(string(width * height, c))
	{
	}
	//������Ļ�ߴ�
	Screen& setSize(const pos width = -1, const pos height = -1)
	{
		_width = (width > 0 ? width : _width);
		_height = (height > 0 ? height : _height);
		return *this;
	}
	//�ƶ����
	inline Screen& move(const pos row, const pos col);
	//��ȡ���λ�õ��ַ�
	char getContent() const
	{
		return _content[_cursor];
	}
	//��ȡָ��λ�õ��ַ�
	inline char getContent(const pos row, const pos col) const;
	//���ù��λ���ַ�
	inline Screen& set(char c);
	//����ָ������λ���ַ�
	inline Screen& set(const pos row, const pos col, char c);
	//��ӡ�ַ���-��ͨ��
	Screen& display(ostream& out)
	{
		doDisplay(out);
		out << "this is normal version ";
		return *this;
	}
	//��ӡ�ַ���-���ʰ�
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

//��ȡָ��λ�õ��ַ�
inline char Screen::getContent(const pos row, const pos col) const
{
	return _content[_width * row + col];
}

//�ƶ����
inline Screen& Screen::move(const pos row, const pos col)
{
	_cursor = _width * row + col;
	return *this;
}

//���ù��λ���ַ�
inline Screen& Screen::set(char c)
{
	_content[_cursor] = c;
	return *this;
}

//����ָ������λ���ַ�
inline Screen& Screen::set(const pos row, const pos col, char c)
{
	_content[row * _width + col] = c;
	return *this;
}

//��ӡ�ַ���
inline void Screen::doDisplay(ostream& out) const
{
	out << _content;
}










//��ϰ7-9�����Person������Ա�����ʹ�ӡ��Ա����
void chapter07_trainning_7_9();

//��ϰ7.27����ӡ���Զ����Screen�Ƿ���ȷ
void chapter07_trainning_7_27();

//��ϰ7-39�����������������ع��캯�����ṩ��Ĭ��ʵ�Σ�������Ϊ�Ϸ���
void chapter07_trainning_7_39();

