//Reverse of a number 

#include<stdio.h>
int main(){
    
    int n ; 
    scanf("%d",&n);
    
    int rev = 0;
    
    while(n!=0){
        int r = n%10;
        rev = rev *10 + r;
        n = n/10;
    }
    
    printf("%d",rev);
    
    return 0;
}

//Pallindrome of a number

#include<stdio.h>
int main(){
    int n ;
    
    scanf("%d",&n);
    
    int rev = 0;
    int original = n;
    
    while(n!=0){
        
        int r = n%10;
        rev = rev *10 + r;
        n = n/10;
    }
    
    if(original == rev){
        printf("Pallindrome");
    }
    else{
        printf("Not a Pallindrome");
    }
    return 0;
}
