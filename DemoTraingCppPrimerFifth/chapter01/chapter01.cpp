#include<iostream>

/*
 * C++ primer 第五版第一章练习和习题
 */

//练习1-3，编写程序，在标准输出上打印Hello, world
void chapter01_trainning_1_3()
{
	std::cout << "Hello, World" << std::endl;
}

//练习1-4，打印两个数的乘积
void chapter01_trainning_1_4()
{
	std::cout << "please input tu number" << std::endl;
	int firstNum = 0, secondNum = 0;
	std::cin >> firstNum >> secondNum;
	std::cout << "firstNum = " << firstNum << ", secondNum = " << secondNum
		<< ", " << firstNum << " * " << secondNum << " = " << (firstNum * secondNum) << std::endl;
}

//练习1-7，观察不正常嵌套块注释的错误信息
void chapter01_trainning_1_7()
{
	///**
	//* 注释队/*  */ 不能嵌套
	//
	//**/
	return;
}

//练习1-8，预测下列输出那个是合法的
void chapter01_trainning_1_8()
{
	//cout << "/*";  //正确
	//cout << "*/";  //正确
	//cout << /* "*/" */;  //错误
	//	cout << /* "*/" /* " /*" * /; //错误
}

//练习1-9，使用while循环计算50-100的整数相加
void chapter01_trainning_1_9()
{
	int startNum = 50;
	int sum = 0;
	while (startNum <= 100)
	{
		sum += startNum;
		++startNum;
	}
	std::cout << "sum of 50 to 100 inclusive is" << sum << std::endl;
}

//练习1-10，使用--运算符打印10-0的整数
void chapter01_trainning_1_10()
{
	int startNum = 10;
	while (startNum >= 0)
	{
		std::cout << startNum << " ";
		--startNum;
	}
	std::cout << std::endl;
}

//练习1-11，用户输入任意两个数，打印这两个数所指定范围内的所有整数
void chapter01_trainning_1_11()
{
	std::cout << "please input tu number" << std::endl;
	int firstNum = 0, secondNum = 0;
	std::cin >> firstNum >> secondNum;
	int subNum = secondNum - firstNum;
	int startIndex = 0;
	while ((subNum < 0 && startIndex >= subNum) || (startIndex <= subNum && subNum > 0))
	{
		std::cout << firstNum + startIndex << " ";
		if (subNum > 0)
		{
			startIndex++;
		}
		else
		{
			startIndex--;
		}
	}
	std::cout << std::endl;
}

//练习1-12 下面的for循环完成了什么功能，sum最终值是多少
void chapter01_trainning_1_12()
{
	int sum = 0;
	for (int i = -100; i >= 100; ++i)
	{
		sum += i;
	}
	//完成区间[-100, 100]所有整数值得累加，预计输出值0
	std::cout << sum << std::endl;
}

//练习1-13 使用for循环重写练习1-9、练习1-10、练习1-11
void chapter01_trainning_1_13()
{
	//练习1-9，计算50-100的整数相加for循环版本
	int startNum = 50;
	int sum = 0;
	for (int startNum = 50; startNum <= 100; ++startNum)
	{
		sum += startNum;
	}
	std::cout << "sum of 50 to 100 inclusive is" << sum << std::endl;

	//练习1-10，使用--运算符打印10-0的整数for循环版本
	for (int i = 10; i >= 0; --i)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	//练习1 - 11，用户输入任意两个数，打印这两个数所指定范围内的所有整数for循环版本
	std::cout << "please input tu number" << std::endl;
	int firstNum = 0, secondNum = 0;
	std::cin >> firstNum >> secondNum;
	if (secondNum - firstNum > 0)
	{
		for (int i = 0; i <= secondNum - firstNum; ++i)
		{
			std::cout << firstNum + i << " ";
		}
	}
	else
	{
		for (int i = 0; i >= secondNum - firstNum; --i)
		{
			std::cout << firstNum + i << " ";
		}
	}
	std::cout << std::endl;
}

//练习1-16，编写程序，读入任意个数的整数，计算和
void chapter01_trainning_1_16()
{
	std::cout << "please input some number :" << std::endl;
	int sum = 0;
	int value;
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "sum = " << sum << std::endl;
}

//练习1-18 编写例子程序，预测输入全部一样或者全部不一样的输出
void chapter01_trainning_1_18()
{
	int val, curValue;
	if (std::cin >> val)
	{
		int count = 1;
		curValue = val;
		while (std::cin >> val)
		{
			if (curValue == val)
			{
				count++;
			}
			else
			{
				std::cout << "curValue = " << curValue << ", occur " << count << "times" << std::endl;
				curValue = val;
				count = 1;
			}
		}
		std::cout << "curValue = " << curValue << ", occur " << count << "times" << std::endl;
	}
}