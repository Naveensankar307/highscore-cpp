#include<iostream>
void readarray(int a[10],int n);
int highscore(int a[10],int n);
using namespace std;

main(){
    int a[10];
    int players = 10,res;
    cout<<"enter the values : ";
    readarray(a,players);
    res = highscore(a,players);
    cout<<"high score among the 10 players is "<<res;
}

void readarray(int a[10],int n){
    int i;
    for (i = 0;i<n-1;i++){
        cin>>a[i];
    }
}

int highscore(int a[10],int n){
    int high = a[0],i;
    for(i=0;i<n-1;i++){
        if(a[i]>high){
            high = a[i];
        }
    }
    return high;
}