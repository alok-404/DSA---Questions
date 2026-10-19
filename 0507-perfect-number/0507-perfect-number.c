bool checkPerfectNumber(int num) {
    int i, res=1;
    if(num<=1){
        return false;
    }
    for(i=2;i<num/i;i++){
        if(num%i==0){
            res = res+i;

            if(i!=num/i){
                res = res+num/i;
            }
        }
    }
        if(num==res){
           return true;
        }
        else 
        return false;
}