/*
passed 65/65
beats 100%
0ms
13.89mb
*/
int maxArea(int* height, int heightSize) {
    int left=0,right=heightSize-1,maxarea=0;
    while(left<right){
        int h= height[left]<height[right]? height[left]:height[right];
        int area=h*(right-left);
        if(area>maxarea) maxarea=area;
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return maxarea;
}
