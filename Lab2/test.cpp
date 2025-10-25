int key
int left 
int right 
int mid = left +(right-left)/2
if(key == mid){
    return mid;
}
elseif(key<mid){
    return left+1
}