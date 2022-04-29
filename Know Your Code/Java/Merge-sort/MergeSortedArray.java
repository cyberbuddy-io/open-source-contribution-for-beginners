package com.company;

import java.util.Arrays;

public class MergeSortedArray {
    public static void main(String[] args) {
        int[] nums1 = {0};
        int[] nums2 = {1};
        int m = 0;
        int n = 1;
        mergeArray(nums1, nums2, m, n);
        System.out.println(Arrays.toString(nums1));
    }

    private static void mergeArray(int[] nums1, int[] nums2, int m, int n) {
        if (nums2.length != 0) {
            int p = 0;
            for (int i = m; i < nums1.length; i++) {
                nums1[i] = nums2[p];
                p++;
            }
            for (int i = 0; i < nums1.length - 1; i++) {
                for (int j = i + 1; j > 0; j--) {
                    if (nums1[j] < nums1[j - 1]) {
                        int temp = nums1[j];
                        nums1[j] = nums1[j - 1];
                        nums1[j - 1] = temp;
                    } else {
                        break;
                    }
                }
            }
        }
    }
}
