// // https://screenrec.com/share/lOVpFMrXvf
// A. Word
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

// Input
// The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

// Output
// Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

// Examples
// inputCopy
// HoUse
// outputCopy
// house
// inputCopy
// ViP
// outputCopy
// VIP
// inputCopy
// maTRIx
// outputCopy
// matrix

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int upper[]={'Q','W','E','R','T','Y','U','I','O','P','L','K','J','H','G','F','D','S','A','Z','X','C','V','B','N','M'};
    int lower[]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    int u=0,l=0;
    cin >> str;
    if (str.size() <= 100 && str.size() >= 1)
    {
        for(int i=0 ; i<str.size() ; i++)
        {
            for(int j=0 ; j<26 ; j++)
            {
                if(str [i] == lower[j]) l++;
                else if(str[i]==upper[j]) u++;
            }
        }
        // cout<<l<<u;
        if(l==u)
        {
            for(int i=0 ;i<str.size();i++)
            str[i]=tolower(str[i]);
        }
        else if(l>u)
        {
            for(int i=0 ;i<str.size();i++)
            str[i]=tolower(str[i]);
        }
        else
        {
            for(int i=0 ;i<str.size();i++)
            str[i]=toupper(str[i]);
        }
        cout<<str;
    }
    else
        exit(1);
    return 0;
}