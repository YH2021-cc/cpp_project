//
// Created by ������ on 2023/1/28.
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
    //ǰ��++,��ʹ��ǰ�þ�ʹ��ǰ��
    MyInteger& operator++() {
        //��++
        m_Num++;
        sum++;
        //�ٷ���
        return *this;
    }

    //����++
    MyInteger operator++(int) {
        //�ȷ���
        MyInteger temp = *this; //��¼��ǰ�����ֵ��Ȼ���ñ����ֵ��1�����Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++��
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


//ǰ��++ ��++ �ٷ���
void test01() {
    MyInteger myInt;
    cout << ++myInt << endl;
    cout << myInt << endl;
}

//����++ �ȷ��� ��++
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