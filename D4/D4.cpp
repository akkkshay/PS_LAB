#include <bits/stdc++.h>
using namespace std;


// #include <bits/stdc++.h>
// using namespace std;
// int mean(int a[], int n){
//    int s = 0.0;
//    for (int i = 0; i < n; i++)
//       s += a[i];
//    return float(s/n);
// }
// void median(int a[], int n){
//     sort (a,a+n);
//     cout<<"Median is : ";
//     if(n%2==0){
//         cout << (a[n/2] + a[(n/2) - 1])/2 ;
//     }
//     else{
//         cout << a[n/2];
//     }

// }
// int main(){
//    int a[] = {3,5,2,1,7,8};
//    int n = 6 ;
//    cout << "Mean is : " << mean(a, n)<<endl;
//    median(a,n);
//    return 0;
// }


//FACTORIAL
// int fact(int n){
//     int f=1;
//     if(n==1)
//         return 1;
//     else
//         return f=n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
// }


//PERFECT NUMBER
// void Perfect_No(int n){
//     int r,s=0;
//     for(int i=1 ; i<n ; i++){
//         r=n%i;
//         if(r==0){
//             s=s+i;
//         }
//     }
//     if(s==n){
//         cout<<s<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the Number :- ";
//     cin>>n;
//     for(int i=1 ; i<n ; i++){
//         Perfect_No(i);
//     }
// }


//PRIME IN A RANGE
// int prime(int l,int h){
//     int flag=0;
//     for(int i=l;i<=h;i++){
//         for(int j=l;j<=i;j++){
//             int a=i%j;
//             if(a!=0)
//                 flag=1;
//                 return a;
//                 break;
//         }
        
//     }
//     // if(flag==0)
//     //     return flag;
//     return -1;
// }
// int main(){
//     int l,h,ind;
//     cin>>l>>h;
//     cout<<prime(l,h);
//     // if(ind!=-1)
//     //     cout<<"Prime";
//     // else
//     //     cout<<"Not prime";
// }


//ARMSTRONG NUM
// void Armstrong_No(int n){
//     int r,s=0;
//     int temp=n;    
//     while(n>0){    
//         r=n%10;    
//         s=s+(r*r*r);    
//         n=n/10;    
//     }    
//     if(temp==s){
//         cout<<"Armstrong Number"<<endl;
//     }       
//     else{  
//         cout<<"Not an Armstrong Number"<<endl;
//     } 
// }  
// int main(){  
//     int n;   
//     cout<<"Enter the Number :- ";    
//     cin>>n;    
//     Armstrong_No(n);
// }


//STRONG NUMBER
// int fact(int r){
//     int f=1;
//     for(int i=1 ; i<=r ; i++){
//         f=f*i;
//     }
//     return f;
// }
// void Strong_No(int i){
//     int r,s=0;
//     int temp=i;
//     while(i>0){
//         r=i%10;
//         s=s+fact(r);
//         i=i/10;
//     }
//     if(s==temp){
//         cout<<temp<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the Number :- ";
//     cin>>n;
//     for(int i=1 ; i<n ; i++){
//         Strong_No(i);
//     }
// }


//GCD
// int GCD(int a,int b){
//     int m=min(a,b);
//     while (m>0) {
//         if ((a%m==0)&&(b%m==0)){
//             break;
//         }
//         m--;
//     }
//     return m; 
// }
// int main(){
//     int a,b;
//     cout<<"Enter the values of a and b :- ";
//     cin>>a>>b;
//     cout<<GCD(a,b);
// }


//a^b
// int power(int a , int b){
//     int p=1;
//     for(int i=0 ; i<b ; i++){
//         p=p*a;
//     }
//     return p;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<power(a,b);
// }