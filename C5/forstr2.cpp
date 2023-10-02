# include <iostream>
# include <string>
int main()
{
    using namespace std;
    cout<<"Enter a word: ";
    string word;
    cin>>word;
    
    char temp;
    int i,j;
    for(j=0,i=word.size()-1;j<i;--i,++j)
    {
        temp=word[i];
        word[i]=word[j];
        word[j]=temp;
        // reverse [i] and [j], which will be the first and the last
    }
    cout<<word<<endl;
    return 0;
}