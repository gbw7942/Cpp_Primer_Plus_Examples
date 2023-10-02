# include <iostream>
int main()
{
    using namespace std;
    int higgens=5;
    int *pt=&higgens;

    cout<<higgens<<" "<<&higgens<<endl;
    cout<<*pt<<" "<<pt<<endl;

    return 0;
}