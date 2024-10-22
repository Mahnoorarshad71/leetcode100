#include<vector>
#include<stack>
#include <iostream>
using namespace std;
main()
{
    vector<char> persons={'A','B','C'};
    vector<vector<int>> relations = {
        {0, 1, 0},  // Person A knows person B
        {0, 0, 1},  // Person B knows person C
        {0, 0, 0}   // Person C knows no one
    };
    stack<int> s;
    s.push(0);
    for(int i=1;i<persons.size();i++)
    {
        if(!s.empty())
        {
            //we have only 2 scenarios if A knows B than A is not celebrity and if it dont know
            //than b cant be celebrity
            if(relations[s.top()][i]==1)
            {
                
                  s.pop();
                  s.push(i);
            }
        
            
              
        }
       
      

    }
     cout<<persons[s.top()];
}
