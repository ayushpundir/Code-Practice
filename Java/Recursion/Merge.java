import java.util.Arrays;

public class Merge {
    public static void main(String[] args) {
        int[] nums = {8,3,4,15,5,6};
        int[] ans = mergesort(nums, 0 , nums.length);
        System.out.println(Arrays.toString(ans));
    }
    static int[] mergesort(int[] a, int s, int e){

        if(e-s==1) return new int[]{a[s]};

        int[] left = mergesort(a, s, (s+e)/2);
        int[] right = mergesort(a, (s+e)/2, e);

        return merger(left, right);
    }
    static int[] merger (int[] l, int[] r){
        int i = 0;
        int j = 0;
        int k = 0;

        int[] ans = new int[l.length + r.length];

        while(i<l.length && j<r.length){
            if(l[i]<=r[j]){
                ans[k] = l[i];
                i++;
            }
            else{
                ans[k]=r[j];
                j++;
            }
            k++;
        }
        while(i<l.length){
            ans[k]=l[i];
            i++;
            k++;
        }
        while(j<r.length){
            ans[k]=r[j];
            j++;
            k++;
        }
        return ans;
    }
}
