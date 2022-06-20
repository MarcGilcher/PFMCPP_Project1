#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:      player
//  action 1:  the player moves
player.move();
//  action 2:  the player jumps
player.jump();
//  action 3:  the player shoots
player.shoot();
//  2)
//  Noun:      cat    
//  action 1:  the cat sleeps
cat.sleep();
//  action 2:  the cat eats
cat.eat();
//  action 3:  the cat chases
cat.chase();
//  3)
//  Noun:      customer
//  action 1:  the customer buys
customer.buy();
//  action 2: the customer enters a Pin
customer.enterPin();
//  action 3:  the customer pays
customer.pay();
//  4)
//  Noun:     enemy
//  action 1: the enemy spawnes
enemy.spawn();
//  action 2: the enemy collides
enemy.collide();
//  action 3: the enemy despawns
enemy.despawn();
//  5)
//  Noun:      computer
//  action 1:  the computer boots up
computer.bootUp();
//  action 2: the computer shuts down
computer.shutDown();
//  action 3: the computer outputs data
computer.outputData();
//  6)
//  Noun:      program
//  action 1: the program creates a new project
program.createNewProject();
//  action 2:  the programm saves data
program.saveData();
//  action 3:  the programm terminates
program.terminate();
//  7)
//  Noun:      gainSlider
//  action 1:  the gainSlider moves
gainSlider.move();
//  action 2: the gainSlider increases gain level
gainSlider.increaseGain();
//  action 3:  the gainSlider descreases gain level
gainSlider.decreaseGain();
//  8)
//  Noun:      cdPlayer
//  action 1:  the cdPlayer plays a track
cdPlayer.playTrack();
//  action 2:  the cdPlayer stops playing
cdPlayer.stop();
//  action 3: the cdPlayer skips a track
cdPlayer.skipTrack();
//  9)
//  Noun:      human   
//  action 1:  the human thinks
human.think();
//  action 2: the human breathes
human.breathes();
//  action 3: the human programs
human.program();
//  10)
//  Noun:      volumeKnob
//  action 1:  the volumeKnob rotates clockwise
volumeKnob.rotateRight();
//  action 2:  the volumeKnob rotates counter-clockwise
volumeKnob.rotateLeft();
//  action 3: the volume Knob increases the gain
volumeKnob.increaseGain();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
