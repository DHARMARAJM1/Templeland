#include <stdio.h>
int main(void) 
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n, a[100];
	    scanf("%d", &n);
	    for(int i=0; i<n; i++)
	    {
	        scanf("%d", &a[i]);
	    }
	    if (n%2==0) 
	    {
	        printf("no\n");
	    }
	    else 
	    {
	        int c=0;
    	    for(int i=0; i<=n/2; i++) 
    	    {
    	        if(a[i] != a[n-1-i] || a[i] != i+1) 
    	        {
    	            printf("no\n");
    	            c = 1;
    	            break;
    	        }
    	    }
    	    
    	    if (!c)
    	        printf("yes\n");
	    }
	}
	return 0;
}
