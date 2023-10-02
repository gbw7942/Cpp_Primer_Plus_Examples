# include <iostream>
void blind(void);
void run(void);
using namespace std;

int main()
{
    blind();
    blind();
    run();
    run();
    return 0;

}

void blind()
{
    cout<<"Three blind mice"<<endl;
}

void run()
{
    cout<<"See how they run"<<endl;
}