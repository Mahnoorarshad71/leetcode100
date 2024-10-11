#include<vector>
#include <iostream>
using namespace std;
//Kadane Algorithm uses a dynamic approach byy saving previous max sum 
//and decide at each point shoul it include the sub array that is less 
//makes the current number less by adding that into it. So it start 
//currsum from that number and removes the previous one as its no more 
//needed.
main()
{
vector<int> numbers={1,2,3,-4,9,9,-11,22,-2};
int currSum=0;
int maxSum=0;
int start=0;
int end=0;
for(int i=0;i<numbers.size();i++)
{
    if(numbers[i]+currSum<numbers[i])
    {
        start=i;
        currSum=numbers[i];
    }
    else{
        end=i;
        currSum=numbers[i]+currSum;
    }
    if(maxSum<currSum)
    {
       maxSum=currSum;
    }
}
std::cout<<maxSum<<endl;
std::cout<<start<<endl;
std::cout<<end<<endl;
}