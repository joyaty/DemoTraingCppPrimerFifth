

//练习6-7 定义一个函数可以统计该函数的调用次数
void chapter06_trainning_6_7();

//练习6-10 定义一个指针形参，交换两个值
void chapter06_trainning_6_10();

//练习6-17 编写一个函数，判断string对象是否有大写字母
//再写一个函数，将string对象改写为小写
void chapter06_trainning_6_17();

//练习6-27 编写一个函数，结算类别中所有值的和
void chapter06_trainning_6_27();


////练习6-36 编写一个函数声明，使其返回数组的引用并且该数组包含10个string对象
//std::string(& chapter06_trainning_6_36(int i))[10];
//
////练习6-37 使用decltype关键字，位置返回类型，类型别名改写6-36
////类型别名 str为 10个string的数组别名
//typedef std::string (&str)[10];
//str chapter06_trainning_6_37_1(int i);
//
////使用尾置返回类型(C++11新标准)
//auto chapter06_trainning_6_37_2(int i)->std::string(&)[10];
//
////使用decltype关键字
//std::string arrayStrs[10];
//decltype((arrayStrs)) chapter06_trainning_6_37_3(int i);//(arrayStrs)被视为一个表达式，decltype(表达式)返回引用类型。
//
////练习6-55，编写四个函数，分别对两个int进行+、-、*、/运算，结果返回int，并保存四个指向该函数的函数指针到vector中，然后使用函数指针计算
//void chapter06_trainning_6_55();
