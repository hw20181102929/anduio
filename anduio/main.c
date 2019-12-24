int A[]={0,1};
int B[]={1,0,0,0};
int C[]={1,0,1,0};
int D[]={1,0,0};
int E[]={0};
int F[]={0,0,1,0};
int G[]={1,1,0};
int H[]={0,0,0,0};
int I[]={0,0};
int J[]={0,1,1,1};
int K[]={1,0,1};
int L[]={0,1,0,0};
int M[]={1,1};
int N[]={1,0};
int O[]={1,1,0,1};
int P[]={0,1,1,0};
int Q[]={1,1,0,1};
int R[]={0,1,0};
int S[]={0,0,0};
int T[]={1};
int U[]={0,0,1};
int V[]={0,0,0,1};
int W[]={0,1,1};
int X[]={1,0,0,1};
int Y[]={1,0,1,1};
int Z[]={1,1,0,0};
int *Letter[26];

void setup() {
    // put your setup code here, to run once:
    pinMode(13,OUTPUT);
    digitalWrite(13,LOW);
    Letter[0]=A;
    Letter[1]=B;
    Letter[2]=C;
    Letter[3]=D;
    Letter[4]=E;
    Letter[5]=F;
    Letter[6]=G;
    Letter[7]=H;
    Letter[8]=I;
    Letter[9]=J;
    Letter[10]=K;
    Letter[11]=L;
    Letter[12]=M;
    Letter[13]=N;
    Letter[14]=O;
    Letter[15]=P;
    Letter[16]=Q;
    Letter[17]=R;
    Letter[18]=S;
    Letter[19]=T;
    Letter[20]=U;
    Letter[21]=V;
    Letter[22]=W;
    Letter[23]=X;
    Letter[24]=Y;
    Letter[25]=Z;
    Serial.begin(9600);
}
char test[]="HELLOHW";
void loop() {
    // put your main code here, to run repeatedly:
    for(int i=0;test[i]!='\0';i++)
    {
        int index=test[i]-'A';
        int Length;
        Length=sizeof(Letter[index])/sizeof(Letter[index][0]);
        for(int j=0;j<=Length;j++)
        {
            if(Letter[index][j]==0)
            {
                Serial.println("duan");
                digitalWrite(13,HIGH);
                delay(300);
            }
            else
            {
                Serial.println("chang");
                digitalWrite(13,HIGH);
                delay(900);
            }
            digitalWrite(13,LOW);
            delay(1000);
        }
    }
    
}
