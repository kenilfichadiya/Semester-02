#include<stdio.H>
int main(){
    int n=7,prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0){
        printf("this is not prime number");

    }
    else{
        printf("this is prime number");

    }
    return 0;
}