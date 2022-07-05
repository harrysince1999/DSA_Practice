// First and last occurrences of X GFG 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int first(vector<int> &arr, int n, int x)
    {
        int s=0, e=n-1, m=(s+e)/2;
        int ans=-1;
        while(s<=e)
        {
            if(x == arr[m])
            {
                ans=m;
                e=m-1;
            }
            else if(x < arr[m])
            {
                e= m-1;
            }
            else
            {
                s = m+1;
            }
            m= (s+e)/2;
        }
        return ans;
    }
    int second(vector<int> &arr, int n, int x)
    {
        int s=0, e=n-1, m=(s+e)/2;
        int ans=-1;
        while(s<=e)
        {
            if(x == arr[m])
            {
                ans=m;
                s=m+1;
            }
            else if(x < arr[m])
            {
                e= m-1;
            }
            else
            {
                s = m+1;
            }
            m = (s+e)/2;
        }
        return ans;
    }
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        vector<int> ans;
        ans.push_back(first(arr,n,x));
        ans.push_back(second(arr,n,x));
        if(ans[0]==-1)
            ans.pop_back();
        return ans;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends
