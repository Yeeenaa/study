package PG9;

import java.util.*;

class solution {
    boolean solution(String s) {
        boolean answer = true;
        Stack<Character> stp = new Stack<>();
        Stack<Character> sty = new Stack<>();
        char [] string = new char [50];
        for (int i=0;i<s.length();i++) {
        	string[i]=s.charAt(i);
        }
        for(char c:string) {
        	if(c=='p'||c=='P') stp.push(c);
        	if(c=='y'||c=='Y') sty.push(c);
        }
        
        if(stp.size()==sty.size()) answer = true;
        else answer = false;
        System.out.println(answer);
        return answer;
    }
}