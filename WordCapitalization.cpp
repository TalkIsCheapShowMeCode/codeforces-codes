// // https://codeforces.com/problemset/problem/281/A
// A. Word Capitalization
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

// Note, that during capitalization all the letters except the first one remains unchanged.

// Input
// A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

// Output
// Output the given word after capitalization.

// Examples
// inputCopy
// ApPLe
// outputCopy
// ApPLe
// inputCopy
// konjac
// outputCopy
// Konjac

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str.size()<=1000)
    {
        str[0]=toupper(str[0]);
        cout<<str;
    }
    else
    {
        exit(1);
    }
    return 0;
}