class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size() + nums2.size();
        int pos = len / 2;
        double ret;
        for(int i = 0,j = 0;i < nums1.size() || j < nums2.size();)
        {
            if(i + j == pos)
            {
                if(nums1.size() == 0)
                    ret = nums2[j];
                else if(nums2.size() == 0)
                    ret = nums1[i];
                else if(i == nums1.size())
                    ret = nums2[j];
                else if(j == nums2.size())
                    ret = nums1[i];
                else
                    ret = min(nums1[i],nums2[j]);
                if(len % 2 == 0)
                {
                    if(i == 0)
                        ret = (ret + nums2[j - 1]) / 2;
                    else if(j == 0)
                        ret = (ret + nums1[i - 1]) / 2;
                    else
                        ret = (ret + max(nums1[i - 1],nums2[j - 1])) / 2;
                }
                return ret;
            }
            if(i == nums1.size())
                j++;
            else if(j == nums2.size())
                i++;
            else if(nums1[i] > nums2[j])
                j++;
            else
                i++;
                
        }
    }
};