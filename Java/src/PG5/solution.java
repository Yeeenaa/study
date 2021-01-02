package PG5;

class solution {
    public static String solution(int a, int b) {
    	int [] month = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    	String [] week = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    	int sum=0;
    	for(int i=0;i<a;i++) {
    		sum+=month[i];

    	}
    	sum+=b;
    	sum%=7;
    	if(sum<3) sum+=4;
    	else sum-=3;
        String answer = week[sum];
        return answer;
    }
}