#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="hi ";
    string str2 ="this is string"; //same as strcat();
    str1.append(str2);
//another way
    //str1 = str1+str2;
//one more way
    //cout<< str1+str2


    cout<<str1<<endl;
}

