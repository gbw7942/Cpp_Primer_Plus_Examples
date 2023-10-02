# include <iostream>
# include <climits>
bool is_int( long double);
int main()
{
    using namespace std;
    double num;

    cout<<"Enter an integer:  ";
    cin>>num;
    while(!is_int(num))
    {
        cout<<"Out of range. Try again: ";
        cin>>num;
    };
    long val= long(num);
    cout<<"You entered the integer: "<<val<<"\nBye\n";
    return 0;

}

bool is_int(long double x)
{
    if (x<=LONG_MAX and x>=LONG_MIN)
        return true;
    else
        return false;
}