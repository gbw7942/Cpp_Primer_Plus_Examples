#include <iostream>
int main()
{
    using namespace std;
    char ch='M';
    int i=ch;
    cout<<ch<<" is "<<i<<endl;

    ch=ch+1;
    i=ch;
    cout<<ch<<" is "<<i<<endl;


    cout.put(ch);
    cout<<endl;
    return 0;
}