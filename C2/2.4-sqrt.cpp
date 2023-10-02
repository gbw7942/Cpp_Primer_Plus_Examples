# include <iostream>
# include <cmath>

int main()
{
    using namespace std;

    double area;
    cout << "Enter the floor area: ";
    cin >> area;

    double side;
    side=sqrt(area);
    cout<<"That's is "<<side<<"m long in side"<<endl;
    return 0;
}