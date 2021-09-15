// que link: https://practice.geeksforgeeks.org/problems/nth-number-made-of-prime-digits4319/1/

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
        n--;
        int ans[1000]={0};
        memset(ans,0,sizeof(ans));
        int i,j;
        int a[4]={2,3,5,7};
        ans[0]=2;
        ans[1]=3;
        ans[2]=5;
        ans[3]=7;
        int ind=4;
        int digit=0,count=0;
        for(i=22;i<2300;i++){
            int p=i;
            digit=0;
            count=0;
            while(p){
                digit++;
                int r=p%10;
                p=p/10;
                
                for(j=0;j<4;j++){
                    if(r==a[j]){
                        count++;
                        break;
                    }
                }
            }
            if(count==digit){
                ans[ind++]=i;
    
            }
            else{
                continue;
            }
        }
        return ans[n];
    }
};
