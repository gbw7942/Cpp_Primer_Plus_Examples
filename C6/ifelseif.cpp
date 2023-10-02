# include <iostream>
const int Fave=27;
int main()
{
    using namespace std;
    int n;
    cout<<"Enter a number between 1-100\n";
    do
    {
        cin>>n;
        if (n<Fave)
            cout<<"Too low: ";
        else if (n>Fave)
            cout<<"Too large: ";
        else
            cout<<Fave<<" is right!\n";
    } while (n!=Fave);
    return 0;
    
}