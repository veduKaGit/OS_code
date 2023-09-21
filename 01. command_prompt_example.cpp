#NOTE => thsi is NOT written in CPP => .cpp is JUST for highlighting text


//first open terminal

cd Users/vedag/OneDrive/Desktop   //open desktop
vim hello.sh  //create a hello.sh file in desktop

//after we run these 2 lines => a new powershell window opens
// here we will write code for hello.sh

#!/bin/bash    //we are writing bash script
while [ true ]   //indentation of [ true ] is VVIMP => [true] will NOT work
do
        echo "hello vedant"   //prints "hello vedant" continuously
        sleep 1
done

//press escape
:wq!  //saves hello.sh


//we are back to terminal now
bash hello.sh  //process created => infinite loop prints "hello vedant"

//press ctrl + c => INTERRUPT
