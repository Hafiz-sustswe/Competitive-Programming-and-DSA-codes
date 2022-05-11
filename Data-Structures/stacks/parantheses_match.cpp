/*
		Name of program		:
		Purpose				:
		Date				:
		Written By			: MD Sadman Hafiz
	*/
	
	#include<iostream>
 	#include<cstring>
 	#include<stack>
	using namespace std;

	bool isBalanced(char c1, char c2)
	{
		return ((c1 == '(' && c2 == ')')  ||  (c1 == '[' && c2 == ']'));

	}
	int main()
	{
		int t;
		cin >> t ;
		getchar();
		while(t--)
		{
		 char s[129];
		 gets(s);
		 int l = strlen(s);
		  if(l == 0)
		  {
		  	cout << "Yes\n";
		  	continue;
		  }
		 
		  stack<char>st;

          bool balnc = true;
          
          for( int i = 0;i < l;i++){
             if(s[i] == '(' || s[i] == '[') 
             	st.push(s[i]); 
             else{
                 if(st.empty()){
                     balnc = false;
                     break;
                 }
                 if(isBalanced(st.top() , s[i] )) 
                 	st.pop();
                 else{
                     balnc = false;
                     break;
                     }
             }
         }
         
		if(!st.empty())
			balnc = false;

		if(balnc)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	}
