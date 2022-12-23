#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<'a'-'A'<<endl; // It means A lags a by 32!
    string str="Hey user CHange MY caSE TO anY OnE!!!" ;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
    }
    cout<<str<<endl;
    
    // Now, convert this back to lowerCase()
    
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='A' && str[i<='Z'])
        str[i]=str[i]+32;
    }
    cout<<str<<endl;
    
    //Same thing we can do by using transform()
    string s="tranSAFORM me TO anY OnE CasE";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<"\n"<<s<<endl;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    
//Q1: Form the greatest Number using the given String
    string num="12393487";
    sort(num.begin(), num.end(), greater<int>());
    cout<<"\nThe Greatest possibe number= "<<num<<endl;
    
//Q2: Display the char with max frequency/occurence from a given String

string S="lisajdfoiewjifjweimfiwejfoicjewjjj";
char ans;
int i,max_freq;
int freq[26]; //Taking for all 26-alphabets;
for(i=0;i<26;i++)
{
    freq[i]=0;//Initializing all indexes with 0
}

for(i=0; i<S.length(); i++)
{
    freq[S[i]-'a']++; // It means [0]->a, [1]->b, [2]->c......Storing thier respective frequency!
}

max_freq=0;
for(i=0; i<26; i++)
{
    if(freq[i]>max_freq)
    {
    max_freq=freq[i];
    ans='a'+i; //For geeting back the original char.
    }
    
}
cout<<"Max Frequency = "<<max_freq<<endl;
cout<<"Character which occured max times = "<<ans<<endl;
    
}
