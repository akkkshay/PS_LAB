#include<bits/stdc++.h>
using namespace std;

// int len(char s[]);
// void lowerupper(char s[]);
// int pallindrome(char s[],int l);
// void rev(char [],int l);
// void concatenate(char s1[],char s2[]);
// int compare(char s1[],char s2[]);
// void prefix(char s[], int l);
// void sufix(char s[], int l);

// int main(){
//     char s[100];
//     cin.getline(s,100);


//     int l=len(s);
//     cout<<"Length is: "<<l<<endl;


    // lowerupper(s);


    // int t=pallindrome(s,l);
    // if(t)
    //     cout<<"PALINDROME\n";
    // else
    //     cout<<"NOT PALINDROME\n";

    // rev(s,l);

//     prefix(s,l);
//     sufix(s,l);
//     return 0;
// }

// int len(char s[]){
//     int i=0;
//     while(s[i]!='\0'){
//         i++;
//     }
//     return i;
// }

// void lowerupper(char s[]){
//     int i=0;
//     while(s[i]!='\0'){
//         if(s[i]>='A'&&s[i]<='Z'){
//         s[i]+=32;
//         }
//         else if(s[i]>='a'&&s[i]<='z')
//         s[i]-=32;
//         i++;
//     }
//     cout<<s<<endl;
// }
// int pal(char s[],int l){
//     int i;
//     for( i=0;i<l;i++){
//         if(s[i]!=s[l-i-1])
//             return 0;
//     }
//     return 1;
// }

// void rev(char s[],int l){
//     string r="";
//     for(int i=l-1;i>=0;i--)
//         r=r+s[i];

//     cout<<r<<endl;
// }

// void concatenate(char s1[],char s2[]){
//     int i=0;
//     while(s2[i]!='\0'){
//         s1+=s2[i];
//     }
//     cout<<s1<<endl;
// }

// void prefix(char s[],int l){
//     for(int i=0 ; i<l-1 ; i++){
//         for(int j=0 ; j<=i ;j++){
//         cout<<s[j];
//         }
//         cout<<endl;

//     }
// }

// void sufix(char s[] , int l){
//     for(int i=l ; i<0 ; i--){
//         for(int j=l ; j>=i ;j--){
//         cout<<s[j];
//         }
//         cout<<endl;

//     }
// }


// int main(){
//     string s;
//     getline(cin,s);
//     int dat[25]={0};
//     int n=s.length();
//     int i;
//     while(s[i]!='\0'){
//         dat[s[i]-'a']++;
//         i++;
//     }
//     for(int i=0;i<25;i++){
//         if(dat[i]!=0)
//             cout<< char('a'+i)<<dat[i]<<" ";
//     }
// }


// int main(){
//     string s;
//     char c[100];
//     getline(cin,s);
//     int i=0,j=0;
//     int n=s.length();
//     for(int i=0;i<n;i++){
//         if(s[i]==' ')
//             s[i]-=' ';
//         else if(s[i]!=' ')
//             break;
//     }
//     cout<<s;
// }


// int main()
// {
//     int n;
//     cout<<"enter no. of cities\n";
//     cin>>n;
//     char city[10][10];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>city[i];
//     }
//     char t[20];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//         if(strcmp(city[j],city[j+1])>0)
//         {
//         strcpy(t,city[j]);
//         strcpy(city[j],city[j+1]);
//         strcpy(city[j+1],t);
//         }
//     }
//     }
//      for (int i = 0; i < n; i++)
//     {
//        cout<<city[i]<<"  ";
//     }
// }