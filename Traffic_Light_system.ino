// C++ code
//
int red = 9;
int yellow = 11; 
int green = 13; 
int on = 200; 
int off = 200; 
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
}

void loop()
{
  //red led opens and delays 500 milisec. untill yellow blinks 3 times
  digitalWrite(red, HIGH);
  delay(1000);
   
  //yellow led blinks 3 times 
  digitalWrite(yellow, HIGH);
  delay(on);
  digitalWrite(yellow, LOW);
  delay(off); 
  digitalWrite(yellow, HIGH);
  delay(on);
  digitalWrite(yellow, LOW);
  delay(off);   
  digitalWrite(yellow, HIGH);
  delay(on); 
  digitalWrite(yellow, LOW);
 
 //red led turns off
  digitalWrite(red, LOW);
  delay(off); 

 //green led blinks 1 time then turns off
   digitalWrite(green, HIGH);
  delay(300); 
 digitalWrite(green, LOW);
  delay(1000); 
}