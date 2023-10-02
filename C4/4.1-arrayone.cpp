# include <iostream>
int main()
{
    using namespace std;
    const int a=20;
    char name[a];
    char dessert[a];

    cout<<"Enter your name:\n";
    cin.get(name,a).get();
    cout<<"Enter your favorite dessert:\n";
    cin.get(dessert,a).get();
    cout<<"I have some "<<dessert;
    cout<<" for you, "<<name<<endl;
    return 0;
}
