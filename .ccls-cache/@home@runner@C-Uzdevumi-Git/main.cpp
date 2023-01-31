#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
 int n, m;
 do{
    cin>>n; 
 }while(n<1 || n>250000);
 do{
    cin>>m;
 }while(m>250000 || m<1);

 int* a = new int[n];
 int* iepak = new int[n];
 int* paliek = new int[n];
 
 for(int i=0; i<n; i++){
    do{
        cin>>a[i];
    }while(a[i]<0 || a[i]>250000);
    iepak[i] = a[i]/m;
 }
 
 int t = iepak[0];
 
 for(int i=1; i<n; i++){
    t = min(t, iepak[i]);
 }
 
 for(int i=0; i<n; i++){
    paliek[i] = a[i] - (m * t);
 }
 
 int b =0;
 
 for(int i=0; i<n; i++){
    b += paliek[i];
 }
 cout<<t<<" "<<b;
delete[] a;
delete[] paliek;
delete[] iepak;
}