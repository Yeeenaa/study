package PG2;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.TreeSet;

class solution {
	public static void main(String[] args) {
		int [] numbers = {2, 1, 3, 4, 1};
		solution(numbers);
	}
    public static int[] solution(int[] numbers) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        int out;
        int l = numbers.length;
        for(int i=0;i<l-1;i++) {
        	for(int j=i+1;j<l;j++) {
        		out = numbers[i]+numbers[j];
        		if(!list.contains(out)) list.add(out);
        		}
        	}
        int [] answer = new int[list.size()];
        for(int i=0;i<list.size();i++) {
        	answer[i]=list.get(i);
        }
        Arrays.sort(answer);
        return answer;
    }   
}