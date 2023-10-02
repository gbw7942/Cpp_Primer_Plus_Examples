# include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guest[2]=
    {
        {"Alexi",0.5,21.99},
        {"Bambi",2000,565.99}
    };

    cout<<"The guests are"<<guest[0].name<<" and "<<guest[1].name<<endl;
    cout<<"Price: "<<guest[0].price+guest[1].price<<endl;

    return 0;
}