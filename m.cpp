#include<bits/stdc++.h>
using namespace std;
void selection_Sort(int arr[], int n) {
    for (int i=0;i<n-2;i++) {
        int min=i;
        for (int j=i;j<n-1;j++) {
            if (arr[j]<arr[min]) {
                min=j;
            }

        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;


    }
}

void bubble_Sort(int arr[], int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}

void insertion_Sort(int arr[], int n) {
    int i,tem,j;
    for (i=0;i<n-1;i++) {
         i=j;
        while(j>0 && arr[j-1]>arr[j]) {
            tem=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=tem;
            j--;
        }

    }
}



int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
     bubble_Sort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;

}
