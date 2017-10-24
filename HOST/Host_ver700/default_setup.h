

#include  "iodef.h"

#define  	VERSION_0         		    '6'
#define  	VERSION_1         		    'A'
#define  	VERSION_2         		    'E'


#define     LG                          0
#define     IO                          1
#define     D_F                         2

#define     MAN_USE                     0
#define     BAGGAGE_USE                 4
#define     CARLIFT_USE                 8


#define     INVERTER_CHECK   	        (cF_BD_ID & 0x03)
#define     USE_CHECK   	            (cF_BD_ID & 0x0c)


#define     SET_ELEV_SPEED_PER_MIM      600   //60  //90   //120
//#define     SET_ENCODER_PULSE           2048 //8192    //600   //office
#define     SET_MOTOR_RPM               1460  //186     //600

#define     SET_ENCODER_PULSE_1024      1024
#define     SET_ENCODER_PULSE_2048      2048


#define     BIT_NORMAL_OPEN             0x80
#define     BIT_NORMAL_CLOSE            0x00




#define     Init_ALL_FF                 0xff

#define     START_FLOOR                 0


#define     DISABLE_TIME                0


#ifdef	FLOOR_64
	#define     SYSTEM_TOP_FLR              64	
	#define     DISABLE_FLR                 64	
	#define     Init_FixFloor               64
	#define     Init_X7SafeFlr              64
	#define     Init_OneStopFlr             0
	#define     Init_X6SafeFlr              64
	#define     Init_X5SafeFlr              64
	#define     Init_KidsKeyCnt             64
#else
	#define     SYSTEM_TOP_FLR              32	

	#define     DISABLE_FLR                 32	
	#define     Init_FixFloor               32
	#define     Init_X7SafeFlr              32
	#define     Init_OneStopFlr             0
	#define     Init_X6SafeFlr              32
	#define     Init_X5SafeFlr              32
	#define     Init_KidsKeyCnt             32
#endif

#define		Init_TopFlr		            1
#define		Init_PrkFlr                 0
#define     Init_OpWtTm                 4    
#define     Init_OpTtTm                 15
#define     Init_DirTime                20
#define     Init_VoiceTime              20
#define     Init_FireSafeFlr            0
#define     Init_WaterSafeFlr           1        





#define     Init_SubDoorFlr1            0x55
#define     Init_SubDoorFlr2            0x55
#define     Init_SubDoorFlr3            0x55
#define     Init_SubDoorFlr4            0x55
#define     Init_SubDoorFlr5            0x55
#define     Init_SubDoorFlr6            0x55
#define     Init_SubDoorFlr7            0x55
#define     Init_SubDoorFlr8            0x55


#define     Init_FanTime                3        //3 sec
#define     Init_LightTime              99       //99 min
#define     Init_FixFloorTime           0
#define     Init_NextFlrTime            0
#define     Init_LuLdOffTime            5
#define     Init_ReOpTime               0
#define     Init_OpClWTime              1
#define     Init_DrJmpChkTime           0
#define     Init_BrkMgtTime             3

#define     Init_StTm1                  2
#define     Init_StTm2                  4
#define     Init_StTm3                  7
#define     Init_StTm4                  7
#define     Init_StTm5                  10


#define     Init_RunOff_Time            8  
#define     Init_Bk1Off_Time            16  
#define     Init_Bk2Off_Time            16  
#define     Init_UDOff_Time             20  
#define     Init_P4Off_Time             28  


#define     Init_SolOn_Time             0  
#define     Init_DoorWait_Time          0  

//#define     Init_BrkStTm10              800  
//#define     Init_BrkStTm20              1500
//#define     Init_BrkStTm30              1600
//#define     Init_BrkStTm40              2000
//#define     Init_BrkStTm50              2200
//#define     Init_BrkStTm60              500

                                    
#define     Init_ParkingStartTime       0
#define     Init_ParkingEndTime         0

//////////////////////////////////////////////////////////////




///////////////////////////////////////////////
        //  P1  P2  P3  P4
        //  0   0   0   0               :0
        //  1   0   0   0               :1
        //  0   1   0   0               :2
        //  1   1   0   0               :3
        //  0   0   1   0               :4
        //  1   0   1   0               :5
        //  0   1   1   0               :6
        //  1   1   1   0               :7
        //  0   0   0   1               :8
        //  1   0   0   1               :9
        //  0   1   0   1               :10
        //  1   1   0   1               :11
        //  0   0   1   1               :12
        //  1   0   1   1               :13
        //  0   1   1   1               :14
        //  1   1   1   1               :15
