
// get realtime here
int second    = second();
int minut     = minute();
int hour      = hour();
int namedHour = 0;

int getRTPTime () {};
int setRTPTime () {};
int changeTime (short diff ) { //expects the difference in minutes, +/-5 would be good
   if ((minute+diff) >= 60 ) { hour++; minute = minute+diff-60; }
   if ((minute+diff) <   0 ) { hour--; minute = minute+diff+60;
   }
   setRTPTime(second, minute, hour ,...); //has to be adjusted
}

int switchOnLED (int lednumbers[]) {
   while (lednumbers) { //this doesnt work in C++ probably

   }//turn on the right LED here
}

/*
if (minute > 12) namedHour++; //The actually shown hour is not the the actual hour
switch (namedHour) {
   case 1:
      ledsEins();
   case 2:
      ledsZwei();
   case 3:
      ledsDrei();
   case 4:
      ledsVier();
   case 5:
      ledsFuenf();
   case 6:
      ledsSechs();
   case 7:
      ledsSieben();
   case 8:
      ledsAcht();
   case 9:
      ledsNeun()
   case 10:
      ledsZehn();
   case 11:
      ledsElf();
   case 12:
      ledsZwoelf();
}
*/
if (second >= 30) minute++; // we want to switch to the next state 2.5 Minutes before and after the exact time

if (m > 57 && m <  3) // um
if (m >  2 && m <  8) // Fünf Minuten nach
if (m >  7 && m < 13) // Zehn Minuten nach
if (m > 12 && m < 18) // Viertel
if (m > 17 && m < 23) // 10 Minuten vor halb
if (m > 22 && m < 28) // Fünf Minuten vor halb
if (m > 27 && m < 32) // Halb
if (m > 32 && m < 38) // Fünf Minuten nach halb
if (m > 37 && m < 42) // Zehn Minuten nach halb
if (m > 42 && m < 48) // Dreiviertel
if (m > 47 && m < 52) // 10 Minuten vor um
if (m > 52 && m < 58) // Fünf Minuten vor um
