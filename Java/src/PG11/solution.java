package PG11;

import java.util.*;

class solution {
    public String solution(int n) {
        String answer = "";
    	for (int i=0;i<n;i++) {
    		if(i%2==0) answer+='��';
    		else answer+='��';
    	}
    	System.out.println(answer);
        return answer;
    }
}