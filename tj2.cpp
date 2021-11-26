
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str_i;
        getline(cin,str_i);
    if(str_i.length()>10)
    {
        cout<<str_i.front()<<str_i.length()<<str_i.back();
        cout<<endl;
    }
    else if(str_i.length()<10){
        cout<<str_i;
        cout<<endl;
    }
    }
    
    return 0;
}