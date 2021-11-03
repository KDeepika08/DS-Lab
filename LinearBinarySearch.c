//Linear Search using non recursion approach
#include<stdio.h>
int LinearSearch(int[],int,int);
int main(){
    int n,a[10],key,i,flag=0;
    printf("Enter the no.of elements in an array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key element");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at %d position",i+1);
    }
    else{
        printf("Element not found");
        }
    
}

//Linear Search using recursions
#include<stdio.h>
#include<stdlib.h>
int LinearSearch(int a[],int,int);

void main(){
    int a[10],i,n,result,key;
    printf("Enter the no.of elements in an array");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key element");
    scanf("%d",&key);
    result=LinearSearch(a,n,key);
    if(result!=0){
        printf("Element is found at %d position",result);
    }
    else{
        printf("Element not found");
    }
}
int LinearSearch(int a[], int n, int key){
    if(n>=0){
        if(a[n-1] == key){
            return n;
        }
        else{
            return LinearSearch(a, n-1, key);
        }
 
        n--;
    }
}*/

//Binary Search using non recursion approach
#include<stdio.h>
int BinarySearch(int[],int,int);
int main(){
    int a[10],n,i,key,result;
    printf("Enter the no.of elements in an array");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key element");
    scanf("%d",&key);
    result=BinarySearch(a,n,key);
    if(result==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at %d position",result+1);
    }

}
int BinarySearch(int a[],int n,int key){
    int low,mid,high;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            low = mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

//Binary Search using recursion 
#include<stdio.h>
int BinarySearch(int[],int,int,int,int);
int main(){
    int a[10],n,i,key,result;
    printf("Enter the no.of elements in an array");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key element");
    scanf("%d",&key);
    result=BinarySearch(a,n,key,0,n-1);
    if(result==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at %d position",result+1);
    }
}
int BinarySearch(int a[],int n,int key,int low,int high){
    int mid;
    if(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            return BinarySearch(a,n,key,mid+1,high);
        }
        else if(a[mid]>key){
            return BinarySearch(a,n,key,low,mid-1);
        }
    }
    return -1;
}