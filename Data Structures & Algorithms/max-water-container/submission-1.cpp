class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;

        int lmax = 0, rmax = 0;

        int lmaxi, rmaxi;

        int maxa = 0;

        //Find a bar, if it is bigger than prev, we never need to check any smaller bars in front, we only need to check if the bar is bigger and then see if the area is bigger

        while (l < r)
        {
            if (height[l] > lmax)
            {
                lmaxi = l;
            }
            lmax = max(height[l], lmax);
            if (height[r] > rmax)
            {
                rmaxi = r;
            }
            rmax = max(height[r], rmax);
            
            if (height[l] < height[r])
                ++l;
            else
                --r;

            maxa = max(min(lmax, rmax) * (rmaxi - lmaxi), maxa);
        }

        return maxa;
    }
};
