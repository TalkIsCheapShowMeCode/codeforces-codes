// // <!-- https://codeforces.com/problemset/problem/732/A -->
// A. Buy a Shovel
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Polycarp urgently needs a shovel! He comes to the shop and chooses an appropriate one. The shovel that Policarp chooses is sold for k burles. Assume that there is an unlimited number of such shovels in the shop.

// In his pocket Polycarp has an unlimited number of "10-burle coins" and exactly one coin of r burles (1 ≤ r ≤ 9).

// What is the minimum number of shovels Polycarp has to buy so that he can pay for the purchase without any change? It is obvious that he can pay for 10 shovels without any change (by paying the requied amount of 10-burle coins and not using the coin of r burles). But perhaps he can buy fewer shovels and pay without any change. Note that Polycarp should buy at least one shovel.

// Input
// The single line of input contains two integers k and r (1 ≤ k ≤ 1000, 1 ≤ r ≤ 9) — the price of one shovel and the denomination of the coin in Polycarp's pocket that is different from "10-burle coins".

// Remember that he has an unlimited number of coins in the denomination of 10, that is, Polycarp has enough money to buy any number of shovels.

// Output
// Print the required minimum number of shovels Polycarp has to buy so that he can pay for them without any change.

// Examples
// inputCopy
// 117 3
// outputCopy
// 9
// inputCopy
// 237 7
// outputCopy
// 1
// inputCopy
// 15 2
// outputCopy
#include<bits/stdc++.h>
int i,k,n;main(){for(scanf("%d%d",&n,&k);n*++i%10&&(n*i-k)%10;);printf("%d",i);}
// #include <bits/stdc++.h>
// using namespace std;
// int unit(int num)
// {
//     while (num / 10 != 0)
//     {
//         num = num % 10;
//         //cout << num << "n" << endl;
//     }
//     return num;
// }
// int main()
// {
//     int k, r, i=1;
//     int rem,flag=0,count=0;
//     cin >> k >> r;
//     int n=unit(k);
    
//         while(unit(n*i)!=r)
//         {
//             if(unit(n*i)==0)
//             {
//                 cout<<i;
//                 flag=1;
//                 break;

//             }
//             i++;
//          }
//          if(!flag)
//          {
//             cout<<i<<endl;
//          }
//     return 0;
// }