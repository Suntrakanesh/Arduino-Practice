int bright=0;

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for(bright=0;bright<=255;bright++)
  {
  analogWrite(9, bright);
  delay(50);
  }
  for(bright=255;bright>=0;bright--)
  {
  analogWrite(9,bright);
  delay(50);
  }
}
