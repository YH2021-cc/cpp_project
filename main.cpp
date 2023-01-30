//c++转换操作符

#include <iostream>

class father
{
public:
    int num;
    virtual void fo();

};

void father::fo() {

    std::cout<<"haha"<<std::endl;
}

class son:public father
{
public:
    int name;
};
void update(son* s)
{
    std::cout<<"1"<<std::endl;
}
int main() {
    int a=1;
    double s=static_cast<double>(a);       //用于基本数据类型之间的转换,把空指针转换成目标类型的空指针,把任何类型的表达式转换成void类型,将int型数据转换成const int型数据
    son* s2=new son;
    father* f2=static_cast<father*>(s2);   //把派生类的指针或引用转换成基类表示(安全,上行转换)
    delete s2;
    delete f2;
    std::cout<<s<<std::endl;

    const int sun=10;
    std::cout<<*const_cast<int*>(&sun)+1;  //用于去除指针（或引用）的const属性，再进行间接修改,只能将const type转换为type，将const type&转换为type&

    father* f=new son;
    son* s3=dynamic_cast<son*>(f);   //dynamic_cast主要用于类层次间的上行转换和下行转换(父类中要有虚函数)，还可以用于类之间的交叉转换（cross cast）
    delete f;
    delete s3;

    return 0;
}
