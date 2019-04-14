/**********************************************************************************************************************/
/*                                         Adel Idris Gumma Aljeelani Bukseisa                                        */
/*                                                       145183                                                       */
/*                                                CPT111  Assignment 2                                                */
/**********************************************************************************************************************/ 
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int num1,num2,num3,num4,choice1,choice2,choice3,choice4,q=1; // declaring variables 
	float numofquestions=0,correct=0,incorrect=0,add=0,correctadd=0,sub=0,correctsub=0,mul=0,correctmul=0,per1,per2,per3,per4,per5; // declaring variables
	char  operatortouse; // declaring variables
	string Continue= "y",answer,trueanswer,trueanswer1;
	srand (time(0));
	while (Continue =="y" || Continue =="Y")
	{
		cout<< "Question "<< q<< endl; // q for the Questions number & starts from 1
	    num1= (rand () % 10)+1; // to store a random number from 1 to 10 in num1 for questions    
	    num2= (rand () % 10)+1; // to store a random number from 1 to 10 in num2 for questions 
     	num3= (rand () % 3)+1;  // to store a random number from 1 to  3 in num3 for operators  
     	num4= (rand () % 4)+1;  // to store a random number from 1 to  4 in num4 for the correct answer place 
		switch (num3) // using switch to chosen the operator for questions which depends on the stored number in num3 
		{             // the chosen operator is giong to be stored in operatortouse 
			case 1:
			    operatortouse= '+'; // in this case + is stored in operatortouse
            break;
            case 2:
		    	operatortouse= '-'; // in this case - is stored in operatortouse
            break;
            case 3:
			    operatortouse= '*'; // in this case * is stored in operatortouse
            break;
		}
		if (operatortouse== '+') // using if to print the appropriate question and choices for each operators based on the stored character in operatortouse 
		{
			cout<< "What is "<< num1<< " + "<< num2<< " ?"<< endl; // to print the addition question	
			choice1= (num1+num2)-1; // storing the wrong answer based on num1 & num2 in choice1  
            choice2= (num1+num2)+3; // storing the wrong answer based on num1 & num2 in choice2 
            choice3= (num1+num2)+2; // storing the wrong answer based on num1 & num2 in choice3 
            choice4= (num1+num2)+1; // storing the wrong answer based on num1 & num2 in choice4 
			switch (num4) // using switch to choose the placement of the correct answer which depends on the stored number in num4  
 			{             
			    case 1:
                    choice1= num1+num2; // to store the corredt answer in choice1
			        trueanswer= "a"; trueanswer1= "A"; // in this caes a & A are stored in trueanswer & trueanswer1 
				break;
				case 2:
					choice2= num1+num2; // to store the corredt answer in choice2
					trueanswer= "b"; trueanswer1= "B"; // in this caes b & B are stored in trueanswer & trueanswer1						
				break;
				case 3:
					choice3= num1+num2; // to store the corredt answer in choice3
					trueanswer= "c"; trueanswer1= "C"; // in this caes c & C are stored in trueanswer & trueanswer1												                        
			    break;
			    case 4:
					choice4= num1+num2; // to store the corredt answer in choice4
					trueanswer= "d"; trueanswer1= "D"; // in this caes d & D are stored in trueanswer & trueanswer1						                        
			    break;		
 			}                             // this part to print the choices 
			cout<< "a)"<< choice1<< endl; 
            cout<< "b)"<< choice2<< endl; 
            cout<< "c)"<< choice3<< endl; 
            cout<< "d)"<< choice4<< endl; 
            cout<< "Enter your answer: a/b/c/d "<< endl; // asking the user to enter the answer 
            cin>> answer; // getting and storing the answer from the user in answer  
			if (answer== trueanswer || answer== trueanswer1) // using if to print a statement based on the user's answer 
            {                                                // by comparing user's answer to trueanswer or trueanswer1 
                cout<< "Correct"<< endl; // to print Correct 
                correct++; // adding 1 to correct which is the number of correct answers
                correctadd++; // adding 1 to correctadd which is the number of addition correct answers 
            }
	        else
			{ 
                cout<< "Incorrect"<< endl; // to print Incorrect 
                incorrect++; // adding 1 to incorrect which is the number of incorrect answers  
            }
            add++; // adding 1 to add which is the number of addition questions 
		}		
		else if (operatortouse== '-') 
		{
			cout<< "What is "; // to print the subtraction question
			if (num1< num2) // using if to write the bigger number first 
			{
				cout<< num2<< " - "<< num1<< " ?"<< endl; // to print the rest of the question in case of the stored  in num2 is bigger than num1 
            	choice1=num2-num1+3; // storing the wrong answer based on num2 & num1 in choice1
            	choice2=num2-num1+4; // storing the wrong answer based on num2 & num1 in choice2
			    choice3=num2-num1+1; // storing the wrong answer based on num2 & num1 in choice3
				choice4=num2-num1+2; // storing the wrong answer based on num2 & num1 in choice4
            	switch (num4) // using switch to choose the placement of the correct answer which depends on the stored number in num4
            	{
            		case 1:
                        choice1= num2-num1; // to store the corredt answer in choice1
			            trueanswer= "a"; trueanswer1= "A"; // in this caes a & A are stored in trueanswer & trueanswer1			        	 
				    break;
					case 2:
					    choice2= num2-num1; // to store the corredt answer in choice3
			        	trueanswer= "b"; trueanswer1= "B"; // in this caes b & B are stored in trueanswer & trueanswer1
					break;
					case 3:
					    choice3= num2-num1; // to store the corredt answer in choice3
						trueanswer= "c"; trueanswer1= "C"; // in this caes c & C are stored in trueanswer & trueanswer1                         
			        break;
					case 4:
					    choice4= num2-num1; // to store the corredt answer in choice4
						trueanswer= "d"; trueanswer1= "D"; // in this caes d & D are stored in trueanswer & trueanswer1							                        
			    	break;								
				}                             // this part to ptint the choices 
				cout<< "a)"<< choice1<< endl; 
                cout<< "b)"<< choice2<< endl; 
                cout<< "c)"<< choice3<< endl; 
                cout<< "d)"<< choice4<< endl; 
                cout<< "Enter your answer: a/b/c/d  "<< endl; // asking the user to enter the answer 
                cin>> answer; // getting and storing the answer from the user in answer  
                if (answer== trueanswer || answer== trueanswer1) // using if to print a statement based on the user's answer
                {                                                // by comparing user's answer to trueanswer or trueanswer1
                    cout<< "Correct"<< endl;
                    correct++; // adding 1 to correct
                    correctsub++; //adding 1 to correctsub which is the number of subtraction correct answers 
                }
	            else 
				{
                    cout<< "Incorrect"<< endl;
                    incorrect++; // adding 1 to incorrect  
                }
			}
			else 
			{
			    cout<< num1<< " - "<< num2<< " ?"<< endl; //to print the rest of the question in case of the stored value in num1 is bigger than num2
			    choice1=num1-num2+3; // storing the wrong answer based on num1 & num2 in choice1
			    choice2=num1-num2+4; // storing the wrong answer based on num1 & num2 in choice2
				choice3=num1-num2+1; // storing the wrong answer based on num1 & num2 in choice3
				choice4=num1-num2+2; // storing the wrong answer based on num1 & num2 in choice4
                switch (num4) // using switch to choose the placement of the correct answer which depends on the stored number in num4
            	{
            		case 1:
                        choice1= num1-num2; // to store the corredt answer in choice1
			        	trueanswer= "a"; trueanswer1= "A"; // in this caes a & A are stored in trueanswer & trueanswer1
					break;
					case 2:
					    choice2= num1-num2; // to store the corredt answer in choice2
						trueanswer= "b"; trueanswer1= "A"; // in this caes b & B are stored in trueanswer & trueanswer1
					break;
					case 3:
					    choice3= num1-num2; // to store the corredt answer in choice3
						trueanswer= "c"; trueanswer1= "C"; // in this caes c & C are stored in trueanswer & trueanswer1	                         
			    	break;
					case 4:
					    choice4= num1-num2; // to store the corredt answer in choice4
						trueanswer= "d"; trueanswer1= "D"; // in this caes d & D are stored in trueanswer & trueanswer1                     
			    	break;							
				}                             // this part to print the choices 
				cout<< "a)"<< choice1<< endl; 
                cout<< "b)"<< choice2<< endl;
                cout<< "c)"<< choice3<< endl;
                cout<< "d)"<< choice4<< endl;
                cout<< "Enter your answer: a/b/c/d  "<< endl; // asking the user to enter the answer 
                cin>> answer; // getting and storing the answer from the user in answer  
                if (answer== trueanswer || answer== trueanswer1) // using if to print a statement based on the user's answer
                {                                                // by comparing user's answer to trueanswer or trueanswer1
                    cout<< "Correct"<< endl;
                    correct++; // adding 1 to correct 
                    correctsub++; // adding 1 to correctsub
                }
	            else 
				{
                    cout<< "Incorrect"<< endl;
                    incorrect++; // adding 1 to incorrect 
                }
			}
			sub++; // adding 1 to sub which is the number of subtraction questions 
	    }
	    else if (operatortouse== '*')
	    {
			cout<< "What is "<< num1<< " * "<<num2<< " ?"<< endl; // to print the multiplication question
			choice1= (num1*num2)-num1;     // storing the wrong answer based on num1 & num2 in choice1
            choice2= (num1*num2)-num1/2-1; // storing the wrong answer based on num1 & num2 in choice2
            choice3= (num1*num2)+num1;     // storing the wrong answer based on num1 & num2 in choice3
            choice4= (num1*num2)+num1/2+1; // storing the wrong answer based on num1 & num2 in choice4
			switch (num4) // using switch to choose the placement of the correct answer which depends on the stored number in num4
			{
			    case 1:
                    choice1= num1*num2; // to store the corredt answer in choice1
			        trueanswer= "a"; trueanswer1= "A"; // in this caes a & A are stored in trueanswer & trueanswer1			        	
				break;
				case 2:
					choice2= num1*num2; // to store the corredt answer in choice2
					trueanswer= "b"; trueanswer1= "B"; // in this caes b & B are stored in trueanswer & trueanswer1						
				break;
				case 3:
					choice3= num1*num2; // to store the corredt answer in choice3
					trueanswer= "c"; trueanswer1= "C"; // in this caes c & C are stored in trueanswer & trueanswer1							                        
			    break;
				case 4:
					choice4= num1*num2; // to store the corredt answer in choice4
					trueanswer= "d"; trueanswer1= "D"; // in this caes d & D are stored in trueanswer & trueanswer1						                        
			   	break;
			}                             // this part to print the choices 
			cout<< "a)"<< choice1<< endl; 
            cout<< "b)"<< choice2<< endl;
            cout<< "c)"<< choice3<< endl;
            cout<< "d)"<< choice4<< endl;
            cout<< "Enter your answer: a/b/c/d "<< endl; // asking the user to enter the answer 
            cin>> answer; // getting and storing the answer from the user in answer  
            if (answer== trueanswer || answer== trueanswer1) // using if to print a statement based on the user's answer
            {                                                // by comparing user's answer to trueanswer or trueanswer1
                cout<< "Correct"<< endl;
                correct++; // adding 1 to correct 
                correctmul++; // adding 1 to correctmul which is the number of multiplication correct answers 
            }
	        else
			{
                cout<< "Incorrect"<< endl;
                incorrect++; // adding 1 to incorrect 
            }		
            mul++; // adding 1 to mul which is the number of multiplication questions 
		}
	    cout<< "Would like to continue? y/n:"<< endl; // to print a question asks the user if wanted to continue  
	    cin>> Continue; // getting and storing the answer from the user in Continue 
	    q++; // adding 1 to q
	    numofquestions++; // adding 1 to numofquestions which is the number of questions 
	}
	cout<< "The summery is thet "<< endl; 
	per1= (correct*100)/numofquestions;        // to calculate the percentage of correct questions and store in per1
	per2= (incorrect*100)/numofquestions;    // to calculate the percentage of incorrect questions and store in per2
	per3= (correctadd*100)/add;       // to calculate the percentage of addition correct questions and store in per3
	per4= (correctsub*100)/sub;    // to calculate the percentage of subtraction correct questions and store in per4
	per5= (correctmul*100)/mul; // to calculate the percentage of multiplication correct questions and store in per5
	cout<< "You got "<< correct<< " correct answers out of "<< numofquestions<< " which is "<< per1<< " % "<< endl;
	cout<< "You got "<< incorrect<< " incorrect answers out of "<< numofquestions<< " which is "<< per2<< " % "<< endl;
	cout<< "You got "<< correctadd<< " addition correct answers out of "<< add<< " which is "<< per3<< " % "<< endl;
	if (per3==100)                                                      // using if to print a statement based on the per3
	    cout<< "Perfect you got all addition questions correct "<< endl;
	else if (per3>= 90)
	    cout<< "You are excellent at addition "<< endl;
	else if (per3>= 75)
	    cout<< "You are very good at addition "<< endl;
	else if (per3>= 60)
	    cout<< "You are good at addition "<< endl;
	else if (per3< 60)
	    cout<< "You need to work harder on addttion "<< endl;  
	cout<< "You got "<< correctsub<< " subtraction correct answers out of "<< sub<< " which is "<< per4<< " % "<< endl;
	if (per4==100)                                                        // using if to print a statement based on per4
	    cout<< "Perfect you got all subtraction questions correct"<< endl;
	else if (per4>= 90)
	    cout<< "You are excellent at subtraction"<< endl;
	else if (per4>= 75)
	    cout<< "You are very good at subtraction"<< endl;
	else if (per4>= 60)
	    cout<< "You are good at subtraction"<< endl;
	else if (per4< 60)
	    cout<< "You need to work harder on subtraction"<< endl;  
	cout<< "You got "<< correctmul<< " multiplication correct answers out of "<< mul<< " which is "<< per5<< " % "<< endl;
	if (per5==100)                                                            // using if to print a statement based on per5
	    cout<< "Perfect you got all multiplication questions correct "<< endl;
	else if (per5>= 90)
	    cout<< "You are excellent at multiplication "<< endl;
	else if (per5>= 75)
	    cout<< "You are very good at multiplication "<< endl;
	else if (per5>= 60)
	    cout<< "You are good at multiplication "<< endl;
	else if (per5< 60)
	    cout<< "You need to work harder on multiplication "<< endl;
    return 0;
}
