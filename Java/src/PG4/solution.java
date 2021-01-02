package PG4;

import java.util.ArrayList;
import java.util.Arrays;
class solution {
	public static void main(String[] args) {
		int [] array = {1, 5, 2, 6, 3, 7, 4};
		int [][] commands = {{2, 5, 3},{4, 4, 1},{1, 7, 3}};
		solution(array, commands);
	}
	public static int[] solution(int[] array, int[][] commands) {
		ArrayList<Integer> ar = new ArrayList<>();
		int le=commands.length;
		int[] answer = new int [le];

		for(int i=0;i<le;i++) {
			for(int j=commands[i][0]-1;j<commands[i][1];j++) {
				ar.add(array[j]);
			}
			ar.sort(null);
			answer[i]=ar.get(commands[i][2]-1);
			ar.clear();
		}
		
        
        return answer;
    }
}