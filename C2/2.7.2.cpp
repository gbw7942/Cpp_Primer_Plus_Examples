# include <iostream>
double temp(double);
int main()
{
    using namespace std;
    double temp_in;
    double temp_out;
    cout<<"Please enter a Celsius value: "<<endl;
    cin>>temp_in;
    temp_out=temp(temp_in);
    cout<<"It is "<<temp_out<<endl;
    return 0;
}

double temp(double out)
{
    double result;
    result=out*1.8+32.0;
    return result;
}