package PG10;

import java.util.*;

class solution {
	
    public String solution(String[] seoul) {
    	int k=0;
    	for (int i=0;i<seoul.length;i++) {
    		if(seoul[i].equals("Kim")) k=i;
    	}
        String answer = "�輭���� "+k+"�� �ִ�";
        return answer;
    }
}