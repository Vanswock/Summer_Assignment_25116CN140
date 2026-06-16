#include <iostream>
int main()
{
 int a[]={0,1,2,3,5},sum=0, Total, missingNo;
int N=sizeof(a)/sizeof(a[1]);
for(int i=0;i<N;i++)
{
    sum+=a[i];
}
Total=(N*(N+1))/2;
missingNo=Total-sum;
std::cout<<missingNo<<" is missing";
}

