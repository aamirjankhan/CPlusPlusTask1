#include <iostream>
using namespace std;
int a[]={4,2,78,1,9,11,6};
int size= sizeof(a)/ sizeof(a[0]);

void display(int a[]);

int Max(int a[] ,int i){
    int temp=i;
    for (i+1; i < size ; ++i) {
        if(a[i]>a[temp]){
            temp=i;
        }
    }
    return temp;
}

int Min(int a[] ,int i){
    int temp=i;
    for (i+1; i < size ; ++i) {
        if(a[i]<a[temp]){
            temp=i;
        }
    }
    return temp;
}

void swap(int a[], int i, int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void selectionsort(int ary[]){
	for (int i=0; i<size;i++){
		int j=Min(ary , i);
		swap(ary,i,j);
	}
}

void BubbleSort(int ary[]){
    bool loop= true;
    while (loop){
        loop= false;
        for (int i = 0; i < size-1; ++i) {
            if(ary[i]>ary[i+1]){
                swap(ary,i,i+1);
                loop= true;
            }
        }
    }
}

void insertionSort(int ary[]){
    int i,j,temp;
    for(i=1;i<size;i++){
        temp=ary[i];
        j=i-1;

        while((temp>ary[j])&&(j>=0)){
            ary[j+1]=ary[j];
            j=j-1;
        }
        ary[j+1]=temp;
    }
    cout<<"\n After Sorting : "<<endl;
    display(ary);
}

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
//        display(arr);
    }

    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r){
    if (l < r)
    {
        
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void display(int a[]){
    for (int i=0;i<size;++i){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

int main() {
    cout<<"Size of Array : "<<size<<endl;
//    insertionSort(a);
	display(a);
//	selectionsort(a);
    mergeSort(a,0,size-1);
    display(a);
    return 0;
}
