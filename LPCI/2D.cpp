//Arissa Yoshida 04/2021
//https://www.spoj.com/problems/YODANESS/

#include <bits/stdc++.h>

using namespace std;

int sum=0;

//Feito mas com ajuda do GeeksforGeeks
//https://www.youtube.com/watch?v=k9RQh21KrH8&ab_channel=GeeksforGeeks
//Count Inversions in an array | Set 1 (Using Merge Sort)

//Time complexity O(n²)
int getInvCount(int mat[],int n){
  int inv_count =0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(mat[i]>mat[j]){
        inv_count++;
      }
    }
  }
  return inv_count;
}

//Using mergesort time comlexit(nlog(n))

int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid,
          int right);

/* This function sorts the
   input array and returns the
number of inversions in the array */
int mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

/* An auxiliary recursive function
  that sorts the input array and
returns the number of inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {
        /* Divide the array into two parts and
        call _mergeSortAndCountInv()
        for each of the parts */
        mid = (right + left) / 2;

        /* Inversion count will be sum of
        inversions in left-part, right-part
        and number of inversions in merging */
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

/* This funt merges two sorted arrays
and returns inversion count in the arrays.*/
int merge(int arr[], int temp[], int left, int mid,
          int right)
{
    int i, j, k;
    int inv_count = 0;

    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];

            /* this is tricky -- see above
            explanation/diagram for merge()*/
            inv_count = inv_count + (mid - i);
        }
    }

    /* Copy the remaining elements of left subarray
(if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    /* Copy the remaining elements of right subarray
       (if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];

    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

int main(){
  int a,b;
  cin >> a;

  while(a--){
    sum=0;
    cin >> b;
    map < string, int > rec;
    vector<string>s;
    int mat[30010];
    string c;
    for(int i=0;i<b;i++){
      cin >> c;
      rec[c] = i;
      //s.push_back(c);
    }
    for(int i=0;i<b;i++){
      cin >> c;
      /*for(int j=0;j<b;j++){
        if(c==s[j]){
          mat[i] = j;
          break;
        }
      }*/
      s.push_back(c);
    }
    for(int i=0;i<b;i++){
        mat[i] = rec[s[i]];

        }

    cout << mergeSort(mat,b) << endl;
}
return 0;
}
