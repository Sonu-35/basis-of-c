#include<stdio.h>

int main(){
void bubble_sort(int arr [], int n){
    int i,j;
    for(i = 0; j < n-1; i++){
        for(j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j+1] = temp;
            }
        }
    }
}
 return 0;
}