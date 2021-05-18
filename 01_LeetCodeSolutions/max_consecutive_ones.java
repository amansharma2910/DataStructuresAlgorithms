class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max = 0;
        int numOnes = 0;
        for(int i: nums){
            if(i==1){
                numOnes++;
                if(numOnes > max)
                    max = numOnes;
            }else{
                numOnes = 0;
            }
        }
        return max;
    }
}