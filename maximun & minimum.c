void f1(int x,int y,int z);

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z)
    {
        printf("x is maximum");
        f1(x,y,z);
    }
}
void f1(int x,int y,int z)
{
    return f1;
}

