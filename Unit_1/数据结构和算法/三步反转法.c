void ReverseString(char *s , int from , int to){
    while (from < to){
        char t = s[from];
        s[from++] = s[to];
        s[to++] = t;
    }
}

void LeftRotateString(char *s , int n , int m){
    //abcdef -> defabc ; n = 6 ; m = 3;
    m %= n ;//若要左移动大于n位，那么和%n 是等价的
    ReverseString(s , 0 , m - 1);
    ReverseString(s , m , n - 1);
    ReverseString(s , 0 , n - 1);//C中数组从0开始算，很多地方都要n-1
}