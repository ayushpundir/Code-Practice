public class Issorted {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5};
        System.out.println(isSorted(arr));
    }
    static boolean isSorted(int[] arr){
        return helper(arr, 0);
    }
    // static boolean helper(int [] arr, int i){
    //     if(i==arr.length-1) return true;
    //     if(arr[i]>arr[i+1])return false;

    //     return helper(arr, i+1);
    // }
    
    static boolean helper(int[] nums, int i){
        if(i==nums.length-1) return true;

        return nums[i]<nums[i+1] && helper(nums, i+1);
    }
}
