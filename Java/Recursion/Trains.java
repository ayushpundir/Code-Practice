import java.util.ArrayList;

public class Trains {
    /*to check the minimum number of platform required such that no train
    waits at the platform not the total platform used */
    //this code calculates the total number of platform required at least which is wrong
    public static void main(String[] args) {
        int[] arr = {900,940,1210,1215,1500,1800};
        int[] dep = {910,1200,1220,1400,1900,2000};

        ArrayList<Integer> platform = new ArrayList<>();
        platform.add(dep[0]);

        for(int i = 1;i<arr.length;i++){
            boolean updated = false;
            for(int j = 0;j<platform.size();j++){
                if(arr[i]>platform.get(j)){
                    platform.set(j, dep[i]);
                    updated = true;
                    break;
                }
            }
            if(!updated){
                platform.add(dep[i]);
            }
        }
        System.out.println(platform.size());
    }
}
