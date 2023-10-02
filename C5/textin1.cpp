# include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count=0;
    cout<<"Enetr the charachters, # to quit: \n";
    cin.get(ch);
    while(ch!='#')
    {
        cout<<ch;
        ++count;
        cin.get(ch);
    }
    cout<<endl<<count<<endl;
    return 0;
}