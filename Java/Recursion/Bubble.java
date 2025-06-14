import java.util.Arrays;

public class Bubble {
    public static void main(String[] args) {
        int[] arr = {5,4,3,2,1};
        sort(arr);
        System.out.println(Arrays.toString(arr));
    }
    static void sort(int[] arr){
        helper(arr, arr.length-1, 0);
    }
    static void helper(int[] arr, int i, int j){
        if(i==0) return;
        if(j<i) {
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
            helper(arr, i, j+1);
        }
        else{
            helper(arr, i-1, 0);
        }
    }
}
