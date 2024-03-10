#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);

String pot_Data;
String amount;
String saving;
String connection;

void setup() {
  
    Serial.begin(9600);
    lcd.begin(16,2);
    lcd.setCursor(0,0);
    lcd.print("ENERGY MONITORING");
    lcd.setCursor(0,1);
    lcd.print("& CONTROLLING");
    delay(1000);
    lcd.clear();
   
    


    pinMode(A0,INPUT); // solar 
    pinMode(A1,INPUT); // grid 
    pinMode(A2,INPUT); // grid normal 
    pinMode(A3,INPUT); // grid peak 
    pinMode(A4,INPUT); // unit cost 
   
    
    
}

void loop() {
 
//////////////////////////////////////////////////////////////////////////////////////////////
                            
int  solar=digitalRead(A0); // solar
int  grid=digitalRead(A1);  // grid     
int  gridNormal=digitalRead(A2);  // Grid normal connected relay signal 
int  gridPeak=digitalRead(A3); // Grid peak connected relay signal
int  a=analogRead(A4); //unit cost

////////////////// -----------SOLAR CONNECTED------------ ///////////////////////

  
if (solar == 1 )
{
    lcd.setCursor(0,0);
    lcd.print("Solar_connection");
    

    if(a==0)
    {
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("Solar_connection");
             
                
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
      lcd.print("Solar_connection");
                
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
       lcd.print("Solar_connection");
       
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
        lcd.print("Solar_connection");
                
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
        lcd.print("Solar_connection");
        
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
          lcd.print("Solar_connection");
              
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
          lcd.print("Solar_connection");
          
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
          lcd.print("Solar_connection");
           
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
          lcd.print("Solar_connection");
                
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
          lcd.print("Solar_connection");
          
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
          lcd.print("Solar_connection");
          
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


///////////////////////////////////////////////////////////////////////////////////////////////////////////
             
                ////////////////// -----------GRID NORMAL CONNECTED------------ ///////////////////////


else if(grid==1 &&  gridNormal ==1 )
{
  lcd.setCursor(0,0);
    lcd.print("GN_connection");
    

    if(a==0)
    {
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("GN_connection");
             
                
      lcd.setCursor(0,0);
      lcd.print("U:0 ");
      lcd.setCursor(5,0);
      lcd.print("                ");
                    
      pot_Data = "U_0";
      connection = "GRID NORMAL CONNECTED ";
      
                    
      // digitalWrite(3,LOW);
      
     }
     
     else if(a>0 && a<100)
     {
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("GN_connection");
                
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
                
          lcd.setCursor(0,0);
          lcd.print("U:8");
          lcd.setCursor(5,0);
          lcd.print("C-38.4");
          
          pot_Data ="U=8_Cost=38.4";
          connection = "GRID NORMAL CONNECTED ";
//          amount ="GRID OFF-PEAK LIMT _90%_ COMPLETED ";
//          digitalWrite(3,LOW); 
                 
        }
        
        else if(a>800 && a<900 )
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("GN_connection");
          
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

        else if(a>980 )
        {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("GN_connection");
          
          lcd.setCursor(0,0);
          lcd.print("U:0");                  
          lcd.setCursor(5,0);
          lcd.print("C-0");

          pot_Data ="U=0_Cost=0";
          connection = "SOLAR CONNECTED ";

          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("LIMT COMPLETED");
          lcd.setCursor(0,1);
          lcd.print("GRID"); 
          
          
        }
        
}

                      
        
      


///////////////////////////////////////////////////////////////////////////////////////////////


////////////////// -----------GRID PEAK CONNECTED------------ ///////////////////////



else if(grid==1 && gridPeak ==1)
{
  lcd.setCursor(0,1);
  lcd.print("GP_connection");
  lcd.setCursor(0,0);
  lcd.print("                      ");
  
    

    if(a==0)
    {
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("GP_connection");
                      
      lcd.setCursor(0,0);
      lcd.print("U:0 ");
      lcd.setCursor(5,0);
      lcd.print("                ");

                    
      pot_Data = "U_0";
      connection = "GRID PEAK TIME CONNECTED ";
      
     }
     
     else if(a>0 && a<100)
     {
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("GP_connection");
                
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
        
        lcd.setCursor(0,0);
        lcd.print("U:4");
        lcd.setCursor(5,0);
        lcd.print("C-38.4");

        pot_Data = "U=4_Cost=38.4";
        connection = "GRID PEAK TIME CONNECTED "; 
       }

//       ----------------------------------------------------------------------------------------------------------------------------------------
       
       else if(a>400 && a<500)
       {
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("GP_connection");
              
          lcd.setCursor(0,0);
          lcd.print("U:5");
          lcd.setCursor(5,0);
          lcd.print("C-48");

          pot_Data ="U=5_Cost=48";
          connection = "GRID PEAK TIME CONNECTED ";
          
//        digitalWrite(3,LOW); 
        }
        else if(a>500)
        {
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("GRID PEAK LIMT           ");
          lcd.setCursor(0,1);
          lcd.print("COMPLETED           ");
          
          pot_Data ="U=0_Cost=0";
          connection = "SOLAR CONNECTED";
          
//          amount ="GRID PEAK LIMT _100%_ COMPLETED, SO CUT OFF THE POWER, Conntect Solar Power";

        }
}  

// -------------------------------------------------------------------------------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////////////////////////////////
           
else if( solar == 1 && grid==1 && gridNormal==1 && gridPeak==1 || solar ==0 && grid==0 && gridNormal==0 && gridPeak==0 ){
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("                   ");
          lcd.setCursor(0,1);
          lcd.print("NO_CONNECTION      ");
          
          digitalWrite(0,LOW);
          digitalWrite(1,LOW); 
          digitalWrite(2,LOW);
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
}


//if((gridPeak ==1 && grid==1) && (a>=600 || a>=500 && a<=600 || a>400 && a<500 || a>300 && a<400 || a>200 && a<300 || a>100 && a<200 ))
//{
//  String web_data2 = pot_Data +"__" +connection+ "__" + amount;
//  int webdata_len2 = web_data2 .length();                                                                                    
//  String send_data2  = web_data2;                                   
//  Serial.println(send_data2);
//  delay(3000);
//}
//
//else if((gridNormal ==1 && grid==1) && ( a>=900 || a>800 && a<900 || a>700 && a<800    ||  a>600 && a<700 ||   a>500 && a<600 || a>400 && a<500 || a>300 && a<400 || a>200 && a<300 || a>100 && a<200 ))
//{
//  String web_data2 = pot_Data +"__" +connection+ "__" + amount;
//  int webdata_len2 = web_data2 .length();                                                                                    
//  String send_data2  = web_data2;                                   
//  Serial.println(send_data2);
//  delay(3000);
//}

//else
//{

String web_data2 = pot_Data +"__" +connection+"__"+saving  ;
int webdata_len2 = web_data2 .length();                                                                                    
String send_data2  = web_data2;                                   
Serial.println(send_data2);
delay(3000);

//}

}
