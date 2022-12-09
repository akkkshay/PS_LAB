#include<iostream>
#include<math.h>
using namespace std;

// int main() {

//     float a, b, c, x1, x2, d, i, r;
//     cout << "Enter coefficients a, b and c :- ";
//     cin >> a >> b >> c;
//     d= b*b - 4*a*c;
    
//     if (d > 0) {
//         x1 = (-b + sqrt(d)) / (2*a);
//         x2 = (-b - sqrt(d)) / (2*a);
//         cout << "2 different roots are :- " << endl;
//         cout << "x1 = " << x1 << endl;
//         cout << "x2 = " << x2 << endl;
//     }
    
//     else if (d == 0) {
//         cout << "2 same roots are:- " << endl;
//         x1 = -b/(2*a);
//         cout << "x1 = x2 =" << x1 << endl;
//     }

//     else {
//         r = -b/(2*a);
//         i =sqrt(-d)/(2*a);
//         cout << "2 imaginary roots are :- "  << endl;
//         cout << "x1 = " << r << "+" << i << "i" << endl;
//         cout << "x2 = " << r << "-" << i << "i" << endl;
//     }

//     return 0;
// }


//PRIME FACTOR
// int main(){
//     int n,c,i,j;
//     cin>>n;
//     cout<<"Prime factor: ";
//     for(i=2;i<n;i++){
//         if(n%i==0)
//              c=1;
//             for(j=2; j<=i/2; j++){
//                 if(i%j==0){
//                     c= 0;
//                     break;
//                 }
//             }
//             if(c==1){
//                 cout<<i<<" ";
//             }
//     }
// }