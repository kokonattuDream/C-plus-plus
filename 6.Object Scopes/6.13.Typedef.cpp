int main()
{
    typedef long miles_t;
    typedef long speed_t;
 
    miles_t distance { 5 };
    speed_t mhz  { 3200 };
 
    // The following is valid, because distance and mhz are both actually type long
    distance = mhz;
 
    return 0;
}
