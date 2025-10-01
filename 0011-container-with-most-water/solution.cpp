class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(), width,height1 ,rp=n-1,lp=0,currentcontainer ,maxarea=0;
            while(lp<rp)
            {
                width=rp-lp;
                height1=min(height[rp],height[lp]);
                currentcontainer=width*height1;
                maxarea=max(maxarea,currentcontainer);
                height[lp]<height[rp]?lp++: rp-- ;

            }
             return maxarea ;
        
    }
};
