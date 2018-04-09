#include "chapter07.h"

class ClassA;


//练习7-39，两个单参数的重载构造函数都提供了默认实参，这种行为合法吗？
void chapter07_trainning_7_39()
{
	//ClassA a = ClassA();

	ClassA b = ClassA("abc");

	ClassA c = ClassA(cin);
}