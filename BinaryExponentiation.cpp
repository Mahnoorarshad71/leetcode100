// Binary exponentiation reducing the time complexity of n to logn 
// when computing n power of some number x. writing n in binary form
// like 3 power 5 can be written as 3 power 4 and s power 1. 3 power 4
// will be computed as 3 power 2 multiply 3 power 2. some how you can say 
// its application of dynamic programming where you store previous result
// intead of computing it again.
#include <iostream>
using namespace std;
main()
{
 int x=3; // the variable to be powered
 int n=5; // the power
 long binform;
 double ans=1;
 while (binform<0)
 {
    if(binform%2==1)
    {
        ans*=x;
    }
    x*=x;
    binform/=2;
 }
 cout<<ans;
}