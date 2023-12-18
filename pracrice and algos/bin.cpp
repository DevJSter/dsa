#include <iostream>
using namespace std;
#include<vector>
int main() {
    // Write C++ code here
    int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
    int n=11;
    int no_bins= 3;
    int div=n/no_bins;
    int mod=n%no_bins;
    int bins[no_bins][div+mod];
    //selctionSort(arr);
   int place =0;
    for(int i=0;i<no_bins;i++)
    {   int limit;
        if(i>=no_bins-mod)
        limit=div+1;
        else
        limit=div;
        for(int j=0;j<limit;j++)
        {
            bins[i][j]=arr[place];
            place++;
        }
    }
    
    cout << " values in each bins are";
    
   for(int i=0;i<no_bins;i++)
    {   int limit;
        if(i>=no_bins-mod)
        limit=div+1;
        else
        limit=div;
        
        cout << "bin" << i << " :- ";
        for(int j=0;j<limit;j++)
        {
        cout << bins[i][j] <<" ";
        }
        cout << endl;
    }
    
   int brr[n];
  int place2=0;
  for(int i=0;i<no_bins;i++)
    {   int limit;
        if(i>=no_bins-mod)
        limit=div+1;
        else
        limit=div;
        
        int sum=0;
        for(int j=0;j<limit;j++)
        {
         sum=sum+bins[i][j];
        }
       int mean=sum/limit;
       for(int j=0;j<limit;j++)
        {
         brr[place2]=mean;
         place2++;
        }
        
    }
 cout <<  "array after mean method is : " ;
 
  for(int j=0;j<n;j++)
  {
      cout << brr[j] << " ";
  }
    
     int crr[n];
  int place3=0;
  for(int i=0;i<no_bins;i++)
    {   int limit;
        if(i>=no_bins-mod)
        limit=div+1;
        else
        limit=div;
        
        int sum=0;
        for(int j=0;j<limit;j++)
        {
           if((bins[i][j]-bins[i][0])<(bins[i][limit-1]-bins[i][j]))
           {
               crr[place3]=bins[i][0];
           }
           else{
               crr[place3]=bins[i][limit-1];
           }
           place3++;
        }
       
        
    }
 cout <<  "\n array after limit method is : " ;
 
  for(int j=0;j<n;j++)
  {
      cout << crr[j] << " ";
  }
    
    
    return 0;
}
