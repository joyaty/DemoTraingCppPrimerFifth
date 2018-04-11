#include "chapter07.h"


class ClassA;

//练习7-9，添加Person类读入成员函数和打印成员函数
void chapter07_trainning_7_9()
{
	Person person;
	person.print(cout) << endl;

	person.read(cin);

	string extString;
	cin >> extString;

	person.print(cout) << ", extString = " << extString << endl;
}

//练习7.27，打印测试定义的Screen是否正确
void chapter07_trainning_7_27()
{
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
}


//练习7-39，两个单参数的重载构造函数都提供了默认实参，这种行为合法吗？
void chapter07_trainning_7_39()
{
	//ClassA a = ClassA();

	ClassA b = ClassA("abc");

	ClassA c = ClassA(cin);
}