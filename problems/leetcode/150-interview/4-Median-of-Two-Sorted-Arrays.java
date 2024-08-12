class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length, n = nums2.length, i = 0, j = 0;
        int[] arr = new int[m+n];
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                arr[i+j] = nums1[i++];
            } else {
                arr[i+j] = nums2[j++];
            }
        }
        while (i < m) {
            arr[i+j] = nums1[i++];
        }
        while (j < n) {
            arr[i+j] = nums2[j++];
        }
        int l = m+n;
        if (l % 2 != 0) {
            return (double)arr[l/2];
        }
        return ((double)arr[l/2-1] + (double)arr[l/2])/2;
    }
}