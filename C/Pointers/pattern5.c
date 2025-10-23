int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || j==n-1 || i==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}

