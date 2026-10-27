class Solution {
public:
    int trap(vector<int>& h) {
        int l = 0;
        int r = h.size() - 1;

        int lmax = 0, rmax = 0;

        int water = 0;

        while (l < r)
        {
            if (h[l] < h[r])
            {
                lmax = max(lmax, h[l]);
                water += lmax - h[l];
                ++l;
            }
            else
            {
                rmax = max(rmax, h[r]);
                water += rmax - h[r];
                --r;
            }
        }
        return water;
    }
};
