#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);

//--------------------------------------

String pot_Data;
String amount;
String saving;
String connection;


//          digitalWrite(0,LOW);   // G OR S 
//          digitalWrite(2,HIGH);  // S
//          digitalWrite(3,LOW);   // G
//          digitalWrite(4,LOW);   // GN
//          digitalWrite(5,LOW);   // GP
//          digitalWrite(6,HIGH);  // LF
//          digitalWrite(7,LOW);   // HL

//----------------------------------------

void setup() {
 
    Serial.begin(9600);
    lcd.begin(16,2);
    lcd.setCursor(0,0);
    lcd.print("ENERGY MONITORING");
    lcd.setCursor(0,1);
    lcd.print("& CONTROLLING");
    delay(2000);
    lcd.clear();
 
////////////////////////////////////////////

    pinMode(A0,INPUT); // solar 
    pinMode(A1,INPUT); // grid 
    pinMode(A2,INPUT); // grid normal 
    pinMode(A3,INPUT); // grid peak
    pinMode(A4,INPUT); // cost value 
    
//////////////////////////////////////////

    pinMode(0,OUTPUT); // grid or solar
    pinMode(2,OUTPUT); // solar
    pinMode(3,OUTPUT); // grid 
    pinMode(4,OUTPUT); // grid normal
    pinMode(5,OUTPUT); // grid peak 
    pinMode(6,OUTPUT); // LIGHT & FAN LOAD 
    pinMode(7,OUTPUT); // HIGH VOLTAGE LOAD 
}

///////////////////////////////////////////////

