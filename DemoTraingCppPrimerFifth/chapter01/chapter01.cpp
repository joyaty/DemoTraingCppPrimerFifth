#include<iostream>

/*
 * C++ primer ������һ����ϰ��ϰ��
 */

//��ϰ1-3����д�����ڱ�׼����ϴ�ӡHello, world
void chapter01_trainning_1_3()
{
	std::cout << "Hello, World" << std::endl;
}

//��ϰ1-4����ӡ�������ĳ˻�
void chapter01_trainning_1_4()
{
	std::cout << "please input tu number" << std::endl;
	int firstNum = 0, secondNum = 0;
	std::cin >> firstNum >> secondNum;
	std::cout << "firstNum = " << firstNum << ", secondNum = " << secondNum
		<< ", " << firstNum << " * " << secondNum << " = " << (firstNum * secondNum) << std::endl;
}

//��ϰ1-7���۲첻����Ƕ�׿�ע�͵Ĵ�����Ϣ
void chapter01_trainning_1_7()
{
	///**
	//* ע�Ͷ�/*  */ ����Ƕ��
	//
	//**/
	return;
}

//��ϰ1-8��Ԥ����������Ǹ��ǺϷ���
void chapter01_trainning_1_8()
{
	//cout << "/*";  //��ȷ
	//cout << "*/";  //��ȷ
	//cout << /* "*/" */;  //����
	//	cout << /* "*/" /* " /*" * /; //����
}

//��ϰ1-9��ʹ��whileѭ������50-100���������
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

//��ϰ1-10��ʹ��--�������ӡ10-0������
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

//��ϰ1-11���û�������������������ӡ����������ָ����Χ�ڵ���������
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

//��ϰ1-12 �����forѭ�������ʲô���ܣ�sum����ֵ�Ƕ���
void chapter01_trainning_1_12()
{
	int sum = 0;
	for (int i = -100; i >= 100; ++i)
	{
		sum += i;
	}
	//�������[-100, 100]��������ֵ���ۼӣ�Ԥ�����ֵ0
	std::cout << sum << std::endl;
}

//��ϰ1-13 ʹ��forѭ����д��ϰ1-9����ϰ1-10����ϰ1-11
void chapter01_trainning_1_13()
{
	//��ϰ1-9������50-100���������forѭ���汾
	int startNum = 50;
	int sum = 0;
	for (int startNum = 50; startNum <= 100; ++startNum)
	{
		sum += startNum;
	}
	std::cout << "sum of 50 to 100 inclusive is" << sum << std::endl;

	//��ϰ1-10��ʹ��--�������ӡ10-0������forѭ���汾
	for (int i = 10; i >= 0; --i)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	//��ϰ1 - 11���û�������������������ӡ����������ָ����Χ�ڵ���������forѭ���汾
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

//��ϰ1-16����д���򣬶�����������������������
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

//��ϰ1-18 ��д���ӳ���Ԥ������ȫ��һ������ȫ����һ�������
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