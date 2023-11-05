int binarySearch(int arr[], int size, int target) 
{
    int left = 0;
    int right = size - 1;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid; // Element found, return its index
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Element not found
}
int main() 
{
    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    printf("Enter the element to search: ");
    scanf("%d", &target);
   int binaryResult = binarySearch(arr, size, target);
    if (binaryResult != -1)
        printf("Binary search: Element found at index %d\n", binaryResult);
    else 
        printf("Binary search: Element not found\n");
  return 0;
}
