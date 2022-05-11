#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	
	return false;
}
bool AreParanthesesBalanced(string exp)
{
	stack<char>  S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(')
			S.push(exp[i]);
		else if(exp[i] == ')')
		{
			if(S.empty() || !ArePair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false;
}

int main()
{
	
	int t;
	cin >> t;
	while ( t-- )
	{
		int n ;
		cin >> n;
		char c;
		getchar();
		string ex;
		for(int i = 0; i < n ; i++)
			
			{
				cin >> c ;
				ex[i] = c;
			}
		ex[i] = '\0';
	

	if(AreParanthesesBalanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}