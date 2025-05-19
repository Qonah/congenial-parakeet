#include <stdio.h>

#define P1 1

#if P1 == 0

int main ()
{
    int n;
    int i;
    scanf("%d", &n);
    int x[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < n; i++)
    {
        if(x[i] % 2 == 0)
        {
            printf("%d ", x[i]);
        }
    }
    
    printf("\n");
    for (i = 0; i < n; i++){
        if(x[i] % 2 != 0)
        {
            printf("%d ", x[i]);
        }
    }


    return 0;
} 




#elif P1 == 1
int main() {
    int n;
    scanf("%d", &n);
    int x[n];

    // Read elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // Print elements in reverse order
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", x[i]);
    }
    printf("\n");  // Add a newline at the end

    return 0;
}


#elif P1 == 2
int main ()
{
    int n;
    scanf("%d", &n);
    int x[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    int k;
    scanf("%d", &k);
    for(int i = 0; i < n; i++)
    {
        if(x[i] == k)
        {
            printf("%d", i);
            break;
        }else 
        {
            continue;
        }
    }
    return 0;
}
#endif