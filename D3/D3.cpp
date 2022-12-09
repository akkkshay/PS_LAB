#include<iostream>
using namespace std;

// int fact(int n)
// {
//     if(n<=1) return 1;
//     else return n*fact(n-1);
// }

// int main()
// {
//     int n; cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++)
//     sum+=fact(i);
//     cout<<sum<<endl;
//     return 0;
// }

// void StarPatters(int n){
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=n ; j++){
//             if(i==1 || i==n || i==n-j+1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


/*P1*/
// int factorial(int num)
// {
//     if(num == 1){
//         return 1;
//     }
//     else{
//         return num*factorial(num-1);
//     }

// }

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;

//     for(int i = 1; i <= n; i++){
//         sum += factorial(i);
//     }
    
//     return 0;
// }


/*P2*/
// int factorial(int num)
// {
//     if (num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * factorial(num - 1);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += factorial(i)/i;
//     }

//     return 0;
// }


/*P3*/
// int factorial(int num)
// {
//     if (num == 1 or num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * factorial(num - 1);
//     }
// }


// int main()
// {
//     int x;
//     cin >> x;
//     int n;
//     cin >> n;
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += pow(x,i-1)/factorial(i-0);
//     }

//     return 0;
// }


/*P4*/
// int factorial(int num)
// {
//     if (num == 1 or num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * factorial(num - 1);
//     }
// }

// int main()
// {
//     int x;
//     cin >> x;
//     int n;
//     cin >> n;
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
        
//         sum += pow(-x, i - 1) / factorial(i - 0);
//     }

//     cout << sum;
//     return 0;
// }


/*P5*/
// int factorial(int num)
// {
//     if (num == 1 or num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * factorial(num - 1);
//     }
// }

// int main()
// {
//     int x;
//     cin >> x;
//     int n;
//     cin >> n;
//     int sum = 0;
//     int j = 0;
//     for (int i = 1; i <= n; i+=2, j++)
//     {
//         sum += pow(-1, j)*pow(x, i - 1) / factorial(i - 0);
//     }

//     cout<< sum;

//     return 0;
// }


/*P6*/
// int factorial(int num)
// {
//     if (num == 1 or num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * factorial(num - 1);
//     }
// }

// int main()
// {
//     int x;
//     cin >> x;
//     int n;
//     cin >> n;
//     int sum = 0;
//     int j = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += pow(-1, j) * pow(x, i - 1) / factorial(i);
//         j++;
//     }

//     cout << sum;

//     return 0;
// }
