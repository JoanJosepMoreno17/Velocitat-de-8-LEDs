/**********************************************************************************
**                                                                               **
**                              Velocitat de 8 LEDs                              **
**                                                                               **
** Joan Josep Moreno Martí                                                       **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led12 = 12;          
const int led11 = 11;          
const int led10 = 10;          
const int led9 = 9;          
const int led8 = 8;          
const int led7 = 7;         
const int led6 = 6;         
const int led5 = 5; 
const int pot0 = A0;        
int valPot0;
int tempo = 20;
//********** Setup ****************************************************************
void setup()
{  
  pinMode(led5, OUTPUT);     
  pinMode(led6, OUTPUT);     
  pinMode(led7, OUTPUT);     
  pinMode(led8, OUTPUT);     
  pinMode(led9, OUTPUT);     
  pinMode(led10, OUTPUT);     
  pinMode(led11, OUTPUT);     
  pinMode(led12, OUTPUT);
  pinMode(pot0, INPUT);     
}
//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);   // llegir valor del potenciòmetre
  tempo = valPot0;     // actualitzar velocitat amb el valor del potenciòmetre
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, LOW);    //1
  digitalWrite(led7, LOW);    
  digitalWrite(led8, LOW);    
  digitalWrite(led9, LOW);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  delay(tempo);
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, HIGH);    //2
  digitalWrite(led7, LOW);    
  digitalWrite(led8, LOW);    
  digitalWrite(led9, LOW);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);   
  delay(tempo);
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, HIGH);    //3
  digitalWrite(led8, LOW);    
  digitalWrite(led9, LOW);    
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, LOW);     
  delay(tempo);
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    //4
  digitalWrite(led7, HIGH);    
  digitalWrite(led8, HIGH);    
  digitalWrite(led9, HIGH);    
  digitalWrite(led10, HIGH);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  delay(tempo);
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    //5
  digitalWrite(led8, HIGH);    
  digitalWrite(led9, HIGH);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  delay(tempo);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    //6
  digitalWrite(led8, LOW);    
  digitalWrite(led9, LOW);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  delay(tempo);             
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    //7
  digitalWrite(led8, HIGH);    
  digitalWrite(led9, HIGH);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  delay(tempo);              
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);    //8
  digitalWrite(led8, HIGH);    
  digitalWrite(led9, HIGH);    
  digitalWrite(led10, HIGH);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  delay(tempo);             
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);    //9
  digitalWrite(led7, HIGH);    
  digitalWrite(led8, LOW);    
  digitalWrite(led9, LOW);    
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, LOW);
  delay(tempo);                
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, LOW);    //10
  digitalWrite(led8, LOW);    
  digitalWrite(led9, LOW);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH); 
  delay(tempo);                  
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, LOW);    //11
  digitalWrite(led7, LOW);    
  digitalWrite(led8, LOW);    
  digitalWrite(led9, LOW);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  delay(tempo);                
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    //12
  digitalWrite(led8, LOW);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);  
  delay(tempo);                 
          }
//********** Funcions *************************************************************
