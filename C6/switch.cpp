# include <iostream>
using namespace std;
void show();
int main()
{
    show();
    int choice;
    cin>>choice;
    while (0<choice<4)
    {
        switch (choice)
        {
        case 1: cout<<"\a\n";
                break;
        case 2: cout<<"2\n";
                break;
        case 3: cout<<"a\n";
                break;
        default:
            break;
        }
        show();
        cin>>choice;
    }
    return 0;
}

void show()
{
    cout<<"1) alarm 2) print 2\n 3) print a";
}