#include <LiquidCrystal.h> //For LCD


LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Hookup
 

const int switchPin=6;

int switchState=0;

int prevSwitchState=0;

int reply;

void setup () {
   //set up the LCD's numbers of columns and rows:
  lcd.begin(16, 2); //16x2 lcd
  //set up the swtich pin as an input
  pinMode(switchPin, INPUT);
  //print a message to the LCD

  lcd.print("Ask the");
 //set the cursor to column 0, line 1
 //note: line 1 is the second row, since counting beings at 0
  lcd.setCursor(0, 1);
  lcd.print("Magic 8Ball!");

  
}

void loop ()
{
 //check the status of the switch
 switchState=digitalRead(switchPin);

 // compare the buttonState to its previous state 
 if (switchState != prevSwitchState) {
  // if th state has changed from HIGH to LOW
  //you know that the ball has been tilted from
  //one direction to the other
  if (switchState == LOW) {
    lcd.clear();

    //randomly choose a reply
    reply=random(7);
    //set th cursor to column 0, line 0
    lcd.setCursor(0, 0);
    lcd.print("8ball says:");
    //set the cursor to column 0, line 1
    lcd.setCursor(0,1);
    //choose a saying to print

    switch(reply){
      case 0:
      //print out to the screen
        lcd.print("Hell yeah!");
        break;
      case 1:
        lcd.print("Certainly!!");
        break;
      case 2:
        lcd.print("Who Cares");
        break;
     case 3: 
        lcd.print("Ask again!");
        break;
     case 4:
        lcd.print(" Lookin Good!");
        break;
     case 5:
        lcd.print("-__-");
        break;
     case 6:
        lcd.print("no lol...");
        break;
    }
      }
 }

  prevSwitchState = switchState;

}
