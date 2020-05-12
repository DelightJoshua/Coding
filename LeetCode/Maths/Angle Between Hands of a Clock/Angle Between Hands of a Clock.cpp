double angleClock(int hour, int minutes) {
    double d1 = (minutes * 5.5) - (hour * 30);
    if(d1 < 0){
        d1 = - d1;
    }
    double d2 = 360 - d1;
    if(d1 < d2)
        return d1;
    else 
        return  d2;

}
