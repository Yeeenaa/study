package PG6;

import java.util.*;
class solution {
	
    public static String solution(String s) {
    	String answer = "";
    	int le = s.length();
    	if(le%2==0) {
        	answer = s.substring(le/2-1, le/2+1);
        	System.out.println(answer);
        }
    	else {
        	answer = s.substring(le/2, le/2+1);
    	}
        return answer;
    }
}