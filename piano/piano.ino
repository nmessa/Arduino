void setup(){
    pinMode(10,OUTPUT);  //Set speaker as an OUTPUT
    pinMode(2,INPUT_PULLUP); //Button 2 as an INPUT_PULLUP
    pinMode(3,INPUT_PULLUP); //Button 3 as an INPUT_PULLUP
    pinMode(4,INPUT_PULLUP); //Button 4 as an INPUT_PULLUP
    pinMode(5,INPUT_PULLUP); //Button 5 as an INPUT_PULLUP
    pinMode(6,INPUT_PULLUP); //Button 6 as an INPUT_PULLUP
    pinMode(7,INPUT_PULLUP); //Button 7 as an INPUT_PULLUP
    pinMode(8,INPUT_PULLUP); //Button 8 as an INPUT_PULLUP
    pinMode(9,INPUT_PULLUP); //Button 9 as an INPUT_PULLUP
}
 
void loop(){
    if(digitalRead(2)==LOW){ //if button 2 is sending a low signal... 
        tone(10,523);  //...play a tone of 523 hertz on the speaker (C5)
    } 
    else if(digitalRead(3)==LOW){ //if button 3 is sending a low signal...
        tone(10,587); //...play a tone of 587 hertz on the speaker (D5)
    }
    else if(digitalRead(4)==LOW){ //if button 4 is sending a low signal...
        tone(10,659); //...play a tone of 659 hertz on the speaker (E5)
    }
    else if(digitalRead(5)==LOW){ //if button 5 is sending a low signal...
        tone(10,698); //...play a tone of 698 hertz on the speaker (F5)
    }
    else if(digitalRead(6)==LOW){ //if button 6 is sending a low signal...
        tone(10,783); //...play a tone of 783 hertz on the speaker (G5)
    }
    else if(digitalRead(7)==LOW){ //if button 7 is sending a low signal...
        tone(10,880); //...play a tone of 880 hertz on the speaker (A5)
    }
    else if(digitalRead(8)==LOW){ //if button 8 is sending a low signal...
        tone(10,987); //...play a tone of 987 hertz on the speaker (B5)
    }
    else if(digitalRead(9)==LOW){ //if button 9 is sending a low signal...
        tone(10,1046); //...play a tone of 1046 hertz on the speaker (C6)
    }
    else{ //in all other cases (buttons not sending a low signal)...
        noTone(10); //send a noTone command to the speaker
    }
}
