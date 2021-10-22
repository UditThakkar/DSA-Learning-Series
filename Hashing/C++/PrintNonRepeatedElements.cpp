//link to prob
//https://practice.geeksforgeeks.org/problems/print-distinct-elements-1587115620/1/?track=DSASP-Hashing&batchId=154



class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        vector<int> v;
        unordered_map<int,int> s;
        for(int i = 0;i<n;i++){
            s[arr[i]]++;
        }
        for(int i = 0;i<n;i++){
            if(s[arr[i]]==1){
                v.push_back(arr[i]);
            }
        }
        
        return v;
    }
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    vector<int> v;
	    Solution obj;
	    v = obj.printNonRepeated(arr,n);
	    
	    for(int i=0;i<v.size();i++)  
	        cout<<v[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}
