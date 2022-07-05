class Solution {
    public boolean isMonotonic(int[] nums) {
        int len=nums.length;
        int pd=0,nd=0,zd=0;
        for(int i=0;i<len-1;i++){
            int diff=nums[i]-nums[i+1];
            if(diff>0){
                pd++;
            }else if(diff<0){
                nd++;
            }else{
                zd++;
            }
        }
        if(nd+zd==len-1||pd+zd==len-1) return true;
        else return false;
    }
}
// Brute force solution