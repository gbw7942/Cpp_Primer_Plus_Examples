#include <iostream>
int main()
{
    using namespace std;
    int chest=42;
    int waist=0x42;
    int inseam=042;
    cout<<chest<<endl;
    cout<<waist<<endl;
    cout<<inseam<<endl;

    //第一位为1-9，则基数为10
    //第一位为0，第二位为1-8，则基数为8
    //前两位为0x，则基数为16

    return 0;
}