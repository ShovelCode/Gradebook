#include <stdio.h>

int main (void) {

        int grade;
        unsigned int aCount = 0;
        unsigned int bCount = 0;
        unsigned int cCount = 0;
        unsigned int dCount = 0;
        unsigned int fCount = 0;

        puts( "Enter the letter grades." );
        puts( "Enter the EOF character to end input." );

        while ( (grade = getChar() ) != EOF ){ //typically ctrl-d
                switch (grade) {
                                case 'A':
                                case 'a':
                                        aCount++;

^G Get Help  ^O WriteOut  ^R Read File ^Y Prev Page ^K Cut Text  ^C Cur Pos

