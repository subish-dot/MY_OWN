#include<stdio.h>

int main()
{
    int arr[]={1,2,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    int max=0;
    int no_of_jumps=0;

    int curr_index=0,curr_element=arr[0];
    int nxt_index,nxt_element;

    while(curr_index!=size-1)
    {
        int itr=curr_element;
        while(itr)
        {
        if(curr_index+arr[curr_index]>(size-1))
        {
            nxt_index=size-1;
            break;
        }
        else if(max<arr[curr_index+itr])
        {
            max=arr[curr_index+itr];
            nxt_index=curr_index+itr;
        }
        itr--;
        }
        curr_element=arr[nxt_index];
        curr_index=nxt_index;
        no_of_jumps++;
        max=0;
    }

    printf(" no of jumps : %d",no_of_jumps);
}