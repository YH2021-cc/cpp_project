//c++ת��������

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
    double s=static_cast<double>(a);       //���ڻ�����������֮���ת��,�ѿ�ָ��ת����Ŀ�����͵Ŀ�ָ��,���κ����͵ı��ʽת����void����,��int������ת����const int������
    son* s2=new son;
    father* f2=static_cast<father*>(s2);   //���������ָ�������ת���ɻ����ʾ(��ȫ,����ת��)
    delete s2;
    delete f2;
    std::cout<<s<<std::endl;

    const int sun=10;
    std::cout<<*const_cast<int*>(&sun)+1;  //����ȥ��ָ�루�����ã���const���ԣ��ٽ��м���޸�,ֻ�ܽ�const typeת��Ϊtype����const type&ת��Ϊtype&

    father* f=new son;
    son* s3=dynamic_cast<son*>(f);   //dynamic_cast��Ҫ�������μ������ת��������ת��(������Ҫ���麯��)��������������֮��Ľ���ת����cross cast��
    delete f;
    delete s3;

    return 0;
}
