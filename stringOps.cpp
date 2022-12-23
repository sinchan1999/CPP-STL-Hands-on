#include <bits/stdc++.h>
using namespace std;

int main()
{
   //Reapting a Single char!
    string rep(5,'S');
    cout<<"Repeated string : "<<rep<<endl;
/*
//Taking input with spaces.
    string str;
    cout<<"Enter your sentence: ";
    getline(cin, str);
    cout<<"\nInput using getline(): "<<str<<endl;
    cout<<"Enter your sentence again: ";
    cin>>str;
    cout<<"\nInput taken without getline():"<<str<<endl;
*/
    
            //Basic Ops on STRING!!!
            
    //Joinnig two strings
    string s1,s2,add;
    s1="Water";   s2="melon";
    add=s1+s2;
    cout<<"\nBy adding: "<<add<<endl;
    s1.append(s2); // OR s1=s1+s2;
    cout<<"Using append() on s1: "<<s1<<endl;
    
    //Clearing a String & checking if empty
    string abc="abcdefghijklmnopqrstuvwxyz";
    abc.clear();
    cout<<"\nabc= "<<abc<<endl;
    cout<<abc.empty()<<endl;
    
    //Comparing two Strings
    s1="abc";
    s2="ABC";
    cout<<s2.compare(s1)<<endl; // It will return 0 only if both are same lexicographically!
    
    //DELETION
    s1="Dinosaurs";
    cout<<"\n"<<s1.erase(4,4)<<endl;//Starting from [4] erase 4 elements!
    cout<<s1.erase(2,-1); //Starting from index[2] till end erase all
    
    
    //FINDING A SUBSTRING/STRING
    
    /*find() will return if the exact string is found with its first/starting index. Else it will give a Garbage value*/
    s1="Ragnasauras";
    cout<<"\n"<<s1.find("nas")<<endl;
    cout<<s1.find("sauce")<<endl;
    cout<<s1.find("a")<<endl;
    cout<<s1.find("r")<<endl;
    
    
    //INSERTION & size
    s1="elephant";
    cout<<"\n"<<s1.insert(3,"BIG")<<endl;
    cout<<s1.insert(0,"SCARY")<<endl;
    cout<<"Length of the String: "<<s1.length()<<endl; //OR s1.size()
    cout<<s1.insert(s1.length(),"LAST")<<endl;
    
    
    //Extracting a substring!
    s1="Ahemdabad";
    cout<<"\n"<<s1.substr(3,-1)<<endl;
    
    //String to Integer Conversion & Vice-Versa
    s1="999";
    int num=stoi(s1);
    num=num+1;
    cout<<"\n"<<num<<endl;
    cout<<to_string(num)+" --Thousand"<<endl;
    
    
    //SORTING A STRING lexicographically
    s1="asldjflksadfmwenfoiwnfkmlsd";
    sort(s1.begin(),s1.end());
    cout<<"\n"<<s1;
    
}
