class Solution {
public:
    int trap(vector<int>& a) {
        int s=0,e=a.size()-1,ans=0;
        int left=0,right=0;
        while(s<e){
            if(a[s]<a[e]){
                left=max(left,a[s]);
                ans+=max(0,left-a[s]);
                s++;
            }
            else{
                right=max(right,a[e]);
                ans+=max(0,right-a[e]);
                e--;
            }
            //cout<<ans<<endl;
        }
        return ans;
    }
};
