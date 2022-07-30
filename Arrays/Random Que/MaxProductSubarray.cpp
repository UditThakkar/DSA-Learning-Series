class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ma,mi;
	    long long ans;
	    ma = mi = ans = arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i]>=0){
	            ma = max((long long)arr[i],arr[i]*ma);
	            mi = min((long long)arr[i],arr[i]*mi);
	            ans = max(ans,ma);
	        }
	        else{
	            swap(ma,mi);
	            ma = max((long long)arr[i],arr[i]*ma);
	            mi = min((long long)arr[i],arr[i]*mi);
	            ans = max(ans,ma);
	        }
	    }
	    return ans;
	}
};
