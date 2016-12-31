#include <iostream>
using namespace std;
void CountingSort(int* a, int n, int Max){ //hashing starts from here
   int b[Max+1];                           // array size should be equal to maximum number of the array.
   for(int i=0;i<=Max;i++){
        b[i]=0;
   }
   for(int i=0;i<n;i++){
        b[a[i]]=b[a[i]]+1;
   }
   for(int i=1;i<=Max;i++){
        b[i]=b[i]+b[i-1];
   }
   int c[n];                          // this array is for storing the data of sorted array.
   for(int j=n-1;j>=0;j--){
        c[b[a[j]]]=a[j];
        b[a[j]]=b[a[j]]-1;
   }
   for(int i=1;i<=n;i++){
       cout << c[i] << " ";          // output
   }
}
int main(){
    int n=8;      //size of actual array
    //cout << "enter n : " << endl;
    //cin >> n;
    //cout << "enter data : " << endl;
    int a[]={7,4,8,2,4,8,1,7};
    int Max=8;    //this will (+1) be the size of new array b[Max+1]
    /*for(int i=0;i<n;i++){
        cin >> a[i];
        if(i==0){
            Max=a[i];
        }
        else{
            if(a[i]>=Max){
                Max=a[i];
            }
        }
    } */
    //cout << Max << endl;
    CountingSort(a, n, Max);
    return 0;
}
