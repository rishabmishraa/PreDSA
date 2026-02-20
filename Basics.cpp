#include<iostream>
using namespace std;

int main(){

    //printing using cout;
   // cout<<"Hii, My name is Rishab Misra"<<endl;

    //printing using printf;
   // printf("Hii, My name is Rishab Misra");

    // Declaring variables;

    // int a=5; // integer; size 4 bytes;
    // float b=5.567125; // float; size 4 bytes;
    // double c=6.668933893338889; // double; size 8 bytes;
    // char d='R'; // char; size 1 byte;
    // bool e=true; // boolean; size 1 byte;

    //cout<<b<<endl<<c<<endl;

    //cout<<sizeof(c);// sizeof operator to find size of variable;

    // int max = INT_MAX + 1; it will give overflowed value;
    // cout<<max; will give -2147483648;
    // taking inputs;

    // int x;
    // cin>>x;
    // cout<<x;

    // Unsigned data types don't store negative values because they don't have sign bit, and that's why they can store larger
    // positive values than regular data types of same size.

    // Const keyword is used to declare variables whose value cannot be changed after initialization.
    // const int y =10;
    // y=15; // This will give error;

    // Conditionals and Operators;

    // int balance;
    // cin>>balance;
    // if(balance>=10){ // if block
    //     cout<<"Maggie kha sakte hai"<<endl;
    // }
    // else{ // else block
    //     cout<<"maggie ke liye paise nahi hai"<<endl;
    // }

    // int num;
    // cin>>num;

    // if(num<0){
    //     cout<<"negative sala!!"<<endl;
    // }
    // else if(num==0){ // else if block
    //     cout<<"Aryabhat ka khoj"<<endl;
    // }
    // else{
    //     cout<<"Saale tu toh positive nikla!!"<<endl;
    // }
    

    //using Logical Operators;

    // int age;
    // cin>>age;

    // if(age>=18 && age<=60){
    //     cout<<"Gaadi chala sakta hai tu bhai"<<endl;
    // }
    // else if(age>60){
    //     cout<<"Aap buddhe ho gaye ho, aram karo"<<endl;
    // }
    // else{
    //     cout<<"saale baccha hai tu, gaadi chhuna bhi matt"<<endl;
    // }

    // if(age<18 || age>60){
    //     cout<<"Gaadi mat chalana"<<endl;
    // }
    // else{
    //     cout<<"Chala le bsdk"<<endl;
    // }

    // if(age!=18){
    //     cout<<"mtlb tu 18 ka nahi hai"<<endl;
    // }
    // else{
    //     cout<<"Chal apna age bata"<<endl;
    // }

    // Ternary Operator;
    // int marks;
    // cin>>marks;

    // (marks>=33)? cout<<"Pass"<<endl : cout<<"Fail"<<endl;

    // Switch Case;
    // int day;
    // cin>>day;
    // switch(day){
    //     case 1:
    //         cout<<"Monday"<<endl;
    //         break;
    //     case 2:
    //         cout<<"Tuesday"<<endl;
    //         break;
    //     case 3:
    //         cout<<"Wednesday"<<endl;
    //         break;
    //     case 4:
    //         cout<<"Thursday"<<endl;
    //         break;
    //     case 5:
    //         cout<<"Friday"<<endl;
    //         break;
    //     case 6:
    //         cout<<"Saturday"<<endl;
    //         break;
    //     case 7:
    //         cout<<"Sunday"<<endl;
    //         break;
    //     default:
    //         cout<<"Invalid Input"<<endl;
    // }

    // Loops;

    // for(int i=0;i<11;i++){
    //     cout<<"My name is Rishab Misra"<<endl;
    // }

    // int num;
    // cin>>num;

    // for(int i=1;i<=10;i++){
    //     cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    // }

    // int count=0;

    // for(int i=1;i<=100;i++){
    //     if(i%2==0){  //
    //         count++;
    //         cout<<i<<endl;
    //     }
    // }
    // cout<<"Total even numbers between 1 to 100 are: "<<count<<endl;

    // Number System Conversion;

    // decimal to binary;

    // int n;
    // cin>>n;
    // int bin =0;
    // int i=0;
    
    // while(n){
    //     int rem = n%2;
        
    //     bin = bin+ rem* pow(10,i++);
    //     n/=2;
    // }
    
    // cout<<bin;

    //binary to decimal;

    //    int n;
    //    cin>>n;
    //    int dec=0;
    //    int i=0;
    
    //    while(n){
    //        int rem = n%10;
        
    //        dec = dec + (rem*pow(2,i++));
    //        n/=10;
    //    }
    
    //    cout<<dec;


    // Pattern Printing;

    // int n;
    // cin>>n;

    //Square pattern

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Rectangular Pattern

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Hollow Square Pattern

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==0|| i== n-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             if(j==0||j== n-1){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }

    // pyramid Pattern

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // inverted pyramid pattern

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Number pyramid pattern

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // Inverted number pyramid pattern

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // full pyramid pattern

    //     for(int i=0;i<n;i++){
    //        for(int j=0;j<n-i-1;j++){
    //            cout<<" ";
    //        }
        
    //        for(int j=0;j<i+1;j++){
    //            cout<<"* ";
    //        }
        
    //        cout<<endl;
    //    } 

    // inverted full pyramid pattern

    //     for(int i=0;i<n;i++){
    //        for(int j=0;j<i;j++){
    //            cout<<" ";
    //        }
        
    //        for(int j=0;j<n-i;j++){
    //            cout<<"* ";
    //        }
        
    //        cout<<endl;
    //    } 

    // if we combine full pyramid and inverted full pyramid we get diamond pattern; just make sure to divide n by 2 before using it;

    // inverted hollow pyramid pattern

    //   for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         if(j==0 || j== n-i-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
        
    //     cout<<endl;
    // }

    // Hollow Diamond Pattern

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
        
        
    //     for(int j=0;j<2*i +1;j++){
    //         cout<<"  ";
    //     }
       
        
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
        
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
        
    //     for(int j=0;j<(2*n)-((2*i)+1);j++){
    //         cout<<"  ";
    //     }
        
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Pattern with numbers and stars

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<(2*i)+1;j++){
            
    //         if(j%2==0){
    //             cout<<i+1<<" ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
        
    //     cout<<endl;
    // }

    // Inverted Pattern with numbers and stars

    // for(int i=0;i<n;i++){
    //     for(int j=0;j< (2*n)-((2*i) + 1);j++){
    //         if(j%2==0){
    //             cout<<n-i<<" ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Hollow Inverted Pyramid Pattern

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
            
    //         if(j==0||j==n-i-1||i==0){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Floyd's Triangle Pattern

    // int count =1;
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // Butterfly Pattern

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
        
    //     for(int j=0;j<(2*n)- (2+(2*i));j++){
    //         cout<<"  ";
    //     }
        
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // spiral number pattern

    // for(int i=0;i<(2*n)-1;i++){
    //     for(int j=0;j<(2*n)-1;j++){
    //         int top=i;
    //         int left=j;
    //         int right=(((2*n)-1)-1)-j;
    //         int bottom=(((2*n)-1)-1)-i;
            
    //         cout<< n - min(min(top, bottom),min(left,right));
    //     }
    //     cout<<endl;
    // }
    
    
    // for(int i=0;i<n;i++){
        
        
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
        
        
    //     for(int j=0;j<2*i;j++){
    //         cout<<"  ";
            
    //     }
       
        
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
        
    // }

    // Bitwise Operations;

    // & -> Bitwise AND operator
    // | -> Bitwise OR operator
    // ^ -> Bitwise XOR operator
    // ~ -> Bitwise NOT operator

    // 10<<1 = 20(Left Shift by 1);
    // 10>>1 = 5  (Right Shift by 1);

    // Bit masking;

    // set a perticular bit
    // int n;
    // cin>>n;
    // int pos;
    // cin>>pos;
    // int mask = 1<<pos; // Bit Masking
    // int newn = n | mask; 
    // int newn2 = n & (~mask); // to clear a bit;
    //int newn3 = n ^ mask; // to toggle a bit;
    // cout<<newn<<endl;
    // cout<<newn2<<endl;
    // cout<<newn3<<endl;

    // Pre and Post Increment/Decrement Operators;

    // int a=5;
    // cout<<a++<<endl; // Post Increment
    // cout<<++a<<endl; // Pre Increment
    // cout<<a--<<endl; // Post Decrement
    // cout<<--a<<endl; // Pre Decrement

    // ** cout<<(a++)**(++a); // need to know the order of evaluation;

    
    
    return 0;
}