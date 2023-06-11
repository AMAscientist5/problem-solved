
    for(int i=n; i>=pos+1; i--)
    {
       arr[i] = arr[i-1];
    }

    arr[pos] = val;

    for(int i=0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }