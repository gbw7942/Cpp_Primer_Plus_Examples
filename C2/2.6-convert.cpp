# include <iostream>
int stonetolb(int);

int main()
{
    using namespace std;
    int stone;
    cout<<"Enter the weight of stone: ";
    cin>>stone;
    int pounds=stonetolb(stone);
    cout<<stone<<" stone = "<<pounds<<" pounds"<<endl;
    return 0;

}

int stonetolb(int sts) // sts is an integer
{
    int pounds=14*sts;
    return pounds;
}