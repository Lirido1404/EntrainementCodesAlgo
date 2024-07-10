#include <stdio.h>
#include <string.h>

int main() {
   
    int result = 0;
    int arr[32] = {2,5,8,4};

    for(int i=0;i<5;i++){
        result += arr[i];
    }

    printf("%d",result);

    
    return 0;
}
