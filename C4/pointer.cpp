# include <iostream>
int main()
{
    using namespace std;
    int updates=6;
    int *p_updates;
    p_updates=&updates;

    //express values in two ways
    cout<<updates<<endl;
    cout<<*p_updates<<endl;

    //express address in two ways
    cout<<&updates<<endl;
    cout<<p_updates<<endl;

    *p_updates=*p_updates+1;
    cout<<updates<<endl;
    cout<<p_updates<<endl;
    return 0;

}