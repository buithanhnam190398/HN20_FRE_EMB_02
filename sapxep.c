void TangDan(int a[], int n)
{
    for (i = 0; i < n-1;i++)
    {
        for (j = i+1; j < n;j++)
        {
            if (a[i]>a[j]) 
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
}
void GiamDan(int a[], int n)
{
    for (i = 0; i < n-1;i++)
    {
        for (j = i+1; j < n;j++)
        {
            if (a[i]<a[j]) 
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
}


