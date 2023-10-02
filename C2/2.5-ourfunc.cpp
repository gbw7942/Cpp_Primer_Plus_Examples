# include <iostream>
void func(int);
// void means the function "func" does not return a value
// so you can't use a=func(3) 

int main()
{
    using namespace std;
    func(3);
    cout<<"Type an integer: ";
    int count;
    cin >> count;
    func(count);
    cout<<"Done!"<<endl;
    return 0;

}
// main returns an int, which is 0

void func(int n)
{
    using std::cout;
    using std::endl;
    // using specific elements
    cout<<"Touch your toes "<<n<<" times."<<endl;
}