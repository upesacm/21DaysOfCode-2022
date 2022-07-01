/* suppose we have--
       1 2 3          sorted array
       i   j          1+i=3-j for steps to be equal; i+j=3-1=2, so initially we are having steps=0
       i   j          if(j>i) steps=steps+(j-i)---> 0+(3-1)=0+2=2   now i++,j--
        i,j           if(j>i) is not true so it will stop*/
class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        //sorting the array
        sort(nums.begin(), nums.end());
        
        //calculating the number of steps
        int i=0,j=nums.size()-1; //taking two pointers pointing one at the beg and one at the end
        int s=0;
        while(i<j)
        {
            s+= nums[j]-nums[i];
            i++;
            j--;
        }
        return s;
    }
};