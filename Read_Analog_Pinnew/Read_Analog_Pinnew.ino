
void setup() 
{ 
  Serial.begin(9600); 
 }

void loop()
{
int potPin=A0, potVal;

  potVal = analogRead( potPin );
  Serial.println( potVal );
}

