public class Solution {
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies) {
        List<bool> l=new List<bool>();
        int mx = candies.Max();
        for(int i=0;i<candies.Length;i++)
            l.Add(candies[i]+extraCandies>=mx);
        return l;
    }
}