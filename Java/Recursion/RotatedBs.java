public class RotatedBs {
    public static void main(String[] args) {
        // find in rotated sorted array 
        int[] nums = {5,6,7,8,9,1,2,3};
        System.out.println(ans(nums, 3));
    }
    static int ans (int[] arr, int k){//k is target
        return helper(arr, k, 0, arr.length-1);
    }

    static int helper(int[] arr, int k, int s, int e){
        int mid = s+(e-s)/2;
        if(s>e) return -1;
        if(arr[mid]==k) return mid;

        if(arr[s]<arr[mid]){
            if(arr[s]<=k && arr[mid]>k) return helper(arr, k, s, e-1);
            //else
            return helper(arr, k, mid+1, e);
        }
        else{
            if(k>arr[mid] && k<=arr[e]) return helper(arr, k, mid+1, e);
            //else
            return helper(arr, k, s, mid-1);
        }
    }
}
