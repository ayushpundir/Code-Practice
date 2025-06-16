import java.util.ArrayList;

class Practice{
    public static void main(String[] args) {
        int[] nums = {1,2,3,4,5,5,6,7,5,9};
        int target = 5; // find all index of 5;
        ArrayList<Integer> list = find(nums, target, 0); // first call
        System.out.println(list);
    }
    static ArrayList<Integer> find(int[] a, int k, int i){
        ArrayList<Integer> mylist = new ArrayList<>();
        if(i==a.length) return mylist;

        if(a[i]==k) mylist.add(i);

        ArrayList<Integer> ansFromBelowCalls = find(a, k, i+1);

        mylist.addAll(ansFromBelowCalls);

        return mylist;
    }
}