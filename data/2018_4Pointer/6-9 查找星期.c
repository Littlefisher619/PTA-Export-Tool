int getindex(char *s){
    switch(s[0]){
        case 'S':return s[1]=='u'?0:6;
        case 'M':return 1;
        case 'T':return s[1]=='u'?2:4;
        case 'W':return 3;
        case 'F':return 5;
        default: return -1;
    }
}
