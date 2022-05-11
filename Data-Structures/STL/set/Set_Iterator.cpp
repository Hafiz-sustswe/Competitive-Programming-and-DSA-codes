/*
	Name of program		:
	Purpose				:
	Date				:
	Written By			: MD Sadman Hafiz
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int> Myset;

	set<int> :: iterator it;

	myset.insert(45);
	myset.insert(11);
	myset.insert(45);//45 is already inserted,so it will not be inserted;
	
    
     it = MySet.begin();
     cout << "value of MySet.begin() is : " << *it << endl;
        
     it = MySet.end();
     it--; // decrementing it because end pointer does not contain any value
     cout << "value of [MySet.end() - 1] is : " << *it << endl;
    
     it = MySet.begin();
     advance(it,2);
     cout << "value of advance(MySet.begin(),2) is : " << *it << endl;
    
     it = MySet.begin();
     it = next(it,3);
     cout << "value of next(MySet.begin(),3) is : " << *it << endl;
    
     it = MySet.end();
     it = prev(it,4);
     cout << "value of prev(MySet.end(),4) is : " << *it << endl;
    
     

	return 0;
}