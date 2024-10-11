#include<vector>
#include <iostream>
using namespace std;
//Dutch National Flag Algorithm uses 3 pointers technique in which 
//we have low mid and high pointers. Acc to algo from 0 to l-1 zeros 
//stored, l to m-1 ones stored, m to h unsorted ones an from h+1 to 
//n-1 stored.
void swap(int* m, int* n)
{
    int temp=*m;


    *m=*n;
    *n=temp;
}
main()
{
    vector<int> numbers={1,1,0,0,2,2,0,1,0};
    int l=0;
    int m=0;
    int h=numbers.size()-1;
    while(m<=h)
    {
        cout<<m<<endl;
        //note: dont us only if conditions because you are updating
        //the pointers in them and and second if will become true
       if(numbers[m]==0)
       {
         swap(&numbers[m],&numbers[l]);
          l++;
          m++;
       }
       else if(numbers[m]==1)
       {
          m++;
       }
       else if(numbers[m]==2)
       {
          swap(&numbers[m],&numbers[h]);
          h--;
       }
                for(int i=0;i<numbers.size();i++)
       {
        cout<<numbers[i];
       }
       cout<<endl;
  
    }
         for(int i=0;i<numbers.size();i++)
       {
        cout<<numbers[i];
       }
       
}