void loop() {

  int  solar=digitalRead(A0); //Solar connected relay signal  
  int  grid=digitalRead(A1);  // Grid connected relay signal    
  int  gridNormal=digitalRead(A2);  // Grid normal connected relay signal  
  int  gridPeak=digitalRead(A3);  // Grid peak connected relay signal
  int  a=analogRead(A4); // read the unit cost value 
  
if(0){
  
}

///////////////////////////////////////////////////////////////////////////////
///////// -------------------------  solar code  -------------------///////////  
///////////////////////////////////////////////////////////////////////////////

else if (solar == 1)
{
    if(a==0)
    {
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("SOLAR_CONN");
      
      lcd.setCursor(0,0);
      lcd.print("U:0 ");
      lcd.setCursor(5,0);
      lcd.print("                ");
                    
      pot_Data = "U_0";
      saving = ", 0 Rupees Saving AMOUNT ";
      connection = "SOLAR CONNECTED ";
      
     }
     
     else if(a>0 && a<100)
     {
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("SOLAR_CONN");
      
          digitalWrite(0,LOW); // G OR S 
          digitalWrite(2,HIGH);  // S
          digitalWrite(3,LOW); // G
          digitalWrite(4,LOW); // GN
          digitalWrite(5,LOW); // GP
          digitalWrite(6,HIGH); // LF
          digitalWrite(7,LOW); // HL
                
      lcd.setCursor(0,0);
      lcd.print("U:1 ");
      lcd.setCursor(5,0);
      lcd.print("C-4.8 ");
      
      pot_Data = "U=1_Cost=4.8";
      saving = ", 4.8 Rupees Saving AMOUNT ";
      connection = "SOLAR CONNECTED ";
      
     }
     else if(a>100 && a<200)
     {
       lcd.clear();
       lcd.setCursor(0,1);
       lcd.print("SOLAR_CONN");

          digitalWrite(0,LOW);
          digitalWrite(2,HIGH); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
       
       lcd.setCursor(0,0);
       lcd.print("U:2 ");              
       lcd.setCursor(5,0);
       lcd.print("C-9.6 ");
       
       pot_Data = "U=2_Cost=9.6";
       saving = ",9.6 Rupees Saving AMOUNT ";
       connection = "SOLAR CONNECTED ";
                
      }
      else if(a>200 && a<300)
      {
        lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("SOLAR_CONN");

          digitalWrite(0,LOW);
          digitalWrite(2,HIGH); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
                
        lcd.setCursor(0,0);
        lcd.print("U:3"); 
        lcd.setCursor(5,0);
        lcd.print("C-14.4");

        pot_Data = "U=3_Cost=14.4";
        saving = ", 19.2 Rupees Saving AMOUNT ";
        connection = "SOLAR CONNECTED ";
                 
      }
      else if(a>300 && a<400)
      {
        lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("SOLAR_CONN");

          digitalWrite(0,LOW);
          digitalWrite(2,HIGH); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
        
        lcd.setCursor(0,0);
        lcd.print("U:4");
        lcd.setCursor(5,0);
        lcd.print("C-19.2");

        pot_Data = "U=4_Cost=19.2";
        saving = ", 19.2 Rupees Saving AMOUNT ";
        connection = "SOLAR CONNECTED ";
        
       }
       
       else if(a>400 && a<500)
       {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("SOLAR_CONN");

          digitalWrite(0,LOW);
          digitalWrite(2,HIGH); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
              
          lcd.setCursor(0,0);
          lcd.print("U:5");
          lcd.setCursor(5,0);
          lcd.print("C-24");

          pot_Data ="U=5_Cost=24";
          saving = ",24 Rupees Saving AMOUNT ";
          connection = "SOLAR CONNECTED ";
        }
        
        else if(a>500 && a<600)
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("SOLAR_CONN");

          digitalWrite(0,LOW);
          digitalWrite(2,HIGH); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
          
          lcd.setCursor(0,0);
          lcd.print("U:6");                    
          lcd.setCursor(5,0);
          lcd.print("C-28.8");
          
          pot_Data ="U=6_Cost=28.8";
          saving = ", 28.8 Rupees Saving AMOUNT ";
          connection = "SOLAR CONNECTED ";

        }
        
        else if(a>600 && a<700)
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("SOLAR_CONN");

          digitalWrite(0,LOW);
          digitalWrite(2,HIGH); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
           
          lcd.setCursor(0,0);
          lcd.print("U:7");           
          lcd.setCursor(5,0);
          lcd.print("C-33.6");
          
          pot_Data ="U=7_Cost=33.6";
          saving = ", 33.6 Rupees Saving AMOUNT ";
          connection = "SOLAR CONNECTED ";
        }
        
        else if(a>700 && a<800)
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("SOLAR_CONN");

          digitalWrite(0,LOW);
          digitalWrite(2,HIGH); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
                
          lcd.setCursor(0,0);
          lcd.print("U:8");
          lcd.setCursor(5,0);
          lcd.print("C-38.4");
          
          pot_Data ="U=8_Cost=38.4";
          saving = ", 38.4 Rupees Saving AMOUNT ";
          connection = "SOLAR CONNECTED ";
                 
        }
        
        else if(a>800 && a<900 )
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("SOLAR_CONN");

          digitalWrite(0,LOW);
          digitalWrite(2,HIGH); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
          
          lcd.setCursor(0,0);
          lcd.print("U:9");                  
          lcd.setCursor(5,0);
          lcd.print("C-43.2");

          pot_Data ="U=9_Cost=43.2";
          saving = ", 43.2 Rupees Saving AMOUNT ";
          connection = "SOLAR CONNECTED ";
                
        }

        else if(a>900)
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("SOLAR_CONN");

          digitalWrite(0,LOW);
          digitalWrite(2,HIGH); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
          
          lcd.setCursor(0,0);
          lcd.print("U:10");                  
          lcd.setCursor(5,0);
          lcd.print("C-48");

          pot_Data ="U=10_Cost=48";
          saving = ", 48 Rupees Saving AMOUNT ";
          connection = "SOLAR CONNECTED ";
                  
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Still Connect");
          lcd.setCursor(0,1);
          lcd.print("Solar");
//          digitalWrite(3,LOW); 
              
                
        }
          
        
          
        }

        
///////////////////////////////////////////////////////////////////////////////
// -------------------------  GRID NORMAL pot value = above 980 --- code  -------------------------------------
///////////////////////////////////////////////////////////////////////////////
        
else if(grid ==1 && gridNormal == 1 &&  a >980)
{
            lcd.setCursor(0,1);
            lcd.print("Solar CONNECTED             ");
            
          digitalWrite(0,LOW);
          digitalWrite(2,HIGH); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);

            lcd.setCursor(0,0);
            lcd.print("U:10");                  
            lcd.setCursor(5,0);
            lcd.print("C-48");

             pot_Data ="U=10_Cost=48";
             connection = "GRID NORMAL into SOLAR CONNECTED ";
                      
}

