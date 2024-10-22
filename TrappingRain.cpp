//In this problem the number of arrays are baars and water is saved between them
//Like between 3,0,2,4 you have to left largeat and roght largest and than calculate
//the trapped water in between them
#include<vector>
#include <iostream>
using namespace std;
main()
{
    vector<int> arr={3,0,1,0,4,0,2};
    // 2 approaches one with stack one brute force, one best with O(n) and O(1) space
    // one approach is initialize 2 arrays from left to right and right to left considering the largest
    //this shows a pattern that if we need future value with us we make array and and copy future
    //value for each index so that we might know in 1 time. this is called prefix and suffix technique

    //Other approach by stack can be that we start with one bar making is right maximum
    //And than left maximum by iterating if it small push and maintain left largest
    //If left largest is greater thanright pop all elements and put left largest into it
    //While popping minus the eights of coming elements from right largest that will be water entrapped

    //two pointers technique is best as it has two pointers that iterate and save left max and right max
    //if right is minimum than the left move pointer inward and minus the new i from left max you will get
    //the water entrappd as we know that  water will definatelly trapped in them.
    int l=0;
    int r=arr.size()-1;
    int leftMax=arr[l];
    int rightMax=arr[r];
    int water=0;

while(l!=r)
{

if(leftMax<rightMax)
{
   water+=leftMax-arr[l];
   cout<<"left side water for "<<l<<" is "<<leftMax-arr[l]<<endl;
   l++;
   leftMax=max(arr[l],leftMax);
}
else{
   water+=rightMax-arr[r];
    cout<<"right side water for "<<r<<" is "<<rightMax-arr[r]<<endl;
   r--;
   rightMax=max(arr[r],rightMax);
}
}
cout<<water;

    
}