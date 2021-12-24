void setup() 
{
  Serial.begin(9600);
}
void loop() 
{
  if(Serial.available()>0)
  {
    String value = Serial.readStringUntil('#');
    if(value.length()==2)
    {
      String joystick = value.substring(0, 1);
      String button = value.substring(1, 2);
    //  String button = value.substring(6, 8);
      Serial.print("Direction: ");Serial.print(joystick);Serial.print('\t');
      Serial.print("Button: ");Serial.print(button);Serial.println("");
      Serial.flush();
      value="";
    }
  }
}
