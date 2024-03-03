/** Getting the max element of a vector */
int getMax(const vector<int>& nums){
    /// Diref is needed since max_element retuns an iterator.
    /// std::vector<int>::itrerator.
    int max = *max_element(nums.begin(), nums.end());
    return max;
    /// Note: iterators pattern needs to implement the 
    /// * operator and the ++ operator. Thus, a poiter is
    /// an iterator but the opposite does not necessarily hold.
}
