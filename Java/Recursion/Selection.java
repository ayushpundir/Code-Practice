import java.util.Arrays;

public class Selection {
    public static void main(String[] args) {
        int[] arr = {5,4,3,2,1};
        sort(arr, arr.length-1, 0, 0);
        System.out.println(Arrays.toString(arr));
    }
    static void sort(int[] arr, int i, int j,int max){
        if(i==1) return;
        if(j<=i){
        if(arr[j]>arr[max]){
            sort(arr, i, j+1, j);
        }
        else{
            sort(arr, i, j+1, max);
        }
    }
        else{
            if(max!=i){
            arr[max]=arr[max]^arr[i];
            arr[i]=arr[max]^arr[i];
            arr[max]=arr[max]^arr[i];
            }
        sort(arr, i-1, 0, 0);
        }
        
    }
}
