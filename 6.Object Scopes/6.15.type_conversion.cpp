//Implicit type conversion 
long l{ 64 }; // widen the integer 64 into a long
double d{ 0.12f }; // promote the float 0.12 into a double
int i{ 2 };
short s = i; // convert from int to short

double d{ 0.1234 };
float f = d;

//Explicit type conversion 
int i1 { 10 };
int i2 { 4 };
float f { (float)i1 / i2 };
// convert an int to a float so we get floating point division rather than integer division
float fa { static_cast<float>(i1) / i2 }; 