//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>data;
        for(int index=0;index<n;index++)
        {
            data.push(index);
        }
        
        while(data.size()>1)
        {
            int a=data.top();
            data.pop();
            int b=data.top();
            data.pop();
            
            if(M[a][b]==1)
            {
                data.push(b);
            }
            else
            {
                data.push(a);
            }
        }
        int ans=data.top();
        
        int zeroCount=0;
        for(int index=0;index<n;index++)
        {
            if(M[ans][index]==0)
            {
                zeroCount++;
            }
        }
        if(zeroCount!=n)
        {
            return -1;
        }
        
        int oneCount=0;
        for(int index=0;index<n;index++)
        {
            if(M[index][ans]==1)
            {
                oneCount++;
            }
        }
        if(oneCount!=n-1)
        {
            return -1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends