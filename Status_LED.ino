void flash_LED(int color, int duration, int repetitions)
{
  for(int i = 0; i < repetitions; i++)
  {
    digitalWrite(color, HIGH);
    delay(duration);
    digitalWrite(color,LOW);
    delay(duration);
   }
}

