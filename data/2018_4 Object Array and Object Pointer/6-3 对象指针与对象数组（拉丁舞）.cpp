void Student::printPair(){
  if(pair!=NULL)
  cout<<this->name<<":"<<pair->name<<endl;
}
void Student::addPair(){
  if(this->pair!=NULL) return;
 
  auto checkpair=[this](Student *stu) -> bool{
    if(stu->pair==NULL){
      if(this==stu->welcome[0] || this==stu->welcome[1]){
        return true;
      }else if(stu->welcome[0]->pair!=NULL &&  stu->welcome[1]->pair!=NULL){
        return true;
      }else return false;
    }else return false;
 
  };
  if(checkpair(welcome[0])) {
    this->pair=welcome[0];
    this->welcome[0]->pair=this;
  }else if(checkpair(welcome[1])){
    this->pair=welcome[1];
    this->welcome[1]->pair=this;
  }
}
