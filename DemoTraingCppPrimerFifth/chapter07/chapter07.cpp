#include "chapter07.h"


class ClassA;

//��ϰ7-9�����Person������Ա�����ʹ�ӡ��Ա����
void chapter07_trainning_7_9()
{
	Person person;
	person.print(cout) << endl;

	person.read(cin);

	string extString;
	cin >> extString;

	person.print(cout) << ", extString = " << extString << endl;
}

//��ϰ7.27����ӡ���Զ����Screen�Ƿ���ȷ
void chapter07_trainning_7_27()
{
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
}


//��ϰ7-39�����������������ع��캯�����ṩ��Ĭ��ʵ�Σ�������Ϊ�Ϸ���
void chapter07_trainning_7_39()
{
	//ClassA a = ClassA();

	ClassA b = ClassA("abc");

	ClassA c = ClassA(cin);
}