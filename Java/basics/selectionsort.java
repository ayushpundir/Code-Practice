import java.util.Arrays;

public class selectionsort {
    public static void main(String[] args) {
        int n = 7;
        int[] arr={77,66,55,44,33,22,11};

        for (int i = 0; i < arr.length-1; i++) {
            int temp = arr[n-1-i];
            arr[n-1-i] = max(arr, n-i);
            arr[i] = temp;
        }
        System.out.println(Arrays.toString(arr));
        
    }
    // static void swap(int a, int b){
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }
    static int max(int[] arr,int last){

        int maxi = Integer.MIN_VALUE;
        for (int i = 0; i < last; i++) {
            
            maxi = Integer.max(maxi, arr[i]);

        }
        return maxi;
    }
}
