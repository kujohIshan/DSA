class Solution {
    public void sort012(int[] arr) {
        // code here
        int n = arr.length;
int low = 0, high = n - 1, mid = 0;

while (low <= mid && mid <= high) {
    if (arr[mid] == 0) {
        // swap arr[mid], arr[low]
        int temp = arr[mid];
        arr[mid] = arr[low];
        arr[low] = temp;

        low++;
        mid++;
    } 
    else if (arr[mid] == 2) {
        // swap arr[mid], arr[high]
        int temp = arr[mid];
        arr[mid] = arr[high];
        arr[high] = temp;

        high--;
    } 
    else if (arr[mid] == 1) {
        mid++;
    }
}
    }
}