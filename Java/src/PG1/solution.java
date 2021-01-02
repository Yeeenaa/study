package PG1;
import java.util.Stack;
class solution {
	public static void main(String[] args) {
		int [][] board = {{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}};
		int [] moves = {1,5,3,5,1,2,1,4};
		solution(board, moves);
	}
	public static int solution(int[][] board, int[] moves) {
	       int answer = 0;
	       Stack<Integer> stack= new Stack<>();
	       for(int i=0;i<moves.length;i++) {
	    	   for(int j=0;j<board.length;j++) {
	    		   int k=(moves[i]-1);
	    		   if(board[j][k] != 0) {
	    			   if(stack.empty()) {
	    				   stack.push(board[j][k]); 
	    				   board[j][k]=0;
	    			   }
	    			   else if(stack.lastElement()==board[j][k]) {
	    				   stack.pop();
	    				   answer+=2;
	    				   board[j][k]=0;
	    			   }
	    			   else { 
	    				   stack.push(board[j][k]);
	    				   board[j][k]=0;
	    				   }
	    			   break;
	    		   }
	    	   }
	       }
	       System.out.println(answer);
	       return answer;
	   }
}