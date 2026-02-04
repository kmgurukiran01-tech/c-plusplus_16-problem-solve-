#include<bits/stdc++.h>
using namespace std;

class solution {
  public:
    void insert(set<int> &s,int x)
    {
        //Write your code here...
        s.insert(x);
    }

    void print_contents(set<int> &s)
    {
        //Write your code here...
        for(auto it=s.begin(); it!=s.end();it++)
        
        
        cout<<*it<<" ";
    }

    void erase(set<int> &s,int x)
    {
        //Write your code here...
        s.erase(x);
    }

    int find(set<int> &s,int x)
    {
        //Write your code here...
        if(s.find(x) != s.end()) {
            return 1;
        }
        else{
            return -1;
        }
    }

    int size(set<int> &s)
    {
        //Write your code here...
       return (int)s.size();
    }
};