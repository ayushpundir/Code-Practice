import java.util.ArrayList;

public class SubsetRec {
    public static void main(String[] args) {
        int[] arr = {1,2,3};//we have to find all the subset of this array 
        ArrayList<Integer> temp = new ArrayList<>();
        ArrayList<ArrayList<Integer>> ans = power(arr, 0, temp);
        System.out.println(ans);
    }
    static ArrayList<ArrayList<Integer>> power(int[] arr, int i, ArrayList<Integer> current){
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        if(i==arr.length){
            ans.add( new ArrayList<>(current));
            //in above line we are adding an entire list in our array not just individual integers
            return ans; 
        }
        //include 
        current.add(arr[i]);
        ans.addAll(power(arr, i+1, current));
        /* yaha per ans m kya add ho raha h power a list return karega jo contain karegi list
        aur hum uss list ke emements (uss list ke elements list hi h) apni ans m add karange 
        toh yaha bhi hum list m list add kar rahe h */
        current.remove(current.size()-1);
        ans.addAll(power(arr, i+1, current));

        return ans;
    }
}
