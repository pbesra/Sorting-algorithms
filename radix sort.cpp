#include <iostream>
#include <queue>
using namespace std;
int digitCall(int i, int num){
    int m=num;
    int r;
    for(int k=0;k<=i;k++){
        r=m%10;
        m=m/10;
    }
    return r;

}
void RadixSort(int* a, int n){
    int d=2;
    for(int i=0;i<d;i++){
        queue<int> q[10];
        for(int k=0;k<10;k++){
            if(!q[k].empty()){
                while(!q[k].empty()){
                    q[k].pop();
                }
            }
        }
        for(int j=0;j<n;j++){
            int digit=digitCall(i,a[j]);
            q[digit].push(a[j]);
        }
        int p=0;
        for(int t=0;t<10;t++){
            if(!q[t].empty()){
                while(!q[t].empty()){
                    a[p]=q[t].front();
                    q[t].pop();
                    p++;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n=6;
    //cout << "enter n : " << endl;
    //cin >> n;
    int a[]={55, 40, 50, 73, 35, 39};
    //cout << "enter data : " << endl;
    cout << "enter 6 numbers : " << endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    RadixSort(a, n);
    return 0;
}
