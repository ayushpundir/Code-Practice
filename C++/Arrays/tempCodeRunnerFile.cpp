while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]!=0){
            j++;
        }
        else if(arr[i]!=0 && arr[j]==0 && i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }