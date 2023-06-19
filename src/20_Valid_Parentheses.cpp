#include <stack>
#include <string>
#include <iostream>
#include <typeinfo>
using namespace std;

class Solution
{
public:
	static bool isValid(string s)
	{
		stack<char> stack;
		if (s[s.length() - 1] == '(' || s[s.length() - 1] == '[' || s[s.length() - 1] == '{')
			return false;
		int i = -1;
		while (i < (int)s.length()-1)
		{
			i++;
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				stack.push(s[i]);
			}
			else if(!stack.empty()){
				 if (s[i] == ')')
			{
				if (stack.top() == '(')
				{
					stack.pop();
				}

				else
				{
					return false;
				}
			}
			else if (s[i] == ']')
			{
				if (stack.top() == '[')
				{
					stack.pop();
				}

				else
				{
					return false;
				}
			}
			else if (s[i] == '}')
			{
				if (stack.top() == '{')
				{
					stack.pop();
				}

				else
				{
					return false;
				}
			}
			}
			else if(stack.empty()){
				return false;
			}
			
		}
		if(!stack.empty()){
			return false;
		}
		return true;
	}
};

int main()
{
	string s = "()";
	cout << Solution::isValid(s);
	return 0;
}
