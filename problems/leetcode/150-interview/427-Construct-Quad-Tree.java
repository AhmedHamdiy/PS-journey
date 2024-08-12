/*
// Definition for a f node.
class Node {
    public boolean val;
    public boolean isLeaf;
    public Node topLeft;
    public Node topRight;
    public Node bottomLeft;
    public Node bottomRight;

    
    public Node() {
        this.val = false;
        this.isLeaf = false;
        this.topLeft = null;
        this.topRight = null;
        this.bottomLeft = null;
        this.bottomRight = null;
    }
    
    public Node(boolean val, boolean isLeaf) {
        this.val = val;
        this.isLeaf = isLeaf;
        this.topLeft = null;
        this.topRight = null;
        this.bottomLeft = null;
        this.bottomRight = null;
    }
    
    public Node(boolean val, boolean isLeaf, Node topLeft, Node topRight, Node bottomLeft, Node bottomRight) {
        this.val = val;
        this.isLeaf = isLeaf;
        this.topLeft = topLeft;
        this.topRight = topRight;
        this.bottomLeft = bottomLeft;
        this.bottomRight = bottomRight;
    }
}
*/

class Solution {
    public Node construct(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        return f(grid, 0, m - 1, 0, n - 1);
    }

    private Node f(int[][] grid, int startR, int endR, int startC, int endC) {
        if(startR == endR && startC == endC)
            return new Node(grid[startR][startC] == 1, true);
        int midR = (startR + endR) / 2;
        int midC = (startC + endC) / 2;
        Node topLeft = f(grid, startR, midR, startC, midC);
        Node topRight = f(grid, startR, midR, midC + 1, endC);
        Node bottomLeft = f(grid, midR + 1, endR, startC, midC);
        Node bottomRight = f(grid, midR + 1, endR, midC + 1, endC);
        if(topLeft.val == topRight.val 
                && bottomRight.val == bottomLeft.val  
                && topLeft.val == bottomLeft.val && topLeft.isLeaf && topRight.isLeaf && bottomLeft.isLeaf && bottomRight.isLeaf)
            return new Node(topLeft.val, true);
        return new Node(topLeft.val, false, topLeft, topRight, bottomLeft, bottomRight);
    }
}