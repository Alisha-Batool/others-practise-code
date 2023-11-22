
void printCollatzconjecture(int n){
    if (n==0){
        printf("Error. Number cannot be zero.");
    }else if(n<0){
        n=n*(-1);
        // n = n * (-1);
        return;
    }
    do{
        //transform n as per the conjecture
        //if n is even n=n/2
        //if n is odd n=n*3+1
        //stop when n = 1
        if(n%2==0){
            n= n / 2;
        }else{
            n= n * 3 + 1;
        }
        //print n stars
        for(int i=0; i<=n; i++){
            printf("*");
        }
        printf("\n");

    }while(n!=1);
}