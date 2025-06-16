import java.util.ArrayList;

public class SubsetsWithDublicates {
    public static void main(String[] args) {
        int[] arr= {1,2,2};
        //expected output [][1][2][1,2][2,2][1,2,2]
        System.out.println(power(arr)); // power return a 2D list
    }
    static ArrayList<ArrayList<Integer>> power(int[] arr){
        ArrayList<ArrayList<Integer>> outer = new ArrayList<>();
        outer.add(new ArrayList<>());
        int end = 0;
        for(int i = 0;i<arr.length;i++){
            int start = 0;

            if(i>0 && arr[i]==arr[i-1]){
                start=end+1;
            }
            end = outer.size()-1;
            int n = outer.size();
            for(int j = start;j<n;j++){
                ArrayList<Integer> toManageNewElements = new ArrayList<>(outer.get(j));
                toManageNewElements.add(arr[i]);
                outer.add(toManageNewElements);
            }
        }
        return outer;
    }
}

//phele maine ye usse case ke liye kiya ki agar dublicates nhi h toh, ek bar m ho gaya