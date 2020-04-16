void initmotors(){
  pinMode(7,OUTPUT);//right
  analogWrite(9,0);//right
  pinMode(8,OUTPUT);//left
  analogWrite(10,0);//left
}

void forward(int speeds){
 digitalWrite(7,LOW); // right forward
 analogWrite(9,speeds);//right
 digitalWrite(8,LOW); // left forward
 analogWrite(10,speeds);//left  
}

void turnleft(int speeds){
 digitalWrite(7,LOW); // right forward
 analogWrite(9,speeds);//right
 digitalWrite(8,HIGH); // left reverse
 analogWrite(10,speeds);//left  
}

void turnright(int speeds){
 digitalWrite(7,HIGH); // right reverse
 analogWrite(9,speeds);//right
 digitalWrite(8,LOW); // left forward
 analogWrite(10,speeds);//left  
}

void testmotors(){

forward(100);
delay(500);
turnleft(100);
delay(1000);
turnright(100);
delay(1000);
}
