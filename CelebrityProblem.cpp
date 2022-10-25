#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    priority_queue<int> max_h;
    priority_queue<int,vector<int>,greater<int>> min_h;
    int top=9999999;
    //Function to insert heap.
    void insertHeap(int &num)
    {
        if(max_h.empty() && min_h.empty() && top==9999999)
            top=num;
        else if(num>top)
        {
            if(min_h.size()>max_h.size())
            {
                max_h.push(top);
                min_h.push(num);
                top=min_h.top();
                min_h.pop();
            }
            else
            {
                min_h.push(num);
            }
        }
        else if(num<top)
        {
            if(min_h.size()<max_h.size())
            {
                min_h.push(top);
                max_h.push(num);
                top=max_h.top();
                max_h.pop();
            }
            else
            {
                max_h.push(num);
            }
        }
        else if(num==top)
        {
            if(min_h.size()==max_h.size())
            {
                min_h.push(num);
            }
            else if(min_h.size()>max_h.size())
            {
                max_h.push(num);
            }
            else
            {
                min_h.push(num);
            }
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(max_h.size()==min_h.size())
            return top;
        else if(max_h.size()>min_h.size())
        {
            int k=max_h.top();
            return ((k+top)*1.0)/2;
        }
        else {
            int k=min_h.top();
            return ((k+top)*1.0)/2;
        }
        return top;
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends
