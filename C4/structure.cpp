# include <iostream>
# include <string>
struct inflatable
{
    char name [20];
    float volume;
    double price;
    std::string note;
};

int main()
{
    using namespace std;
    inflatable guest=
    {
        "Glorious Gloria",
        1.88,
        29.99,
        "NO requirement"
    };
    inflatable pal={"Audacious Arthur",3.12,32.99," Thanks"};

    cout<<"Expand your guest list with "<<guest.name;
    cout<<" and "<<pal.name<<endl;
    cout<<"Volume: "<<guest.volume+pal.volume<<endl;
    cout<<guest.note+pal.note<<endl;

    return 0;
}