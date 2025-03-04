bool checkPowersOfThree(int n) {
    while(n>0)
    {
        if (n%3 == 2) //base 3 number will not have modulu == 2 
        {
            return false;
        }
        n = n/3;
    }
    return true;
}
