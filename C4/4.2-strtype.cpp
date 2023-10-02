# include <iostream>
# include <string>
# include <cstring>
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout<<"Length of string in charr: "<<strlen(charr)<<endl;
    cout<<"Length of string in str: "<<str.size()<<endl;
    cout<<"Enter a line of text: ";
    cin.getline(charr,20);
    cout<<"You entered: "<<charr<<endl;
    cout<<"Enter a line of text: ";
    getline(cin,str);
    cout<<"You entered: "<<str<<endl;
    cout<<"Length of string in charr: "<<strlen(charr)<<endl;
    cout<<"Length of string in str: "<<str.size()<<endl;
    return 0;

}