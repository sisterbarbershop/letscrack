// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int N) {
    int current = N;
    char rmd = 0;
    int temp = 0;
    int max = 0;
    // top : biggest digit
    // 0th digit -> biggest digit mask test gogo
    /*
    while (current/2 > 0) {
        ++top;
        current = current / 2;
    }
    
    for (i = 0; i <= top; i++) {
        mask = (1 << i);
        if (mask & N) {
            temp = 0;
        } else {
            temp++;
        }
        
        if (temp > max) {max = temp;}
    }
    */    
    while (!(current % 2))
        current /= 2;
    
    while (current/2) {
        rmd = current % 2;
        current /= 2;
        
        if (rmd) {
            temp = 0;
            continue;
        }
        else
            temp++;
        
        if (temp > max) {max = temp;}
    }
        
    return max;
}
