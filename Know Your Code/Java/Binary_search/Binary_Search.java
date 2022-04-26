public class Binary_Search {
    static int binarysearch(int[] arr,int target){
        int start=0;
        int end=arr.length-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]<target){
                start=mid+1;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] arr={1,4,8,11,45,67,89,99};
        System.out.println(binarysearch(arr,4));
    }
}

