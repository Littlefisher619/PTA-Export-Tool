Clock operator++(Clock& op){
    op.Second++;
    if(op.Second>=60) op.Second-=60,op.Minute++;
    if(op.Minute>=60) op.Minute-=60,op.Hour++;
    if(op.Hour>=24) op.Hour=0;
    return op;
}
Clock operator++(Clock& op,int){
    Clock temp(op);
    op.Second++;
    if(op.Second>=60) op.Second-=60,op.Minute++;
    if(op.Minute>=60) op.Minute-=60,op.Hour++;
    if(op.Hour>=24) op.Hour=0;
    return temp;
}
