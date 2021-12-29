//Sieve of eratosthenes is used to find all the prime numbers in a given range

#include<bits/stdc++.h>

using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for (int i = 0; i < n; i++){
//         arr[i] = 0;
//     }

//     for (int i = 2; i*i <= n; i++){
//         if (arr[i] == 0){
//             for (int j = i * i; j <= n; j = j + i){
//                 arr[j] = 1;
//             }
//         }
//     }

//     for (int i = 2; i < n; i++)
//     {
//         if (arr[i] == 0){
//             cout<<i<<endl;
//         }
//     }
    
//     return 0;
// }


//Prime Factorization using sieve

// int main(){
//     int n;
//     cin>>n;

//     int spf[100];

//     for (int i = 2; i <= n; i++){
//         spf[i] = i;
//     }

//     for (int i = 2; i <= n; i++){
//         if (spf[i] == i){
//             for (int j = i * i; j <= n; j = j + i){
//                 if (spf[j] == j){
//                     spf[j] = i;
//                 }
//             }
//         }
//     }

//     while (n != 1){
//         cout<<spf[n]<<" ";
//         n = n/spf[n];
//     }
//     return 0;
// }


