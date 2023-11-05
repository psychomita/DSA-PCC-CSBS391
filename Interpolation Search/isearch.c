int interpolationSearch(int arr[], int size, int target) 
{
    int left = 0;
    int right = size - 1;
    while (left <= right && target >= arr[left] && target <= arr[right]) 
    {
        int pos = left + ((double)(right - left) / (arr[right] - arr[left])) * (target - arr[left]);
        if (arr[pos] == target) 
            return pos; // Element found, return its index
        if (arr[pos] < target)
            left = pos + 1;
        else
            right = pos - 1;
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
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    int interpolationResult = interpolationSearch(arr, size, target);
    if (interpolationResult != -1)
        printf("Interpolation search: Element found at index %d\n", interpolationResult);
    else
        printf("Interpolation search: Element not found\n");
    return 0;
}
