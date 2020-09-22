#include<EEPROM.h>
String b,c; 
void setup()
{
  Serial.begin(9600);
  Serial.print("\nEnter the command for reading task as shown in example eg: read 4");
  Serial.print("\nEnter the command for writing task as shown in example eg: write 7 34");
}
void loop()
{
  
   if(Serial.available()>0)
   {
     b=Serial.readStringUntil('\n');
     String read=b;
     String write=b;
     read.remove(4);
     write.remove(5);
  
   if(read.equals("read"))
   {
    c=b.substring(5);
    int a=c.toInt();
     if(a<0||a>255)
     {
       Serial.print("\nEnter the address ranging from 0 to 255");
     }
     else
     {
    int read_value= EEPROM.read(a);
    Serial.print("\nAddress :");
    Serial.print(a);
    Serial.print("\nValue :");
    Serial.print(read_value);
     }
   }
  else if(write.equals("write"))
  {
    String write=b.substring(6);
    int space=write.indexOf(' ');
    String s1=write.substring(0,space);
    int value_s1=s1.toInt();
    if(value_s1<0||value_s1>255)
     {
       Serial.print("\nEnter the address ranging from 0 to 255");
     }
    else
    {
    String s2=write.substring(space+1);
    int value_s2=s2.toInt();
    EEPROM.write(value_s1,value_s2);
    Serial.print("\nData written");
    }
  }
     else
     {
       Serial.print("\nInvalid input");
     }
     
   }
 }
