# include <iostream>
int main()
{
    using namespace std;
    int nights=1001;
    int *pt=new int;
    *pt=1001;

    cout<<nights<<" "<<&nights<<endl;
    cout<<*pt<<" "<<pt<<endl;
    cout<<"***"<<endl;

    double *pd=new double;
    *pd=10000001.0;
    cout<<*pd<<" "<<pd<<endl;
    cout<<"location of pointer pd: "<<&pd<<endl;

    
    cout<<sizeof(*pd)<<endl;
    cout<<sizeof(*pt)<<endl;
    return 0;
}