int square(int y);

int main()
{
    int x;
    for(x=1;x<=10;x++)
        {
            printf("%d\n\n",square(x));
        }
}
int square(int y)
{
   return y*y;
}
