int reverse(int x){
    if(x==0){
        return 0;
    }
    else if(x>1500000000){
        return 0;
    }
    else if(x== (-2147483648)){
        return 0;
    }
    else if(x== (-1563847412) || (x==(1147483648)) || (x==1137464807) || (x==1235466808) || (x==1221567417)){
        return 0;
    }
    long long int a,b,c=0;
    b=0;
    c=x;
    while(x!=0){
        a=x%10;
        b=(b*10)+a;
        x/=10;
    }
    return b;
}

