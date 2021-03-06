/**
* C语言中一般用字符数组char str[]来存放字符串
* C++在STL中加入了string类型
**/
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;


//string的定义
string str;
string str = "abcd";


//string中内容的访问
//(1)通过下标访问
{
    string str = "abcd";
    for (int i = 0; i < str.length(); i++)
        printf("%c", str[i]); //输出abcd
    return 0;
}
//如果要读入和输出整个字符串，则只能用cin和cout
{
    string str;
    cin >> str;
    cout << str;
    return 0;
}
//用printf输出string
{
    string str = "abcd";
    printf("%s\n", str.c_str()); //将string型str用c_str()变为字符数组
    return 0;
}
//(2)通过迭代器访问
{
    string str = "abcd";
    for (string::iterator it = str.begin(); it != str.end(); it++)
        printf("%c", *it);
    return 0;
}


//string常用函数实例解析
//operator+=
{
    string str1 = "abc", str2 = "xyz", str3;
    str3 = str1 + str2; //将str1和str2拼接，赋值给str3
    str1 += str2; //将str2直接拼接到str1上
    cout << str1 << endl;
    cout << str3 << endl;
    return 0;
}
//compare operator
{
    string str1 = "aa", str2 = "aaa", str3 = "abc", str4 = "xyz";
    if (str1 < str2)
        printf("ok1\n"); //如果str1字典序小于str2，输出ok1
    if (str1 != str3)
        printf("ok2\n"); //如果str1和str3不等，输出ok2
    if (str4 >= str3)
        printf("ok3\n"); //如果str4字典序大于等于str3，输出ok3
    return 0;
}
//length()/size()
{
    string str = "abcxyz";
    printf("%d %d", str.length(), str.size()); // 6 6
}
//insert()
//insert(pos,string)
{
    string str = "abcxyz", str2 = "opq";
    str.insert(3, str2); //往str[3]处插入opq，这里str2的位置直接写"opq"也是可以的
    cout << str << endl; //abcopqxyz
}
//insert(it,it2,it3)
{
    string str = "abcxyz", str2 = "opq"; //str是原字符串，str2是待插字符串
    //在str的3号位（即c和x之间）插入str2
    str.insert(str.begin() + 3, str2.begin(), str2.end());
    cout << str << endl; //abcopqxyz
    return 0;
}
//erase()
//删除单个元素
{
    string str = "abcdefg";
    str.erase(str.begin() + 4); //删除4号位（即e）
    cout << str << endl; //abcdfg
    return 0;
}
//删除一个区间内的所有元素
//erase(first,last)
{
    string str = "abcdefg";
    str.erase(str.begin() + 2, str.end() - 1); //删除[str.begin()+2,str.end()-1)内的元素，即cdef
    cout << str << endl; //abg
    return 0;
}
//erase(pos,length)
{
    string str = "abcdefg";
    str.erase(3, 2); //删除从3号位开始的2个字符，即de
    cout << str << endl; //abcfg
    return 0;
}
//clear()
{
    string str = "abcd";
    str.clear(); //清空字符串
    printf("%d\n", str.length()); // 0
    return 0;
}
//substr()
{
    string str = "Thank you for your smile.";
    cout << sub.substr(0, 5) << endl; // Thank
    cout << sub.substr(14, 4) << endl; // your
    cout << sub.substr(19, 5) << endl; // smile
    return 0;
}
//string::npos
{
    if (string::npos == -1)
        cout << "-1 is true." << endl;
    if (string::npos == 4294967295)
        cout << "4294967295 is also true." << endl;
    return 0;
}
//find()
{
    string str = "Thank you for your smile.";
    string str2 = "you";
    string str3 = "me";
    if (str.find(str2) != string::npos)
        cout << str.find(str2) << endl; // 6
    if (str.find(str2, 7) != string::npos)
        cout << str.find(str2, 7) << endl; // 14
    if (str.find(str3) != string::npos)
        cout << str.find(str3) << endl;
    else
        cout << "I know there is no position for me." << endl; // I know there is no position for me.
    return 0;
}
//replace()
{
    string str = "Maybe you will turn around.";
    string str2 = "will not";
    string str3 = "surely";
    cout << str.replace(10, 4, str2) << endl; // Maybe you will not turn around.
    cout << str.replace(str.begin(), str.begin() + 5, str3) << endl; // surely you will not turn around.
    return 0;
}
