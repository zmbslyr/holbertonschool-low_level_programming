//array's value generator//
void rdm(int ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        ar[i]=rand()%(99-0+1)+0;
    }
}
