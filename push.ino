int ledpin=13;
int inpin=3;
//int buzzerpin=5;
int val=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  pinMode(inpin,INPUT);
  //pinMode(buzzerpin,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(ledpin,LOW);
  val=digitalRead(inpin);
  if (val==HIGH){
    digitalWrite(ledpin,HIGH);
    //tone(buzzerpin,1000);
  }
  else{

    digitalWrite(ledpin,LOW);
    //noTone(buzzerpin);
  }
  //delay(1000);
}
