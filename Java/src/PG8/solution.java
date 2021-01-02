package PG8;

import java.util.*;

class solution {
	public static void main(String[] args) {
		int [] arr = {9, 7};
		int divisor = 5;
		solution(arr, divisor);
	}
    public static int[] solution(int[] arr, int divisor) {
    	ArrayList <Integer> ar = new ArrayList<>();
    	for(int i=0;i<arr.length;i++) {
    		if(arr[i]%divisor==0) ar.add(arr[i]);
    	}
    	if(ar.isEmpty()) {
    		int [] answer = {-1};
    		answer[0] = -1;
    	return answer;
    	}
    	int [] answer = new int [ar.size()];
    	ar.sort(null);
	    	for (int i=0;i<ar.size();i++) {
	    		answer[i]=ar.get(i);
	    	}
	    
        return answer;
    }
}