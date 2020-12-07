#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    printf("Enter the value of watermelon weight: ");
    scanf("%d",&w);

    if(w<=2 || w%2!=0)
    {
        printf("No");
    }
    else
        printf("Yes");
    return 0;
}