///////////////////////////////////////////////////////////////////////////////
// -------------------------  GRID NORMAL pot value = 0 --- code  ---------------
///////////////////////////////////////////////////////////////////////////////
else if (grid ==1 && gridNormal==1 && a==0  ) 
{
          
          lcd.setCursor(0,0);
          lcd.print("GRID NORMAL");
          lcd.setCursor(0,1);
          lcd.print("CONNECTED");
          
          digitalWrite(0,LOW);
          digitalWrite(2,LOW); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);

          lcd.setCursor(0,0);
          lcd.print("U:0 ");
          lcd.setCursor(5,0);
          lcd.print("                ");
                    
      pot_Data = "U_0";
      connection = "GRID NORMAL CONNECTED ";
}

///////////////////////////////////////////////////////////////////////////////
// -------------------------  GRID NORMAL code  ---------------
///////////////////////////////////////////////////////////////////////////////

else if (grid ==1 && gridNormal == 1 ) 
{
    if(a>0 && a<100)
     {
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("GN_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);


      lcd.setCursor(0,0);
      lcd.print("U:1 ");
      lcd.setCursor(5,0);
      lcd.print("C-4.8 ");
                       
      pot_Data = "U=1_Cost=4.8";
      connection = "GRID NORMAL CONNECTED "; 
              
     }
     else if(a>100 && a<200)
     {
       lcd.clear();
       lcd.setCursor(0,1);
       lcd.print("GN_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          
       lcd.setCursor(0,0);
       lcd.print("U:2 ");              
       lcd.setCursor(5,0);
       lcd.print("C-9.6 ");
       
       pot_Data = "U=2_Cost=9.6";
       connection = "GRID NORMAL CONNECTED "; 
                
      }
      else if(a>200 && a<300)
      {
        lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("GN_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
                
        lcd.setCursor(0,0);
        lcd.print("U:3");                    
        lcd.setCursor(5,0);
        lcd.print("C-14.4 ");

        pot_Data = "U=3_Cost=14.4";
        connection = "GRID NORMAL CONNECTED ";
                 
      }
      else if(a>300 && a<400)
      {
        lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("GN_connection");
          
          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);

          
        lcd.setCursor(0,0);
        lcd.print("U:4");
        lcd.setCursor(5,0);
        lcd.print("C-19.2");

        pot_Data = "U=4_Cost=19.2";
        connection = "GRID NORMAL CONNECTED "; 
       }
       
       else if(a>400 && a<500)
       {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("GN_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
              
          lcd.setCursor(0,0);
          lcd.print("U:5");
          lcd.setCursor(5,0);
          lcd.print("C-24");

          pot_Data ="U=5_Cost=24";
          connection = "GRID NORMAL CONNECTED "; 
        }
        
        else if(a>500 && a<600)
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("GN_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          
          lcd.setCursor(0,0);
          lcd.print("U:6");                    
          lcd.setCursor(5,0);
          lcd.print("C-28.8");
          
          pot_Data ="U=6_Cost=28.8";
          connection = "GRID NORMAL CONNECTED ";
        }
        
        else if(a>600 && a<700)
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("GN_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          
          lcd.setCursor(0,0);
          lcd.print("U:7");
                      
          lcd.setCursor(5,0);
          lcd.print("C-33.6");
          
          pot_Data ="U=7_Cost=33.6";
          connection = "GRID NORMAL CONNECTED ";
        }
        
        else if(a>700 && a<800)
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("GN_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          
          lcd.setCursor(0,0);
          lcd.print("U:8");
          lcd.setCursor(5,0);
          lcd.print("C-38.4");
          
          pot_Data ="U=8_Cost=38.4";
          connection = "GRID NORMAL CONNECTED "; 
                 
        }
        
        else if(a>800 && a<900 )
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("GN_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          
          lcd.setCursor(0,0);
          lcd.print("U:9");                  
          lcd.setCursor(5,0);
          lcd.print("C-43.2");

          pot_Data ="U=9_Cost=43.2";
          connection = "GRID NORMAL CONNECTED ";
          
        }

        else if(a>900 && a<980)
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("GN_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          
          lcd.setCursor(0,0);
          lcd.print("U:10");                  
          lcd.setCursor(5,0);
          lcd.print("C-48");

          pot_Data ="U=10_Cost=48";
          connection = "GRID NORMAL CONNECTED ";
          
//          amount ="GRID OFF-PEAK LIMT _100%_ COMPLETED, SO CUT OFF THE POWER ";

          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("LIMT COMPLETED");
          lcd.setCursor(0,1);
          lcd.print("GRID");
//          digitalWrite(3,LOW); 
          
          
        }
  
  
}



///////////////////////////////////////////////////////////////////////////////
// -------------------------  GRID PEAK below = 0 ---  code -------------------
///////////////////////////////////////////////////////////////////////////////

else if (grid ==1 && gridPeak==1 && a==0  ) 
{
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("GP_Connect");
      
          digitalWrite(0,LOW);
          digitalWrite(2,LOW); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW); 
                               
      lcd.setCursor(0,0);
      lcd.print("U:0 ");
      lcd.setCursor(5,0);
      lcd.print("                ");

                    
      pot_Data = "U_0";
      connection = "GRID PEAK TIME CONNECTED ";
          
}

///////////////////////////////////////////////////////////////////////////////
// --------------------------------  GRID PEAK code -------------------
///////////////////////////////////////////////////////////////////////////////

else if (grid ==1 && gridPeak==1  ) 
{
     if(a>0 && a<100)
     {
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("GP_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,LOW);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          
      lcd.setCursor(0,0);
      lcd.print("U:1 ");
      lcd.setCursor(5,0);
      lcd.print("C- 9.6 ");
                       
      pot_Data = "U=1_Cost=9.6";
      connection = "GRID PEAK TIME CONNECTED "; 
              
     }
     
     else if(a>100 && a<200)
     {
       lcd.clear();
       lcd.setCursor(0,1);
       lcd.print("GP_connection");
       
          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,LOW);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);  
             
       lcd.setCursor(0,0);
       lcd.print("U:2 ");              
       lcd.setCursor(5,0);
       lcd.print("C-19.2 ");
       
       pot_Data = "U=2_Cost=19.2";
       connection = "GRID PEAK TIME CONNECTED ";
                
      }
      else if(a>200 && a<300)
      {
        lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("GP_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,LOW);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          
        lcd.setCursor(0,0);
        lcd.print("U:3");                    
        lcd.setCursor(5,0);
        lcd.print("C-28.8 ");

        pot_Data = "U=3_Cost=28.8";
        connection = "GRID PEAK TIME CONNECTED ";
//        amount ="GRID PEAK LIMT _50%_ COMPLETED";
                 
      }
      
      else if(a>300 && a<400)
      {
        lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("GP_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,LOW);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          
        lcd.setCursor(0,0);
        lcd.print("U:4");
        lcd.setCursor(5,0);
        lcd.print("C-38.4");

        pot_Data = "U=4_Cost=38.4";
        connection = "GRID PEAK TIME CONNECTED "; 
       }
       
       else if(a>400 && a<500)
       {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("GP_connection");

          digitalWrite(0,HIGH);
          digitalWrite(2,LOW); 
          digitalWrite(3,HIGH);
          digitalWrite(4,LOW);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          
          lcd.setCursor(0,0);
          lcd.print("U:5");
          lcd.setCursor(5,0);
          lcd.print("C-48");

          pot_Data ="U=5_Cost=48";
          connection = "GRID PEAK TIME CONNECTED ";
          
//        digitalWrite(3,LOW); 
        }
          
}

 else if( solar == 1 && grid==1 && gridNormal==1 && gridPeak==1 || solar ==0 && grid==0 && gridNormal==0 && gridPeak==0 ){

          lcd.setCursor(0,0);
          lcd.print("                   ");
          lcd.setCursor(0,1);
          lcd.print("NO_CONNECTION      ");
          
          digitalWrite(0,LOW);
          digitalWrite(2,LOW); 
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);
}
String web_data2 = pot_Data +"__" +connection+"__"+saving;
int webdata_len2 = web_data2 .length();
String send_data2  = web_data2;
Serial.println(send_data2);
}
