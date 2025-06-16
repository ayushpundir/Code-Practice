import java.util.Arrays;

public class QuickSortRevision {
    public static void main(String[] args) {
        int[] arr= {5,4,3,2,1};
        quick(arr, 0, arr.length-1);
        System.out.println(Arrays.toString(arr));
    }
    static void quick(int[] arr, int s, int e) {
        if(s>=e) return;

        int mid = (s+e)/2;
        int pivot = arr[mid];

        int low = s, high = e;
        while(low<=high){
            while(arr[low]<pivot) low++;
            while(arr[high]>pivot) high--;

            if(low<=high){
                int temp = arr[low];
                arr[low] = arr[high];
                arr[high] = temp; 
                low ++;
                high--;
            }
        }
        quick(arr, s, mid-1);
        quick(arr, mid+1, e);
    }
}
