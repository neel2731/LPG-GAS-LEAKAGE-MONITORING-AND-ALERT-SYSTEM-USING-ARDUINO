int outs = 12;
int LPG= A0;
void setup()
{
serial.begin(9600);
pinmode(LPG,OUTPUT);
pinmode(OUTS,OUTPUT);
}
void loop()
{
int LPGdet=analogread(LPG);
//#code for LED blinking and buzzer ON,OFF.
if(LPGdet&gt;300)
{
digitalwrite(OUTS,HIGH);
delay(1000);
digitalwrite(OUTS,LOW);
delay(1000);
}
else
{
digitalwrite(OUTS,LOW);
}}
