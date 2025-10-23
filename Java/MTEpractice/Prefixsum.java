import java.util.Arrays;

public class Prefixsum {
    public static void main(String[] args) {
        int[] arr = {4,6,7,2,8};
        int n = arr.length;
       
        for(int i = 1;i<n;i++){
            arr[i] = arr[i]+arr[i-1];
        }
        System.out.println(Arrays.toString(arr));

        //sum of elements from L=1 to R=3
        int L = 1, R = 3;
        System.out.println(arr[R]-arr[L-1]);
    }
}
