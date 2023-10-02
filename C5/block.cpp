# include <iostream>
int main()
{
    using namespace std;
    double number;
    double sum=0.0;
    for (int i=1;i<=5;i++)
    {
        cout<<"value "<<i<<": ";
        cin>>number;
        sum+=number;
    };
    cout<<sum<<endl;
    return 0;
}