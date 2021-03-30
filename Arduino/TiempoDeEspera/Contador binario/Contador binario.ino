void setup() {
  int i;
  for ( i = 10; i <14 ; i++)  pinMode(i, OUTPUT); 
  // sets the digital pin 13 as output
}
int i=0, i1=0, i2=0, i3=0, i4=0;

void loop() {
  
  if (i1<1) 
  {
    i1++;
    digitalWrite(12, LOW);
  }else {
    i1 = 0;
    digitalWrite(12, HIGH);
  }

  if (i2<2) 
  {
    i2++;
    digitalWrite(12, HIGH);
  }else {
    i2 = 0;
    digitalWrite(12, LOW);
  }
  
  if (i2<4) 
  {
    i3++;
    digitalWrite(10, HIGH);
    
  }else {
    i3 = 0;
    digitalWrite(10, LOW);
  }

  if (i4<4) 
  {
    i4++;
    digitalWrite(10, HIGH);
    
  }else {
    i4 = 0;
    digitalWrite(10, LOW);
  }

  if (i = 15) i=-1;
  i++;
 
  delay(3000);            // waits for a second
  
}
