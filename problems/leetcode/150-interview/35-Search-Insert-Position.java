import java.util.Arrays;

public class Solution {
    public int searchInsert(int[] nums, int target) {
        int st = 0;
        int nd = nums.length - 1;
        while (st <= nd) {
            int mid = st + (nd - st) / 2;
            if (target == nums[mid]) 
                return mid;
            else if (target > nums[mid]) 
                st = mid + 1;
            else 
                nd = mid - 1;
        }
        return st;
    }
}