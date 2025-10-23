// 0000000
//  111111
//   22222
//    3333
//     444
//      55
//       6
int main(){
    int n=7;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}

