void setup(){
  for(int i=13; i>7; i--) 
    pinMode(i, OUTPUT);
}

void loop(){
  for(int i=0; i<64; i++){
    for(int j=13, k = 32; j>7; j--, k/=2)
       digitalWrite(j, int(i&k)?HIGH:LOW); 
    delay(1000);
  }
}
