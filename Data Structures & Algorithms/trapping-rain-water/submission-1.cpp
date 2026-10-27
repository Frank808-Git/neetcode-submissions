class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int rprev = 0, lprev = 0;

        int water = 0;

        while (l < r)
        {
            if (height[l] < lprev)
                water += (lprev - height[l]);
            else
                lprev = height[l];

            if (height[r] < rprev)
                water += (rprev - height[r]);
            else
                rprev = height[r];
            
            if (height[l] < height[r])
                ++l;
            else
                --r;
        }
        return water;
    }
};
