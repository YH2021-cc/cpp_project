//
// Created by 北极星 on 2023/1/28.
//
#include <iostream>

using namespace std;
class MyInteger {

    friend ostream& operator<<(ostream& out, MyInteger myint);

public:
    MyInteger() {
        m_Num = 0;
        sum=0;
    }
    //前置++,能使用前置就使用前置
    MyInteger& operator++() {
        //先++
        m_Num++;
        sum++;
        //再返回
        return *this;
    }

    //后置++
    MyInteger operator++(int) {
        //先返回
        MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
        m_Num++;
        sum++;
        return temp;
    }

private:
    int m_Num;
    int sum;
};


ostream& operator<<(ostream& out, MyInteger myint) {
    out << myint.m_Num<<myint.sum;
    return out;
}


//前置++ 先++ 再返回
void test01() {
    MyInteger myInt;
    cout << ++myInt << endl;
    cout << myInt << endl;
}

//后置++ 先返回 再++
void test02() {

    MyInteger myInt;
    cout << myInt++ << endl;
    cout << myInt << endl;
}

int main() {

    test01();
    //test02();



    return 0;
}