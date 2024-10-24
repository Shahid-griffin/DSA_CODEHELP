/*the idea is to find the beeter solution then o(Log n)
suppose you were given an array now  you have to figure out the elemnt but no ending pt is gievn
so we firt try to find a subset in which elet might be there for this we will do exp 
firt check if arr[i]== lkey
else while( arr[i]<key) { i= i*2;
this will give us an subset (i/2, i) now we can do bs on this array }*/


bool bs(int *arr, int i, int j, int key)
{
    while(i<=j){
        int mid= i+(j-i)/2;

        if( arr[mid]==key){
            return true;
        }else if( arr[mid]> key){
            j= mid-1;
        }else{
            i= mid+1;
        }
         
    }
}

int exps(int *arr,int key){
    if( arr[0]==key){
        return arr[0];
    }
    
    //n =size of arr
    int i=1; 
    while(i<n &&arr[i]<key){
        i=i*2;
    }// n  size
    return bs(arr,i/2,min(i,n-1), key);
}

// case in real life when infinite array id given 

int exp( vector<int> arr,int  key ){
    int i=0;j=1;
    if(arr[i]==key){
        return i;
    }
    while(j<key && j<=key){
        i=j;
        j=j*2;
    }

    bs(arr, i,j , key);
}