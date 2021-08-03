#include<iostream>
#include<string>

using namespace std;
int main(){
    char a[]={'!'};
    char buf[]={'1','2','3'};
    char c='x';
    string p(buf);
    cout<<*(a+2)<<endl;
    cout<<&c<<endl;
    // cout<<*(&c-2)<<endl;
}
