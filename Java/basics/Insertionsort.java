import java.util.Arrays;
class Insertionsort{
    static void insertionsort(int[] arr){
        for(int i = 0;i<=arr.length-2;i++){
            for(int j = i+1; j>0 && arr[j-1]>arr[j];j--){
                swap(arr, j, j-1);
            }
        }
    }
    static void swap (int[] arr, int a, int b){
        int temp = arr[a];
        arr[a]= arr[b];
        arr[b]= temp;
    }
    public static void main(String[] args) {
        int[] nums = {5,4,3,2,1};
        insertionsort(nums);
        System.out.println(Arrays.toString(nums));
    }
}