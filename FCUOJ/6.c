int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    else{
        int r = a%b;
        a = b;
        b = r;
        return gcd(a,b);
    }
}
