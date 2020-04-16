

void beeper(int freq, int duration){
  analogWrite(3,freq);
  delay(duration);
  analogWrite(3,0);//turn off
}
