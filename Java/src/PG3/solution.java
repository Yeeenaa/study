package PG3;

import java.util.ArrayList;
import java.util.Arrays;

class solution {
	public static void main(String[] args) {
		int [] answers= {1,2,3,4,5};
		solution(answers);
	}
    public static int[] solution(int[] answers) {
        int [] an = {0, 0, 0};
    	int [] a = {1, 2, 3, 4, 5};
    	int [] b = {2,1,2,3,2,4,2,5};
    	int [] c = {3,3,1,1,2,2,4,4,5,5};
		ArrayList<Integer> q = new ArrayList<>();
    	for(int i=0;i<answers.length;i++) {
    		if(answers[i]==a[i%5]) an[0]++;
    		if(answers[i]==b[i%8]) an[1]++;
    		if(answers[i]==c[i%10]) an[2]++;
    	}
    	int g=0;
    	int max = an[0];
    	if(an[0]<an[1]) {
    		if(an[1]>an[2]) max = an[1];
    		else max = an[2];
    	}
    	else {
    		if(an[0]<an[2]) max = an[2];
    	}
    	if(max==an[0])q.add(an[0]);
    	if(max == an[1])q.add(an[1]);
    	if(max == an[2])q.add(an[2]);
    	g = q.size();
    	int k=0;
    	int [] answer = new int [g];
    	for(int i=0;i<3;i++) {
    		if(an[i]==max) {
    			answer[k]=i+1;
    			k++;
    		}
    		
    	}
    	for(int i=0;i<g;i++) {
    	}
        return answer;
    }
}