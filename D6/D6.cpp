#include <bits/stdc++.h>
using namespace std;

//90Deg
int main(){
    int n;
    cout<<"Enter number of rows and columns :- ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the matrix elements :- ";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    cout<<"original matrix is "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        
        }
        cout<<endl;
    }
    cout<<endl;
    // cout<<"Updated matrix: "<<endl;
    // for (int i=0; i<n; i++)
    //     for (int j=i+1; j<n; j++)
    //         swap(arr[i][j], arr[j][i]);
    // for (int i=0; i<n; i++) {
    //     int l=0, h=n-1;
    //     while (l<h) {
    //         swap(arr[i][l], arr[i][h]);
    //         l++;
    //         h--;
    //     }
    // }
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++)
    //         cout<<arr[i][j]<< " ";
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            swap(arr[i][1],arr[i][n]);
        }
    }
    cout<<endl;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}



//Anti-Clock 90Deg
// int main(){
//     int n;
//     int arr[20][20];
//     cout<<"Enter the number rows and columns of matrix :- ";
//     cin>>n;
//     cout<<"Enter the elements :- ";
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"original matrix is "<<endl;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             cout<<arr[i][j]<<" ";
        
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"Updated matrix: "<<endl;
//     for(int i=0 ; i<n ; i++){
//         for(int j=i+1 ; j<n ; j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//     for (int j=0; j<n; j++) {
//         int l=0, h=n-1;
//         while (l>h) {
//             swap(arr[j][h], arr[j][l]);
//             l--;
//             h++;
//         }
//     }
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }


// int main(){
//     int r=0,c=0;
//     cout<<"Enter number of rows and columns matrix: ";
//     cin>>r>>c;
//     int a[r][c];
//     cout<<"Enter matrix elements"<<" ";
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<"matrix: "<<endl;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int fr=0,fc=0;
//     int lr=r-1,lc=c-1;
//     while(fr<=lr & fc<=lc){
//         for(int i=fc;i<=lc;i++){
//             cout<<a[fr][i];
//         }
//         fr++;
//         for(int i=fr;i<=lr;i++){
//             cout<<a[i][lc];
//         }
//         lc--;
//         if(fc<=lc){
//             for(int i=lc;i>=fc;i--){
//             cout<<a[lr][i];
//             }
//         }
//         lr--;
//         if(fr<=lc){
//             for(int i=lr;i>=fr;i--){
//             cout<<a[i][fc];
//             }
//         }
//         fc++;
//     }
// }