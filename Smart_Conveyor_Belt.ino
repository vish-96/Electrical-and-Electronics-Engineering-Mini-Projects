//Author : Vishal
#define echopin 9
 #define trigpin 10
long duration,distance; int l1=3,l2=5; 
int I3=l1;
int I4=l2;
int count=0;
 void setup() { 
Serial.begin(9600); 
pinMode(trigpin,OUTPUT); 
pinMode(echopin,INPUT); 
}


void forward() 
{analogWrite(l1,60); analogWrite(l2,0); 
}
 Void loop()
 { digitalWrite(trigpin,LOW); 
delayMicroseconds(10);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(100); 
digitalWrite(trigpin,LOW); 
delayMicroseconds(10);
duration=pulseIn(echopin,HIGH);
 distance=duration/(58.2); 
Serial.print(distance); Serial.println("cm"); 
delay(500); forward(); delay(500); stop1(); delay(10); 
if(distance<=5) {count+=1;} 
Serial.println(count); } 

