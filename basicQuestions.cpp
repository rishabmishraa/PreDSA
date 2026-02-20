#include<bits/stdc++.h>
using namespace std;

void evenodd(int n){

    if((n&1)==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}

void isleapyear(int year){
    if(year%4==0){
        if(year%100==0 ){
            if(year%400==0){
                
            cout<<"yeah leap year hai bro"<<endl;
            }
        }
        else{
            cout<<"leap year hai bro"<<endl;
        }
       
    }
    else{
        cout<<"nhi bro leap year nhi hai"<<endl;
    }
}

bool isprime(int n)
{
    if(n<=1){
        
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
      
    }


    return true;
}

void primefact(int n){

    for(int i=2;i<=n;i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>1){
        cout<<n;
    }
}
void prime1toN(int n){
    for(int i=1;i<=n;i++){

        if(isprime(i)){
            cout<<i<<" ";
        }

       
    }
  
    
}

int fact(int n){
    int facto =1;
    if(n==0||n==1){
        return 1;
    }
    else{
        while(n){
            facto*=n;
            n--;
        }
    }
    return facto;
}
int rev(int n){
    int revn=0;
    while(n){
        revn = (revn*10) + (n%10);
        n/=10;
    }
    return revn;
}
void printdig(int n){
    while(n){
        cout<<n%10;
        n/=10;
    }
}
int crtdig(int n){
    int num=0;
    
    while(n){
        int dig;
        cin>>dig;
        
        num = (num*10) + dig;
        n--;
    }
    return num;

}

int setbit(int n, int k){
    return (n | (1<<k));
}

int countsetbits(int n){
    int count=0;
    while(n){
        // if(n%2==1){
        //     count++;
        // }
        // n/=2;
        if(n&1){
            count++;
        }
        n>>=1;
    }
     
    return count;
}

int main(){

    int n;
    cin>>n;
    
    // evenodd(number);
    // isleapyear(year);
    // isprime(n);
    //primefact(n);
    //prime1toN(n);
    // int factorial = fact(n);
    // cout<<factorial<<endl;
    // int reversed = rev(n);
    // cout<<reversed<<endl;
    //printdig(n);
    // int creatednum = crtdig(n);
    // cout<<creatednum<<endl;
    // int k;
    // cin>>k;
    // int newn = setbit(n,k);
    // cout<<newn<<endl;
    int setbits = countsetbits(n);
    cout<<setbits<<endl;

 

}