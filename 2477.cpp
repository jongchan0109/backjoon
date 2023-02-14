#include<iostream>
using namespace std;

int main(void)
{
    int n,num,sum=0;cin>>n;
    int max_row=0, max_row_idx=0, max_col=0,max_col_idx=0,col,row;
    int arr[6];
    for(int i=0;i<6;i++)
    {
        cin>>num>>arr[i];
        
        switch(num)
        {
            case 1:
            case 2:
                if(arr[i]>max_col)
                {
                    max_col=arr[i];
                    max_col_idx=i;
                }
                break;
            case 3:
            case 4:
                if(arr[i]>max_row){
                    max_row=arr[i];
                    max_row_idx=i;
                }
                break;
        }
    }
    sum=max_row*max_col;

    if(max_row_idx!=0&&max_row_idx!=5)
    {
        col = max_col-min(arr[max_row_idx-1],arr[max_row_idx+1]);
        
    }
    else if(max_row_idx==0)
    {
        col = max_col-min(arr[1],arr[5]);
    }
    else{
        col = max_col-min(arr[0],arr[4]);
    }

    if(max_col_idx!=0&&max_col_idx!=5)
    {
        row = max_row-min(arr[max_col_idx-1],arr[max_col_idx+1]);
    }
    else if(max_col_idx==0)
    {
        row = max_row-min(arr[1],arr[5]);
    }
    else{
        row = max_row-min(arr[0],arr[4]);
    }
    
    cout<<max_row<<" "<<max_col<<endl;
    cout<<row<<" "<<col<<endl;
    sum-=row*col;
    cout<<sum*n<<endl;
    return 0;

}
