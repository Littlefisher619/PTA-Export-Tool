void splitfloat( float x, int *intpart, float *fracpart ){
    *intpart=x;
    *fracpart=x-*intpart;
}
