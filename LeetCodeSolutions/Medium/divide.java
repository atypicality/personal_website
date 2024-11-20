class Solution {
    public int divide(int dividend, int divisor) {
    
        if(dividend == 0) return 0;
        if(divisor == 1) return dividend;
        if(dividend==divisor) return 1; 
        if(divisor == -1) 
        {
            if(dividend > 2147483647) return 0 - dividend + 1;
            if(dividend < -2147483647) return 0 - dividend - 1;
            return 0 - dividend;
        }

        long divid = (long) dividend;
        long divis = (long) divisor;
        int counter = 0;

        if(((int)divis >= 1 && (int)divid >= 1 )||((int)divis <= 1 && (int)divid <= 1 ))
        {
        divid = Math.abs(divid);
        divis = Math.abs(divis);
        while(divid >= divis)  
        {
            divid = divid - divis;
            counter++;
        }
        return counter;
        }
        else
        {
             divid = Math.abs(divid);
            divis = Math.abs(divis);
            while(divid >= divis)  
            {
            divid = divid - divis;
            counter++;
            }
            String answer = "-" + counter;
            return Integer.valueOf(answer);
        }
    }
}