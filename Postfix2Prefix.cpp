// CPP Program to convert postfix to prefix
#include <bits/stdc++.h>
using namespace std;
bool isOperator(char s)
{
    switch (s)
    {
    case '+':
    case '-':
    case '/':
    case '*':
    return true;

    }
    return false;
}

string postToPre(string post_exp)
{
    stack<string> s;
 
    // length of expression
    int length = post_exp.size();
 
    // reading from left to right
    for (int i = 0; i < length; i++) 
    {
        if(isOperator(post_exp[i]))
        {
            string op1=s.top();
            s.pop();
            
            string op2=s.top();
            s.pop();
            string result= post_exp[i]+op2+op1;
            s.push(result);
        }
        else{
            s.push(string(1,post_exp[i]));
        }
        
    }
    string ans = s.top();
    s.pop();
    return ans;
    
}
main(){
     string post_exp = "ABC/-AK/L-*";
 
    // Function call
    cout << "Prefix : " << postToPre(post_exp);
    return 0;

}