#include<iostream>
using namespace std;
void swap(int *i, int *b){
    int t ;
    t = *i;
    *i = *b;
    *b = t;
}
int main(){
    int a[4] = {4,0,1,3};
    int i = 0, j;
    while(i<4){
        j = a[i];
        if(a[i]!= a[j]){
            swap(a[i],a[j]);
        }
        else 
        i++;
    }
    for(i=0;i<4;i++){
    cout << (a[i])<<" ";
    }
    for(i=0;i<4;i++){
        if(a[i]==i){
        continue;}
        else {
        cout << i;
        break;}
    }
}