//////////////////////////////////////////////


	#define     NONE_USE_SPD                0
	#define     P1_SPD                      1
	#define     P2_SPD                      2
	#define     P1P2_SPD                    3
	#define     P3_SPD                      4
	#define     P1P3_SPD                    5
	#define     P2P3_SPD                    6
	#define     P1P2P3_SPD                  7
	#define     P4_SPD                      8
	
	
	
	#define     NOT_USE_SPEED              	0
	#define     CHANGE_DEC_AT_SPD_M_H		1
	#define     CHANGE_DEC_AT_SPD_H			2
	#define     CHANGE_DEC_LIMIT_SUSD		3
	#define     SPEED_LOW                 	4
	#define     SPEED_MID                 	5
	#define     SPEED_HIGH                	6
	#define     SPEED_MAX                   6


	#define     DEFAULT_SPEED1_DEC_LENGTH         500                 //mm
	#define     DEFAULT_SPEED2_DEC_LENGTH         1100                //mm
	#define     DEFAULT_SPEED3_DEC_LENGTH         1400                //970                 //1200        //mm

	#define     SPEED_30                    0
	#define     SPEED_45                    1
	#define     SPEED_60                    2
	#define     SPEED_90                    3
	#define     SPEED_105                   4
	#define     SPEED_120                   5 
	#define     SPEED_150                   6 
	#define     SPEED_180                   7 
	#define     SPEED_210                   8 
	////////////////////////////////////////////
	////////////////////////////////////////////
	
	#define     SPEED_30_DEC_LENGTH         500                 //mm
	#define     SPEED_45_DEC_LENGTH         1100                //mm
	#define     SPEED_60_DEC_LENGTH         1400                //mm
	#define     SPEED_90_DEC_LENGTH         2200                //mm    
	#define     SPEED_105_DEC_LENGTH        3100                //mm
	#define     SPEED_120_DEC_LENGTH        4100                //mm
	#define     SPEED_150_DEC_LENGTH        5400                //mm
	#define     SPEED_180_DEC_LENGTH        7200                //mm
	#define     SPEED_210_DEC_LENGTH        8000                //mm





#define     bFhmOnOff                   0                       //ONOFF0
#define     bDoorJumperOff              1                       //ONOFF0
#define     bEncoderPhase               2                       //ONOFF0
#define     bWardPriority               3                       //ONOFF0
#define     bNonStop                    4                       //ONOFF0
#define     bOpenTotalOnOff             5                       //ONOFF0
#define     bOpenWaitToTalOnOff         6                       //ONOFF0
#define     bCloseTotalOnOff            7                       //ONOFF0


#define     bCarDoor1Use                8                       //ONOFF1
#define     bCarDoor2Use                9                       //ONOFF1
#define     bHoleDoor1Use               10                      //ONOFF1
#define     bHoleDoor2Use               11                      //ONOFF1
#define     bSubSafety                  12                      //ONOFF1
#define     bBrkMgtUse                  13                      //ONOFF1
#define     bEncoderUse                 14                      //ONOFF1
#define     bRelevelOnOff               15                      //ONOFF1

#define     bOilLopeTypeChk             16                      //ONOFF2
#define     bOnlyOneCall                17                      //ONOFF2
#define     bManualSusChk               18                      //ONOFF2
#define     bBrkOpenUse                 19                      //ONOFF2
#define     bKidsKeyChkUse              20                      //ONOFF2
#define     bCarKeyFirstService         21                      //ONOFF2
#define     bFamilyService              22                      //ONOFF2
#define     bOpenOutSet                 23                      //ONOFF2


#define     bSafetyValidLR              24                      //ONOFF3
#define     bFloorSel                   25                      //ONOFF3
#define     bRunOpenSetClear            26                      //ONOFF3
#define     bUcmpFeedback          		27                      //ONOFF3
#define     bNormalEmgEV                28                      //ONOFF3
#define     bONOFF35                    29                      //ONOFF3
#define     bEncoderCpy                 30                      //ONOFF3
#define     bManWorkingChk              31                      //ONOFF3

/////////////BIT AREA1////////////////////////
/////////////////////////////////////////////
//base adr == F_NcNoBit0
//#define     bLight                      0
//#define     bOpLmS                      1
//#define     bParking                    2
//#define     bSafety                     3
//#define     bOverload                   4


#define     NO_FLR_PULSE				0xc0000000


