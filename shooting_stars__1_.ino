const int inPin1= 10;
const int inPin2= 9;
const int inPin3= 8;

//LED1
const int outPin1= 7;
const int outPin2= 6;
const int outPin3= 5;

//LED2
const int outPin4= 4;
const int outPin5= 3;
const int outPin6= 2;

//LED3
const int outPin7= A0;
const int outPin8= A1;
const int outPin9= A2;

int currentState1 = LOW;
int previousState1 = LOW;
int outState1 = LOW;

int currentState2 = LOW;
int previousState2 = LOW;
int outState2 = LOW;

int currentState3 = LOW;
int previousState3 = LOW;
int outState3 = LOW;

int out1=0;
int out2=0;
int out3=0;

int timer1=0;
int timer2=0;
int timer3=0;

void setup()
{
  pinMode(inPin1, INPUT);
  pinMode(inPin2, INPUT);
  pinMode(inPin3, INPUT);
  
  pinMode(outPin1, OUTPUT);
  pinMode(outPin2, OUTPUT);
  pinMode(outPin3, OUTPUT);
  pinMode(outPin4, OUTPUT);
  pinMode(outPin5, OUTPUT);
  pinMode(outPin6, OUTPUT);
  pinMode(outPin7, OUTPUT);
  pinMode(outPin8, OUTPUT);
  pinMode(outPin9, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  currentState1 = digitalRead(inPin1);
//  Serial.print(currentState1);
//  Serial.print(out1);
  if ((currentState1 == HIGH) && (previousState1 == LOW))
  {timer1 =0;
   if (out1 == 5){out1 = 0;}
   else if (out1 == 4){out1 = 5;}
   else if (out1 == 3){out1 =4 ;}
   else if (out1 == 2){out1 = 3;}
   else if (out1 ==1){out1 = 2;}   
   else if (out1 ==0){out1 = 1;}}
  
  currentState2 = digitalRead(inPin2);
//  Serial.print(currentState2);
//  Serial.print(out2);
  if ((currentState2 == HIGH) && (previousState2 == LOW))
  { timer2 =0;
    if (out2 == 5){out2 = 0;}
    else if (out2 == 4){out2 = 5;}
    else if (out2 == 3){out2 = 4;}
    else if (out2 == 2){out2 = 3;}
    else if (out2 == 1){out2 = 2;}
    else if (out2 == 0){out2 = 1;}}
  
  currentState3 = digitalRead(inPin3);
//  Serial.println(currentState3);
//  Serial.println(out3);
  if ((currentState3 == HIGH) && (previousState3 == LOW))
  {timer3 =0;
    if (out3 == 5){out3 = 0;}
   else if (out3 == 4){out3 = 5;}
   else if (out3 == 3){out3 = 4;}
   else if (out3 == 2){out3 = 3;}
   else if (out3 == 1){out3 = 2;}
   else if (out3 == 0){out3 = 1;}}

    if (out1 ==0){digitalWrite(outPin1, LOW);
                  digitalWrite(outPin2, LOW);
                  digitalWrite(outPin3, LOW);}
    else if (out1 ==1){digitalWrite(outPin1, HIGH);
                       digitalWrite(outPin2, HIGH);
                       digitalWrite(outPin3, LOW);}
    else if (out1 ==2){digitalWrite(outPin1, HIGH);
                       digitalWrite(outPin2, LOW);
                       digitalWrite(outPin3, HIGH);}
    else if (out1 ==3){digitalWrite(outPin1, HIGH);
                       digitalWrite(outPin2, LOW);
                       digitalWrite(outPin3, LOW);}
    else if (out1 ==4){digitalWrite(outPin1, LOW);
                       digitalWrite(outPin2, HIGH);
                       digitalWrite(outPin3, LOW);}
    else if (out1 ==5){digitalWrite(outPin1, LOW);
                       digitalWrite(outPin2, HIGH);
                       digitalWrite(outPin3, HIGH);}

    if (out2 ==0){digitalWrite(outPin4, LOW);
                  digitalWrite(outPin5, LOW);
                  digitalWrite(outPin6, LOW);}
    else if (out2 ==1){digitalWrite(outPin4, HIGH);
                       digitalWrite(outPin5, HIGH);
                       digitalWrite(outPin6, LOW);}
    else if (out2 ==2){digitalWrite(outPin4, HIGH);
                       digitalWrite(outPin5, LOW);
                       digitalWrite(outPin6, HIGH);}
    else if (out2 ==3){digitalWrite(outPin4, HIGH);
                       digitalWrite(outPin5, LOW);
                       digitalWrite(outPin6, LOW);}
    else if (out2 ==4){digitalWrite(outPin4, LOW);
                       digitalWrite(outPin5, HIGH);
                       digitalWrite(outPin6, LOW);}
    else if (out2 ==5){digitalWrite(outPin4, LOW);
                       digitalWrite(outPin5, HIGH);
                       digitalWrite(outPin6, HIGH);}

    if (out3 ==0){digitalWrite(outPin7, LOW);
                  digitalWrite(outPin8, LOW);
                  digitalWrite(outPin9, LOW);}
    else if (out3 ==1){digitalWrite(outPin7, HIGH);
                       digitalWrite(outPin8, HIGH);
                       digitalWrite(outPin9, LOW);}
    else if (out3 ==2){digitalWrite(outPin7, HIGH);
                       digitalWrite(outPin8, LOW);
                       digitalWrite(outPin9, HIGH);}
    else if (out3 ==3){digitalWrite(outPin7, HIGH);
                       digitalWrite(outPin8, LOW);
                       digitalWrite(outPin9, LOW);}
    else if (out3 ==4){digitalWrite(outPin7, LOW);
                       digitalWrite(outPin8, HIGH);
                       digitalWrite(outPin9, LOW);}
    else if (out3 ==5){digitalWrite(outPin7, LOW);
                       digitalWrite(outPin8, HIGH);
                       digitalWrite(outPin9, HIGH);}
    
    previousState1 = currentState1;
    previousState2 = currentState2;
    previousState3 = currentState3;

//    Serial.print(timer1);
//    Serial.print(", ");
//    Serial.println(out1);

    timer1 ++; 
    if (timer1*100%3000 == 0 && out1>0){out1 --;}
    timer2 ++; 
    if (timer2*100%3000 == 0 && out2>0){out2 --;}
    timer3 ++; 
    if (timer3*100%3000 == 0 && out3>0){out3 --;}
    
    delay(100);
    
}

