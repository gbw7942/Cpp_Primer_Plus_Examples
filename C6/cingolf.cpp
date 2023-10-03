# include <iostream>
const int Max=5;
int main()
{
    using namespace std;

    double golf[Max];
    cout<<"Please ener the weight of your score. \n";
    cout<<"You may enter up to "<<Max<<" score <q to terminste. \n";
    int i =0;
    for (i=0;i<Max;i++){
        cout<<"round #"<<i+1<<": ";
        while(!(cin>>golf[i])){
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Please enter a number: ";
            
        }
    }//illegal input check check
    double total = 0.0;
    for (int i =0; i<Max; i++)
        total+=golf[i];
        cout<<total /i <<" = average score of "<<Max<<" golf\n";
    cout<<"Done \n";
    return 0;

}