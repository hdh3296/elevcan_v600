/*
.IFNDEF __30F6010
   .error "Include file does not match processor setting."
.ENDIF
.NOLIST

;==============================================================================
;
; 1. Core Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 1a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv WREG0L, _WREG0
         .equiv WREG0H, _WREG0+1
         .equiv WREG1L, _WREG1
         .equiv WREG1H, _WREG1+1
         .equiv WREG2L, _WREG2
         .equiv WREG2H, _WREG2+1
         .equiv WREG3L, _WREG3
         .equiv WREG3H, _WREG3+1
         .equiv WREG4L, _WREG4
         .equiv WREG4H, _WREG4+1
         .equiv WREG5L, _WREG5
         .equiv WREG5H, _WREG5+1
         .equiv WREG6L, _WREG6
         .equiv WREG6H, _WREG6+1
         .equiv WREG7L, _WREG7
         .equiv WREG7H, _WREG7+1
         .equiv WREG8L, _WREG8
         .equiv WREG8H, _WREG8+1
         .equiv WREG9L, _WREG9
         .equiv WREG9H, _WREG9+1
         .equiv WREG10L, _WREG10
         .equiv WREG10H, _WREG10+1
         .equiv WREG11L, _WREG11
         .equiv WREG11H, _WREG11+1
         .equiv WREG12L, _WREG12
         .equiv WREG12H, _WREG12+1
         .equiv WREG13L, _WREG13
         .equiv WREG13H, _WREG13+1
         .equiv WREG14L, _WREG14
         .equiv WREG14H, _WREG14+1
         .equiv WREG15L, _WREG15
         .equiv WREG15H, _WREG15+1
         .equiv SPLIML, _SPLIM
         .equiv SPLIMH, _SPLIM+1
         .equiv ACCALL, _ACCAL
         .equiv ACCALH, _ACCAL+1
         .equiv ACCAHL, _ACCAH
         .equiv ACCAHH, _ACCAH+1
         .equiv ACCAUL, _ACCAU
         .equiv ACCBLL, _ACCBL
         .equiv ACCBLH, _ACCBL+1
         .equiv ACCBHL, _ACCBH
         .equiv ACCBHH, _ACCBH+1
         .equiv ACCBUL, _ACCBU
         .equiv PCLL, _PCL
         .equiv PCLH, _PCL+1
         .equiv PCHL, _PCH
         .equiv PCHH, _PCH+1
         .equiv TBLPAGL, _TBLPAG
         .equiv TBLPAGH, _TBLPAG+1
         .equiv PSVPAGL, _PSVPAG
         .equiv PSVPAGH, _PSVPAG+1
         .equiv RCOUNTL, _RCOUNT
         .equiv RCOUNTH, _RCOUNT+1
         .equiv DCOUNTL, _DCOUNT
         .equiv DCOUNTH, _DCOUNT+1
         .equiv DOSTARTLL, _DOSTARTL
         .equiv DOSTARTLH, _DOSTARTL+1
         .equiv DOSTARTHL, _DOSTARTH
         .equiv DOSTARTHH, _DOSTARTH+1
         .equiv DOENDLL, _DOENDL
         .equiv DOENDLH, _DOENDL+1
         .equiv DOENDHL, _DOENDH
         .equiv DOENDHH, _DOENDH+1
         .equiv SRL, _SR                        ; See Description in section 1b
         .equiv SRH, _SR+1                      ; See Description in section 1b
         .equiv CORCONL, _CORCON                ; See Description in section 1b
         .equiv MODCONL, _MODCON                ; See Description in section 1b
         .equiv MODCONH, _MODCON+1              ; See Description in section 1b
         .equiv XMODSRTL, _XMODSRT
         .equiv XMODSRTH, _XMODSRT+1
         .equiv XMODENDL, _XMODEND
         .equiv XMODENDH, _XMODEND+1
         .equiv YMODSRTL, _YMODSRT
         .equiv YMODSRTH, _YMODSRT+1
         .equiv YMODENDL, _YMODEND
         .equiv YMODENDH, _YMODEND+1
         .equiv XBREVL, _XBREV                  ; See Description in section 1b
         .equiv XBREVH, _XBREV+1
         .equiv DISICNTL, _DISICNT
         .equiv DISICNTH, _DISICNT+1

;------------------------------------------------------------------------------
; 1b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     SR - Status Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv OA, 0x000F
         .equiv OB, 0x000E
         .equiv SA, 0x000D
         .equiv SB, 0x000C
         .equiv OAB, 0x000B
         .equiv SAB, 0x000A
         .equiv DA, 0x0009
         .equiv DC, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv IPL2, 0x0007
         .equiv IPL1, 0x0006
         .equiv IPL0, 0x0005
         .equiv RA, 0x0004
         .equiv N, 0x0003
         .equiv OV, 0x0002
         .equiv Z, 0x0001
         .equiv C, 0x0000

;------------------------------------------------------------------------------
;     CORCON - Core Configuration Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv US, 0x000C
         .equiv EDT, 0x000B
         .equiv DL2, 0x000A
         .equiv DL1, 0x0009
         .equiv DL0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv SATA, 0x0007
         .equiv SATB, 0x0006
         .equiv SATDW, 0x0005
         .equiv ACCSAT, 0x0004
         .equiv IPL3, 0x0003
         .equiv PSV, 0x0002
         .equiv RND, 0x0001
         .equiv IF, 0x0000

;------------------------------------------------------------------------------
;     MODCON - Modulo Addressing Mode Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv XMODEN, 0x000F
         .equiv YMODEN, 0x000E

;------------------------------------------------------------------------------
;     XBREV - Bit Reversed Addressing Mode Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv BREN, 0x000F

;==============================================================================
;
; 2.  Interrupt Controller Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 2a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv INTCON1H, _INTCON1+1           ; See description for all
         .equiv INTCON1L, _INTCON1       ;  registers in sub-section below
         .equiv INTCON2H, _INTCON2+1
         .equiv INTCON2L, _INTCON2
         .equiv IFS0H, _IFS0+1
         .equiv IFS0L, _IFS0
         .equiv IFS1H, _IFS1+1
         .equiv IFS1L, _IFS1
         .equiv IFS2H, _IFS2+1
         .equiv IFS2L, _IFS2
         .equiv IEC0H, _IEC0+1
         .equiv IEC0L, _IEC0
         .equiv IEC1H, _IEC1+1
         .equiv IEC1L, _IEC1
         .equiv IEC2H, _IEC2+1
         .equiv IEC2L, _IEC2
         .equiv IPC0H, _IPC0+1
         .equiv IPC0L, _IPC0
         .equiv IPC1H, _IPC1+1
         .equiv IPC1L, _IPC1
         .equiv IPC2H, _IPC2+1
         .equiv IPC2L, _IPC2
         .equiv IPC3H, _IPC3+1
         .equiv IPC3L, _IPC3
         .equiv IPC4H, _IPC4+1
         .equiv IPC4L, _IPC4
         .equiv IPC5H, _IPC5+1
         .equiv IPC5L, _IPC5
         .equiv IPC6H, _IPC6+1
         .equiv IPC6L, _IPC6
         .equiv IPC7H, _IPC7+1
         .equiv IPC7L, _IPC7
         .equiv IPC8H, _IPC8+1
         .equiv IPC8L, _IPC8
         .equiv IPC9H, _IPC9+1
         .equiv IPC9L, _IPC9
         .equiv IPC10H, _IPC10+1
         .equiv IPC10L, _IPC10
         .equiv IPC11H, _IPC11+1
         .equiv IPC11L, _IPC11

;------------------------------------------------------------------------------
; 2b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     INTCON1 : Interrupt Control Register 1
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv NSTDIS, 0x000F
         .equiv OVATE, 0x000A
         .equiv OVBTE, 0x0009
         .equiv COVTE, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv SECUREFLT, 0x0005
         .equiv MATHERR, 0x0004
         .equiv ADDRERR, 0x0003
         .equiv STKERR, 0x0002
         .equiv OSCFAIL, 0x0001

;------------------------------------------------------------------------------
;     INTCON2 : Interrupt Control Register 2
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv ALTIVT, 0x000F
         .equiv DISI, 0x000E


; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv INT4EP, 0x0004
         .equiv INT3EP, 0x0003
         .equiv INT2EP, 0x0002
         .equiv INT1EP, 0x0001
         .equiv INT0EP, 0x0000

;------------------------------------------------------------------------------
;     IFS0 : Interrupt Flag Status Register 0
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv CNIF, 0x000F
         .equiv MI2CIF, 0x000E
         .equiv SI2CIF, 0x000D
         .equiv NVMIF, 0x000C
         .equiv ADIF, 0x000B
         .equiv U1TXIF, 0x000A
         .equiv U1RXIF, 0x0009
         .equiv SPI1IF, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv T3IF, 0x0007
         .equiv T2IF, 0x0006
         .equiv OC2IF, 0x0005
         .equiv IC2IF, 0x0004
         .equiv T1IF, 0x0003
         .equiv OC1IF, 0x0002
         .equiv IC1IF, 0x0001
         .equiv INT0IF, 0x0000

;------------------------------------------------------------------------------
;     IFS1 : Interrupt Flag Status Register 1
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv IC6IF, 0x000F
         .equiv IC5IF, 0x000E
         .equiv IC4IF, 0x000D
         .equiv IC3IF, 0x000C
         .equiv C1IF, 0x000B
         .equiv SPI2IF, 0x000A
         .equiv U2TXIF, 0x0009
         .equiv U2RXIF, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv INT2IF, 0x0007
         .equiv T5IF, 0x0006
         .equiv T4IF, 0x0005
         .equiv OC4IF, 0x0004
         .equiv OC3IF, 0x0003
         .equiv IC8IF, 0x0002
         .equiv IC7IF, 0x0001
         .equiv INT1IF, 0x0000

;------------------------------------------------------------------------------
;     IFS2 : Interrupt Flag Status Register 2
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv FLTBIF, 0x000C
         .equiv FLTAIF, 0x000B
         .equiv LVDIF, 0x000A

         .equiv QEIIF, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv PWMIF, 0x0007
         .equiv C2IF, 0x0006
         .equiv INT4IF, 0x0005
         .equiv INT3IF, 0x0004
         .equiv OC8IF, 0x0003
         .equiv OC7IF, 0x0002
         .equiv OC6IF, 0x0001
         .equiv OC5IF, 0x0000

;------------------------------------------------------------------------------
;     IEC0 : Interrupt Enable Control Register 0
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv CNIE, 0x000F
         .equiv MI2CIE, 0x000E
         .equiv SI2CIE, 0x000D
         .equiv NVMIE, 0x000C
         .equiv ADIE, 0x000B
         .equiv U1TXIE, 0x000A
         .equiv U1RXIE, 0x0009
         .equiv SPI1IE, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv T3IE, 0x0007
         .equiv T2IE, 0x0006
         .equiv OC2IE, 0x0005
         .equiv IC2IE, 0x0004
         .equiv T1IE, 0x0003
         .equiv OC1IE, 0x0002
         .equiv IC1IE, 0x0001
         .equiv INT0IE, 0x0000

;------------------------------------------------------------------------------
;     IEC1 : Interrupt Enable Control Register 1
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv IC6IE, 0x000F
         .equiv IC5IE, 0x000E
         .equiv IC4IE, 0x000D
         .equiv IC3IE, 0x000C
         .equiv C1IE, 0x000B
         .equiv SPI2IE, 0x000A
         .equiv U2TXIE, 0x0009
         .equiv U2RXIE, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv INT2IE, 0x0007
         .equiv T5IE, 0x0006
         .equiv T4IE, 0x0005
         .equiv OC4IE, 0x0004
         .equiv OC3IE, 0x0003
         .equiv IC8IE, 0x0002
         .equiv IC7IE, 0x0001
         .equiv INT1IE, 0x0000

;------------------------------------------------------------------------------
;     IEC2 : Interrupt Enable Control Register 2
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv FLTBIE, 0x000C
         .equiv FLTAIE, 0x000B
         .equiv LVDIE, 0x000A

         .equiv QEIIE, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv PWMIE, 0x0007
         .equiv C2IE, 0x0006
         .equiv INT4IE, 0x0005
         .equiv INT3IE, 0x0004
         .equiv OC8IE, 0x0003
         .equiv OC7IE, 0x0002
         .equiv OC6IE, 0x0001
         .equiv OC5IE, 0x0000

;------------------------------------------------------------------------------
;     IPC0 : Interrupt Priority Control Register 0
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv T1IP2, 0x000E
         .equiv T1IP1, 0x000D
         .equiv T1IP0, 0x000C
         .equiv OC1IP2, 0x000A
         .equiv OC1IP1, 0x0009
         .equiv OC1IP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv IC1IP2, 0x0006
         .equiv IC1IP1, 0x0005
         .equiv IC1IP0, 0x0004
         .equiv INT0IP2, 0x0002
         .equiv INT0IP1, 0x0001
         .equiv INT0IP0, 0x0000

;------------------------------------------------------------------------------
;     IPC1 : Interrupt Priority Control Register 1
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv T3IP2, 0x000E
         .equiv T3IP1, 0x000D
         .equiv T3IP0, 0x000C
         .equiv T2IP2, 0x000A
         .equiv T2IP1, 0x0009
         .equiv T2IP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv OC2IP2, 0x0006
         .equiv OC2IP1, 0x0005
         .equiv OC2IP0, 0x0004
         .equiv IC2IP2, 0x0002
         .equiv IC2IP1, 0x0001
         .equiv IC2IP0, 0x0000

;------------------------------------------------------------------------------
;     IPC2 : Interrupt Priority Control Register 2
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv ADIP2, 0x000E
         .equiv ADIP1, 0x000D
         .equiv ADIP0, 0x000C
         .equiv U1TXIP2, 0x000A
         .equiv U1TXIP1, 0x0009
         .equiv U1TXIP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv U1RXIP2, 0x0006
         .equiv U1RXIP1, 0x0005
         .equiv U1RXIP0, 0x0004
         .equiv SPI1IP2, 0x0002
         .equiv SPI1IP1, 0x0001
         .equiv SPI1IP0, 0x0000

;------------------------------------------------------------------------------
;     IPC3 : Interrupt Priority Control Register 3
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv CNIP2, 0x000E
         .equiv CNIP1, 0x000D
         .equiv CNIP0, 0x000C
         .equiv MI2CIP2, 0x000A
         .equiv MI2CIP1, 0x0009
         .equiv MI2CIP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv SI2CIP2, 0x0006
         .equiv SI2CIP1, 0x0005
         .equiv SI2CIP0, 0x0004
         .equiv NVMIP2, 0x0002
         .equiv NVMIP1, 0x0001
         .equiv NVMIP0, 0x0000

;------------------------------------------------------------------------------
;     IPC4 : Interrupt Priority Control Register 4
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv OC3IP2, 0x000E
         .equiv OC3IP1, 0x000D
         .equiv OC3IP0, 0x000C
         .equiv IC8IP2, 0x000A
         .equiv IC8IP1, 0x0009
         .equiv IC8IP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv IC7IP2, 0x0006
         .equiv IC7IP1, 0x0005
         .equiv IC7IP0, 0x0004
         .equiv INT1IP2, 0x0002
         .equiv INT1IP1, 0x0001
         .equiv INT1IP0, 0x0000

;------------------------------------------------------------------------------
;     IPC5 : Interrupt Priority Control Register 5
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv INT2IP2, 0x000E
         .equiv INT2IP1, 0x000D
         .equiv INT2IP0, 0x000C
         .equiv T5IP2, 0x000A
         .equiv T5IP1, 0x0009
         .equiv T5IP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv T4IP2, 0x0006
         .equiv T4IP1, 0x0005
         .equiv T4IP0, 0x0004
         .equiv OC4IP2, 0x0002
         .equiv OC4IP1, 0x0001
         .equiv OC4IP0, 0x0000

;------------------------------------------------------------------------------
;     IPC6 : Interrupt Priority Control Register 6
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv C1IP2, 0x000E
         .equiv C1IP1, 0x000D
         .equiv C1IP0, 0x000C
         .equiv SPI2IP2, 0x000A
         .equiv SPI2IP1, 0x0009
         .equiv SPI2IP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv U2TXIP2, 0x0006
         .equiv U2TXIP1, 0x0005
         .equiv U2TXIP0, 0x0004
         .equiv U2RXIP2, 0x0002
         .equiv U2RXIP1, 0x0001
         .equiv U2RXIP0, 0x0000

;------------------------------------------------------------------------------
;     IPC7 : Interrupt Priority Control Register 7
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv IC6IP2, 0x000E
         .equiv IC6IP1, 0x000D
         .equiv IC6IP0, 0x000C
         .equiv IC5IP2, 0x000A
         .equiv IC5IP1, 0x0009
         .equiv IC5IP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv IC4IP2, 0x0006
         .equiv IC4IP1, 0x0005
         .equiv IC4IP0, 0x0004
         .equiv IC3IP2, 0x0002
         .equiv IC3IP1, 0x0001
         .equiv IC3IP0, 0x0000

;------------------------------------------------------------------------------
;     IPC8 : Interrupt Priority Control Register 8
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv OC8IP2, 0x000E
         .equiv OC8IP1, 0x000D
         .equiv OC8IP0, 0x000C
         .equiv OC7IP2, 0x000A
         .equiv OC7IP1, 0x0009
         .equiv OC7IP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv OC6IP2, 0x0006
         .equiv OC6IP1, 0x0005
         .equiv OC6IP0, 0x0004
         .equiv OC5IP2, 0x0002
         .equiv OC5IP1, 0x0001
         .equiv OC5IP0, 0x0000

;------------------------------------------------------------------------------
;     IPC9 : Interrupt Priority Control Register 9
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv PWMIP2, 0x000E
         .equiv PWMIP1, 0x000D
         .equiv PWMIP0, 0x000C
         .equiv C2IP2, 0x000A
         .equiv C2IP1, 0x0009
         .equiv C2IP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv INT4IP2, 0x0006
         .equiv INT4IP1, 0x0005
         .equiv INT4IP0, 0x0004
         .equiv INT3IP2, 0x0002
         .equiv INT3IP1, 0x0001
         .equiv INT3IP0, 0x0000

;------------------------------------------------------------------------------
;     IPC10 : Interrupt Priority Control Register 10
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv FLTAIP2, 0x000E
         .equiv FLTAIP1, 0x000D
         .equiv FLTAIP0, 0x000C
         .equiv LVDIP2, 0x000A
         .equiv LVDIP1, 0x0009
         .equiv LVDIP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv QEIIP2, 0x0002
         .equiv QEIIP1, 0x0001
         .equiv QEIIP0, 0x0000

;------------------------------------------------------------------------------
;     IPC11 : Interrupt Priority Control Register 11
;------------------------------------------------------------------------------
; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv FLTBIP2, 0x0002
         .equiv FLTBIP1, 0x0001
         .equiv FLTBIP0, 0x0000

;==============================================================================
;
; 3.  Input Change Notification Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 3a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv CNEN1L, _CNEN1                  ; See description for all
         .equiv CNEN1H, _CNEN1+1                ;  registers in sub-section below
         .equiv CNEN2L, _CNEN2

         .equiv CNPU1L, _CNPU1
         .equiv CNPU1H, _CNPU1+1
         .equiv CNPU2L, _CNPU2


;------------------------------------------------------------------------------
; 3b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     CNEN1 : Input Change Notification Interrupt Enable Register 1
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv CN15IE, 0x000F
         .equiv CN14IE, 0x000E
         .equiv CN13IE, 0x000D
         .equiv CN12IE, 0x000C
         .equiv CN11IE, 0x000B
         .equiv CN10IE, 0x000A
         .equiv CN9IE, 0x0009
         .equiv CN8IE, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv CN7IE, 0x0007
         .equiv CN6IE, 0x0006
         .equiv CN5IE, 0x0005
         .equiv CN4IE, 0x0004
         .equiv CN3IE, 0x0003
         .equiv CN2IE, 0x0002
         .equiv CN1IE, 0x0001
         .equiv CN0IE, 0x0000

;------------------------------------------------------------------------------
;     CNEN2 : Input Change Notification Interrupt Enable Register 2
;------------------------------------------------------------------------------
; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv CN21IE, 0x0005
         .equiv CN20IE, 0x0004
         .equiv CN19IE, 0x0003
         .equiv CN18IE, 0x0002
         .equiv CN17IE, 0x0001
         .equiv CN16IE, 0x0000

;------------------------------------------------------------------------------
;     CNPU1 : Input Change Notification Pullup Enable Register 1
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv CN15PUE, 0x000F
         .equiv CN14PUE, 0x000E
         .equiv CN13PUE, 0x000D
         .equiv CN12PUE, 0x000C
         .equiv CN11PUE, 0x000B
         .equiv CN10PUE, 0x000A
         .equiv CN9PUE, 0x0009
         .equiv CN8PUE, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv CN7PUE, 0x0007
         .equiv CN6PUE, 0x0006
         .equiv CN5PUE, 0x0005
         .equiv CN4PUE, 0x0004
         .equiv CN3PUE, 0x0003
         .equiv CN2PUE, 0x0002
         .equiv CN1PUE, 0x0001
         .equiv CN0PUE, 0x0000

;------------------------------------------------------------------------------
;     CNPU2 : Input Change Notification Pullup Enable Register 2
;------------------------------------------------------------------------------
; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv CN21PUE, 0x0005
         .equiv CN20PUE, 0x0004
         .equiv CN19PUE, 0x0003
         .equiv CN18PUE, 0x0002
         .equiv CN17PUE, 0x0001
         .equiv CN16PUE, 0x0000

;==============================================================================
;
; 4.  Timer Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 4a. SFR Definitions
;------------------------------------------------------------------------------

;---------------Timer 1 Module-------------------------------------------------
         .equiv TMR1L, _TMR1
         .equiv TMR1H, _TMR1+1
         .equiv PR1L, _PR1
         .equiv PR1H, _PR1+1
         .equiv T1CONL, _T1CON                  ; See TxCON description in
         .equiv T1CONH, _T1CON+1                ;  sub-section below

;---------------Timer2/3 Module------------------------------------------------
         .equiv TMR2L, _TMR2
         .equiv TMR2H, _TMR2+1
         .equiv TMR3HLDL, _TMR3HLD
         .equiv TMR3HLDH, _TMR3HLD+1
         .equiv TMR3L, _TMR3
         .equiv TMR3H, _TMR3+1
         .equiv PR2L, _PR2
         .equiv PR2H, _PR2+1
         .equiv PR3L, _PR3
         .equiv PR3H, _PR3+1
         .equiv T2CONL, _T2CON                  ; See TxCON description in
         .equiv T2CONH, _T2CON+1                ;  sub-section below
         .equiv T3CONL, _T3CON                  ; - do -
         .equiv T3CONH, _T3CON+1

;-------------- Timer4/5 Module------------------------------------------------
         .equiv TMR4L, _TMR4
         .equiv TMR4H, _TMR4+1
         .equiv TMR5HLDL, _TMR5HLD
         .equiv TMR5HLDH, _TMR5HLD+1
         .equiv TMR5L, _TMR5
         .equiv TMR5H, _TMR5+1
         .equiv PR4L, _PR4
         .equiv PR4H, _PR4+1
         .equiv PR5L, _PR5
         .equiv PR5H, _PR5+1
         .equiv T4CONL, _T4CON                  ; See TxCON description in
         .equiv T4CONH, _T4CON+1                ;  sub-section below
         .equiv T5CONL, _T5CON                  ; - do -
         .equiv T5CONH, _T5CON+1

;-------------------------------------------------------------------------------
; 4b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     TxCON : Timer x Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv TON, 0x000F
         .equiv TSIDL, 0x000D

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv TGATE, 0x0006
         .equiv TCKPS1, 0x0005
         .equiv TCKPS0, 0x0004
         .equiv T32, 0x0003        ;T32 present only in T2CON and T4CON
         .equiv TSYNC, 0x0002
         .equiv TCS, 0x0001

;==============================================================================
;
; 5.  Quadrature Encoder Interface Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 5a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv QEICONL, _QEICON                ; See QEICON description in
         .equiv QEICONH, _QEICON+1              ;  sub-section below
         .equiv DFLTCONL, _DFLTCON              ; See DFLTCON description in
         .equiv DFLTCONH, _DFLTCON+1            ;  sub-section below
         .equiv POSCNTL, _POSCNT
         .equiv POSCNTH, _POSCNT+1
         .equiv MAXCNTL, _MAXCNT
         .equiv MAXCNTH, _MAXCNT+1

;------------------------------------------------------------------------------
; 5b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     QEICON : Quadrature Encoder Interface Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv CNTERR, 0x000F
         .equiv QEISIDL, 0x000D
         .equiv INDX, 0x000C
         .equiv UPDN, 0x000B
         .equiv QEIM2, 0x000A
         .equiv QEIM1, 0x0009
         .equiv QEIM0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv SWPAB, 0x0007
         .equiv PCDOUT, 0x0006
         .equiv TQGATE, 0x0005
         .equiv TQCKPS1, 0x0004
         .equiv TQCKPS0, 0x0003
         .equiv POSRES, 0x0002
         .equiv TQCS, 0x0001
         .equiv UPDN_SRC, 0x0000

;------------------------------------------------------------------------------
;     DFLTCON : Digital Filter Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv CEID, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv QEOUT, 0x0007
         .equiv QECK2, 0x0006
         .equiv QECK1, 0x0005
         .equiv QECK0, 0x0004
         .equiv INDOUT, 0x0003
         .equiv INDCK2, 0x0002
         .equiv INDCK1, 0x0001
         .equiv INDCK0, 0x0000

;==============================================================================
;
; 6.  Input Capture Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 6a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv IC1BUFL, _IC1BUF
         .equiv IC1BUFH, _IC1BUF+1
         .equiv IC1CONL, _IC1CON                ; See ICxCON description in
         .equiv IC1CONH, _IC1CON+1              ;  sub-section below
         .equiv IC2BUFL, _IC2BUF
         .equiv IC2BUFH, _IC2BUF+1
         .equiv IC2CONL, _IC2CON                ; See ICxCON description in
         .equiv IC2CONH, _IC2CON+1              ;  sub-section below
         .equiv IC3BUFL, _IC3BUF
         .equiv IC3BUFH, _IC3BUF+1
         .equiv IC3CONL, _IC3CON                ; See ICxCON description in
         .equiv IC3CONH, _IC3CON+1              ;  sub-section below
         .equiv IC4BUFL, _IC4BUF
         .equiv IC4BUFH, _IC4BUF+1
         .equiv IC4CONL, _IC4CON                ; See ICxCON description in
         .equiv IC4CONH, _IC4CON+1              ;  sub-section below
         .equiv IC5BUFL, _IC5BUF
         .equiv IC5BUFH, _IC5BUF+1
         .equiv IC5CONL, _IC5CON                ; See ICxCON description in
         .equiv IC5CONH, _IC5CON+1              ;  sub-section below
         .equiv IC6BUFL, _IC6BUF
         .equiv IC6BUFH, _IC6BUF+1
         .equiv IC6CONL, _IC6CON                ; See ICxCON description in
         .equiv IC6CONH, _IC6CON+1              ;  sub-section below
         .equiv IC7BUFL, _IC7BUF
         .equiv IC7BUFH, _IC7BUF+1
         .equiv IC7CONL, _IC7CON                ; See ICxCON description in
         .equiv IC7CONH, _IC7CON+1              ;  sub-section below
         .equiv IC8BUFL, _IC8BUF
         .equiv IC8BUFH, _IC8BUF+1
         .equiv IC8CONL, _IC8CON                ; See ICxCON description in
         .equiv IC8CONH, _IC8CON+1              ;  sub-section below
;------------------------------------------------------------------------------
; 6b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     ICxCON : Input Capture x Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv ICSIDL, 0x000D

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv ICTMR, 0x0007
         .equiv ICI1, 0x0006
         .equiv ICI0, 0x0005
         .equiv ICOV, 0x0004
         .equiv ICBNE, 0x0003
         .equiv ICM2, 0x0002
         .equiv ICM1, 0x0001
         .equiv ICM0, 0x0000

;==============================================================================
;
; 7.  Output Compare Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 7a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv OC1RSL, _OC1RS
         .equiv OC1RSH, _OC1RS+1
         .equiv OC1RL, _OC1R
         .equiv OC1RH, _OC1R+1
         .equiv OC1CONL, _OC1CON                ; See OCxCON description in
         .equiv OC1CONH, _OC1CON+1              ;  sub-section below
         .equiv OC2RSL, _OC2RS
         .equiv OC2RSH, _OC2RS+1
         .equiv OC2RL, _OC2R
         .equiv OC2RH, _OC2R+1
         .equiv OC2CONL, _OC2CON                ; See OCxCON description in
         .equiv OC2CONH, _OC2CON+1              ;  sub-section below
         .equiv OC3RSL, _OC3RS
         .equiv OC3RSH, _OC3RS+1
         .equiv OC3RL, _OC3R
         .equiv OC3RH, _OC3R+1
         .equiv OC3CONL, _OC3CON                ; See OCxCON description in
         .equiv OC3CONH, _OC3CON+1              ;  sub-section below
         .equiv OC4RSL, _OC4RS
         .equiv OC4RSH, _OC4RS+1
         .equiv OC4RL, _OC4R
         .equiv OC4RH, _OC4R+1
         .equiv OC4CONL, _OC4CON                ; See OCxCON description in
         .equiv OC4CONH, _OC4CON+1              ;  sub-section below
         .equiv OC5RSL, _OC5RS
         .equiv OC5RSH, _OC5RS+1
         .equiv OC5RL, _OC5R
         .equiv OC5RH, _OC5R+1
         .equiv OC5CONL, _OC5CON                ; See OCxCON description in
         .equiv OC5CONH, _OC5CON+1              ;  sub-section below
         .equiv OC6RSL, _OC6RS
         .equiv OC6RSH, _OC6RS+1
         .equiv OC6RL, _OC6R
         .equiv OC6RH, _OC6R+1
         .equiv OC6CONL, _OC6CON                ; See OCxCON description in
         .equiv OC6CONH, _OC6CON+1              ;  sub-section below
         .equiv OC7RSL, _OC7RS
         .equiv OC7RSH, _OC7RS+1
         .equiv OC7RL, _OC7R
         .equiv OC7RH, _OC7R+1
         .equiv OC7CONL, _OC7CON                ; See OCxCON description in
         .equiv OC7CONH, _OC7CON+1              ;  sub-section below
         .equiv OC8RSL, _OC8RS
         .equiv OC8RSH, _OC8RS+1
         .equiv OC8RL, _OC8R
         .equiv OC8RH, _OC8R+1
         .equiv OC8CONL, _OC8CON                ; See OCxCON description in
         .equiv OC8CONH, _OC8CON+1              ;  sub-section below

;------------------------------------------------------------------------------
; 7b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     OCxCON : Output Compare x Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv OCSIDL, 0x000D

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv OCFLT, 0x0004
         .equiv OCTSEL, 0x0003
         .equiv OCM2, 0x0002
         .equiv OCM1, 0x0001
         .equiv OCM0, 0x0000

;==============================================================================
;
; 8. Motor Control PWM Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 8a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv PTCONL, _PTCON           ; See description for all registers
         .equiv PTCONH, _PTCON+1         ;  except PDCx registers, in section 8b
         .equiv PTMRL, _PTMR
         .equiv PTMRH, _PTMR+1
         .equiv PTPERL, _PTPER
         .equiv PTPERH, _PTPER+1
         .equiv SEVTCMPL, _SEVTCMP
         .equiv SEVTCMPH, _SEVTCMP+1
         .equiv PWMCON1L, _PWMCON1
         .equiv PWMCON1H, _PWMCON1+1
         .equiv PWMCON2L, _PWMCON2
         .equiv PWMCON2H, _PWMCON2+1
         .equiv DTCON1L, _DTCON1
         .equiv DTCON1H, _DTCON1+1
         .equiv DTCON2L, _DTCON2
         .equiv DTCON2H, _DTCON2+1
         .equiv FLTACONL, _FLTACON
         .equiv FLTACONH, _FLTACON+1
         .equiv FLTBCONL, _FLTBCON
         .equiv FLTBCONH, _FLTBCON+1
         .equiv OVDCONL, _OVDCON
         .equiv OVDCONH, _OVDCON+1
         .equiv PDC1L, _PDC1
         .equiv PDC1H, _PDC1+1
         .equiv PDC2L, _PDC2
         .equiv PDC2H, _PDC2+1
         .equiv PDC3L, _PDC3
         .equiv PDC3H, _PDC3+1
         .equiv PDC4L, _PDC4
         .equiv PDC4H, _PDC4+1

;------------------------------------------------------------------------------
; 8b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     PTCON : PWM Timebase Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv PTEN, 0x000F
         .equiv PTSIDL, 0x000D

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv PTOPS3, 0x0007
         .equiv PTOPS2, 0x0006
         .equiv PTOPS1, 0x0005
         .equiv PTOPS0, 0x0004
         .equiv PTCKPS1, 0x0003
         .equiv PTCKPS0, 0x0002
         .equiv PTMOD1, 0x0001
         .equiv PTMOD0, 0x0000

;------------------------------------------------------------------------------
;     PTMR : PWM Timebase Count Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv PTDIR, 0x000F

;------------------------------------------------------------------------------
;     SEVTCMP : Special Event Compare Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv SEVTDIR, 0x000F

;------------------------------------------------------------------------------
;     PWMCON1 : PWM Control Register 1
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv PMOD4, 0x000B
         .equiv PMOD3, 0x000A
         .equiv PMOD2, 0x0009
         .equiv PMOD1, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv PEN4H, 0x0007
         .equiv PEN3H, 0x0006
         .equiv PEN2H, 0x0005
         .equiv PEN1H, 0x0004
         .equiv PEN4L, 0x0003
         .equiv PEN3L, 0x0002
         .equiv PEN2L, 0x0001
         .equiv PEN1L, 0x0000

;------------------------------------------------------------------------------
;     PWMCON2 : PWM Control Register 2
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv SEVOPS3, 0x000B
         .equiv SEVOPS2, 0x000A
         .equiv SEVOPS1, 0x0009
         .equiv SEVOPS0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv OSYNC, 0x0001
         .equiv UDIS, 0x0000

;------------------------------------------------------------------------------
;     DTCON1 : Dead Time Control Register 1
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv DTBPS1, 0x000F
         .equiv DTBPS0, 0x000E
         .equiv DTB5, 0x000D
         .equiv DTB4, 0x000C
         .equiv DTB3, 0x000B
         .equiv DTB2, 0x000A
         .equiv DTB1, 0x0009
         .equiv DTB0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv DTAPS1, 0x0007
         .equiv DTAPS0, 0x0006
         .equiv DTA5, 0x0005
         .equiv DTA4, 0x0004
         .equiv DTA3, 0x0003
         .equiv DTA2, 0x0002
         .equiv DTA1, 0x0001
         .equiv DTA0, 0x0000

;------------------------------------------------------------------------------
;     DTCON2 : Dead Time Control Register 2
;------------------------------------------------------------------------------
; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv DTS4A, 0x0007
         .equiv DTS4I, 0x0006
         .equiv DTS3A, 0x0005
         .equiv DTS3I, 0x0004
         .equiv DTS2A, 0x0003
         .equiv DTS2I, 0x0002
         .equiv DTS1A, 0x0001
         .equiv DTS1I, 0x0000

;------------------------------------------------------------------------------
;     FLTACON : Fault Input A Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv FAOV4H, 0x000F
         .equiv FAOV4L, 0x000E
         .equiv FAOV3H, 0x000D
         .equiv FAOV3L, 0x000C
         .equiv FAOV2H, 0x000B
         .equiv FAOV2L, 0x000A
         .equiv FAOV1H, 0x0009
         .equiv FAOV1L, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv FLTAM, 0x0007
         .equiv FAEN4, 0x0003
         .equiv FAEN3, 0x0002
         .equiv FAEN2, 0x0001
         .equiv FAEN1, 0x0000

;------------------------------------------------------------------------------
;     FLTBCON : Fault Input B Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv FBOV4H, 0x000F
         .equiv FBOV4L, 0x000E
         .equiv FBOV3H, 0x000D
         .equiv FBOV3L, 0x000C
         .equiv FBOV2H, 0x000B
         .equiv FBOV2L, 0x000A
         .equiv FBOV1H, 0x0009
         .equiv FBOV1L, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv FLTBM, 0x0007
         .equiv FBEN4, 0x0003
         .equiv FBEN3, 0x0002
         .equiv FBEN2, 0x0001
         .equiv FBEN1, 0x0000

;------------------------------------------------------------------------------
;     OVDCON : PWM Output Override Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv POVD4H, 0x000F
         .equiv POVD4L, 0x000E
         .equiv POVD3H, 0x000D
         .equiv POVD3L, 0x000C
         .equiv POVD2H, 0x000B
         .equiv POVD2L, 0x000A
         .equiv POVD1H, 0x0009
         .equiv POVD1L, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv POUT4H, 0x0007
         .equiv POUT4L, 0x0006
         .equiv POUT3H, 0x0005
         .equiv POUT3L, 0x0004
         .equiv POUT2H, 0x0003
         .equiv POUT2L, 0x0002
         .equiv POUT1H, 0x0001
         .equiv POUT1L, 0x0000

;==============================================================================
;
; 9. Inter-Integrated Circuit(I2C) Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 9a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv I2CRCVL, _I2CRCV
         .equiv I2CRCVH, _I2CRCV+1
         .equiv I2CTRNL, _I2CTRN
         .equiv I2CTRNH, _I2CTRN+1
         .equiv I2CBRGL, _I2CBRG
         .equiv I2CBRGH, _I2CBRG+1
         .equiv I2CCONL, _I2CCON                ; See I2CCON description in
         .equiv I2CCONH, _I2CCON+1              ;  section 9b
         .equiv I2CSTATL, _I2CSTAT              ; See I2CSTAT description in
         .equiv I2CSTATH, _I2CSTAT+1            ;  section 9b
         .equiv I2CADDL, _I2CADD
         .equiv I2CADDH, _I2CADD+1

;------------------------------------------------------------------------------
; 9b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     I2CCON : I2C Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv I2CEN, 0x000F
         .equiv I2CSIDL, 0x000D
         .equiv SCLREL, 0x000C
         .equiv IPMIEN, 0x000B
         .equiv A10M, 0x000A
         .equiv DISSLW, 0x0009
         .equiv SMEN, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv GCEN, 0x0007
         .equiv STREN, 0x0006
         .equiv ACKDT, 0x0005
         .equiv ACKEN, 0x0004
         .equiv RCEN, 0x0003
         .equiv PEN, 0x0002
         .equiv RSEN, 0x0001
         .equiv SEN, 0x0000

;------------------------------------------------------------------------------
;     I2CSTAT : I2C Status Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv ACKSTAT, 0x000F
         .equiv TRSTAT, 0x000E
         .equiv BCL, 0x000A
         .equiv GCSTAT, 0x0009
         .equiv ADD10, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv IWCOL, 0x0007
         .equiv I2COV, 0x0006
         .equiv D_A, 0x0005
         .equiv P, 0x0004
         .equiv S, 0x0003
         .equiv R_W, 0x0002
         .equiv RBF, 0x0001
         .equiv TBF, 0x0000

;==============================================================================
;
; 10. UARTx Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 10a. SFR Definitions
;------------------------------------------------------------------------------
;------------------UART 1 Module-----------------------------------------------
         .equiv U1MODEL, _U1MODE                ; See UxMODE description in
         .equiv U1MODEH, _U1MODE+1              ;  sub-section below
         .equiv U1STAL, _U1STA                  ; See UxSTA description in
         .equiv U1STAH, _U1STA+1                ;  sub-section below
         .equiv U1TXREGL, _U1TXREG
         .equiv U1TXREGH, _U1TXREG+1
         .equiv U1RXREGL, _U1RXREG
         .equiv U1RXREGH, _U1RXREG+1
         .equiv U1BRGL, _U1BRG
         .equiv U1BRGH, _U1BRG+1

;-------------------UART 2 Module----------------------------------------------
         .equiv U2MODEL, _U2MODE                ; See UxMODE description in
         .equiv U2MODEH, _U2MODE+1              ;  sub-section below
         .equiv U2STAL, _U2STA                  ; See UxSTA description in
         .equiv U2STAH, _U2STA+1                ;  sub-section below
         .equiv U2TXREGL, _U2TXREG
         .equiv U2TXREGH, _U2TXREG+1
         .equiv U2RXREGL, _U2RXREG
         .equiv U2RXREGH, _U2RXREG+1
         .equiv U2BRGL, _U2BRG
         .equiv U2BRGH, _U2BRG+1

;------------------------------------------------------------------------------
; 10b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     UxMODE : UART x Mode Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv UARTEN, 0x000F
         .equiv USIDL, 0x000D
         .equiv ALTIO, 0x000A


; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv WAKE, 0x0007
         .equiv LPBACK, 0x0006
         .equiv ABAUD, 0x0005
         .equiv PDSEL1, 0x0002
         .equiv PDSEL0, 0x0001
         .equiv STSEL, 0x0000

;------------------------------------------------------------------------------
;     UxSTA : UART x Status and Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv UTXISEL, 0x000F
         .equiv UTXBRK, 0x000B
         .equiv UTXEN, 0x000A
         .equiv UTXBF, 0x0009
         .equiv TRMT, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv URXISEL1, 0x0007
         .equiv URXISEL0, 0x0006
         .equiv ADDEN, 0x0005
         .equiv RIDLE, 0x0004
         .equiv PERR, 0x0003
         .equiv FERR, 0x0002
         .equiv OERR, 0x0001
         .equiv URXDA, 0x0000

;==============================================================================
;
; 11. Serial Peripheral Interface Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.      (SPIx)
;==============================================================================
; 11a. SFR Definitions
;------------------------------------------------------------------------------
;------------------SPI 1 Module------------------------------------------------
         .equiv SPI1STATL, _SPI1STAT    ; See SPIxSTAT description in
         .equiv SPI1STATH, _SPI1STAT+1  ;  sub-section below
         .equiv SPI1CONL, _SPI1CON      ; See SPIxCON description in
         .equiv SPI1CONH, _SPI1CON+1    ;  sub-section below
         .equiv SPI1BUFL, _SPI1BUF
         .equiv SPI1BUFH, _SPI1BUF+1

;------------------SPI 2 Module------------------------------------------------
         .equiv SPI2STATL, _SPI2STAT    ; See SPIxSTAT description in
         .equiv SPI2STATH, _SPI2STAT+1  ;  sub-section below
         .equiv SPI2CONL, _SPI2CON      ; See SPIxCON description in
         .equiv SPI2CONH, _SPI2CON+1    ;  sub-section below
         .equiv SPI2BUFL, _SPI2BUF
         .equiv SPI2BUFH, _SPI2BUF+1

;------------------------------------------------------------------------------
; 11b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     SPIxSTAT : SPI x Status register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv SPIEN, 0x000F
         .equiv SPISIDL, 0x000D

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv SPIROV, 0x0006
         .equiv SPITBF, 0x0001
         .equiv SPIRBF, 0x0000


;------------------------------------------------------------------------------
;     SPIxCON : SPI x Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv FRMEN, 0x000E
         .equiv SPIFSD, 0x000D
         .equiv DISSDO, 0x000B
         .equiv MODE16, 0x000A
         .equiv SMP, 0x0009
         .equiv CKE, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv SSEN, 0x0007
         .equiv CKP, 0x0006
         .equiv MSTEN, 0x0005
         .equiv SPRE2, 0x0004
         .equiv SPRE1, 0x0003
         .equiv SPRE0, 0x0002
         .equiv PPRE1, 0x0001
         .equiv PPRE0, 0x0000

;==============================================================================
;
; 12.  A/D Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 12a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv ADCBUF0L, _ADCBUF0
         .equiv ADCBUF0H, _ADCBUF0+1
         .equiv ADCBUF1L, _ADCBUF1
         .equiv ADCBUF1H, _ADCBUF1+1
         .equiv ADCBUF2L, _ADCBUF2
         .equiv ADCBUF2H, _ADCBUF2+1
         .equiv ADCBUF3L, _ADCBUF3
         .equiv ADCBUF3H, _ADCBUF3+1
         .equiv ADCBUF4L, _ADCBUF4
         .equiv ADCBUF4H, _ADCBUF4+1
         .equiv ADCBUF5L, _ADCBUF5
         .equiv ADCBUF5H, _ADCBUF5+1
         .equiv ADCBUF6L, _ADCBUF6
         .equiv ADCBUF6H, _ADCBUF6+1
         .equiv ADCBUF7L, _ADCBUF7
         .equiv ADCBUF7H, _ADCBUF7+1
         .equiv ADCBUF8L, _ADCBUF8
         .equiv ADCBUF8H, _ADCBUF8+1
         .equiv ADCBUF9L, _ADCBUF9
         .equiv ADCBUF9H, _ADCBUF9+1
         .equiv ADCBUFAL, _ADCBUFA
         .equiv ADCBUFAH, _ADCBUFA+1
         .equiv ADCBUFBL, _ADCBUFB
         .equiv ADCBUFBH, _ADCBUFB+1
         .equiv ADCBUFCL, _ADCBUFC
         .equiv ADCBUFCH, _ADCBUFC+1
         .equiv ADCBUFDL, _ADCBUFD
         .equiv ADCBUFDH, _ADCBUFD+1
         .equiv ADCBUFEL, _ADCBUFE
         .equiv ADCBUFEH, _ADCBUFE+1
         .equiv ADCBUFFL, _ADCBUFF
         .equiv ADCBUFFH, _ADCBUFF+1
         .equiv ADCON1L, _ADCON1                ; See ADCON1L through ADPCFGH
         .equiv ADCON1H, _ADCON1+1              ;  description in sub-section below
         .equiv ADCON2L, _ADCON2
         .equiv ADCON2H, _ADCON2+1
         .equiv ADCON3L, _ADCON3
         .equiv ADCON3H, _ADCON3+1
         .equiv ADCHSL, _ADCHS
         .equiv ADCHSH, _ADCHS+1
         .equiv ADPCFGL, _ADPCFG
         .equiv ADPCFGH, _ADPCFG+1
         .equiv ADCSSLL, _ADCSSL
         .equiv ADCSSLH, _ADCSSL+1

;------------------------------------------------------------------------------
; 12b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     ADCON1 : A/D Control Register 1
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv ADON, 0x000F
         .equiv ADSIDL, 0x000D
         .equiv FORM1, 0x0009
         .equiv FORM0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv SSRC2, 0x0007
         .equiv SSRC1, 0x0006
         .equiv SSRC0, 0x0005
         .equiv SIMSAM, 0x0003
         .equiv ASAM, 0x0002
         .equiv SAMP, 0x0001
         .equiv DONE, 0x0000

;------------------------------------------------------------------------------
;     ADCON2 : A/D Control Register 2
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv VCFG2, 0x000F
         .equiv VCFG1, 0x000E
         .equiv VCFG0, 0x000D
         .equiv CSCNA, 0x000A
         .equiv CHPS1, 0x0009
         .equiv CHPS0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv BUFS, 0x0007
         .equiv SMPI3, 0x0005
         .equiv SMPI2, 0x0004
         .equiv SMPI1, 0x0003
         .equiv SMPI0, 0x0002
         .equiv BUFM, 0x0001
         .equiv ALTS, 0x0000

;------------------------------------------------------------------------------
;     ADCON3 : A/D Control Register 3
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv SAMC4, 0x000C
         .equiv SAMC3, 0x000B
         .equiv SAMC2, 0x000A
         .equiv SAMC1, 0x0009
         .equiv SAMC0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv ADRC, 0x0007
         .equiv ADCS5, 0x0005
         .equiv ADCS4, 0x0004
         .equiv ADCS3, 0x0003
         .equiv ADCS2, 0x0002
         .equiv ADCS1, 0x0001
         .equiv ADCS0, 0x0000

;------------------------------------------------------------------------------
;     ADCHS : A/D Input Channel Select Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv CH123NB1, 0x000F
         .equiv CH123NB0, 0x000E
         .equiv CH123SB, 0x000D
         .equiv CH0NB, 0x000C
         .equiv CH0SB3, 0x000B
         .equiv CH0SB2, 0x000A
         .equiv CH0SB1, 0x0009
         .equiv CH0SB0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv CH123NA1, 0x0007
         .equiv CH123NA0, 0x0006
         .equiv CH123SA, 0x0005
         .equiv CH0NA, 0x0004
         .equiv CH0SA3, 0x0003
         .equiv CH0SA2, 0x0002
         .equiv CH0SA1, 0x0001
         .equiv CH0SA0, 0x0000

;------------------------------------------------------------------------------
;     ADPCFG : A/D Port Configuration Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv PCFG15, 0x000F
         .equiv PCFG14, 0x000E
         .equiv PCFG13, 0x000D
         .equiv PCFG12, 0x000C
         .equiv PCFG11, 0x000B
         .equiv PCFG10, 0x000A
         .equiv PCFG9, 0x0009
         .equiv PCFG8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv PCFG7, 0x0007
         .equiv PCFG6, 0x0006
         .equiv PCFG5, 0x0005
         .equiv PCFG4, 0x0004
         .equiv PCFG3, 0x0003
         .equiv PCFG2, 0x0002
         .equiv PCFG1, 0x0001
         .equiv PCFG0, 0x0000

;------------------------------------------------------------------------------
;     ADCSSL : A/D Input Scan Select Register ;SFR present only in 12-bit ADC
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv CSSL15, 0x000F
         .equiv CSSL14, 0x000E
         .equiv CSSL13, 0x000D
         .equiv CSSL12, 0x000C
         .equiv CSSL11, 0x000B
         .equiv CSSL10, 0x000A
         .equiv CSSL9, 0x0009
         .equiv CSSL8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv CSSL7, 0x0007
         .equiv CSSL6, 0x0006
         .equiv CSSL5, 0x0005
         .equiv CSSL4, 0x0004
         .equiv CSSL3, 0x0003
         .equiv CSSL2, 0x0002
         .equiv CSSL1, 0x0001
         .equiv CSSL0, 0x0000


;==============================================================================
;
; 13.  Port A: General Purpose I/O Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 13a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv TRISAL, _TRISA                  ; See all SFR descriptions in
         .equiv TRISAH, _TRISA+1                ;  sub-section below
         .equiv PORTAL, _PORTA
         .equiv PORTAH, _PORTA+1
         .equiv LATAL, _LATA
         .equiv LATAH, _LATA+1

;------------------------------------------------------------------------------
; 13b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     TRISA : Port A Data Direction Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv TRISA15, 0x000F
         .equiv TRISA14, 0x000E
         .equiv TRISA10, 0x000A
         .equiv TRISA9, 0x0009

;------------------------------------------------------------------------------
;     PORTA : Read Port A Pin / Write Port A Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv RA15, 0x000F
         .equiv RA14, 0x000E
         .equiv RA10, 0x000A
         .equiv RA9, 0x0009

;------------------------------------------------------------------------------
;     LATA : Read / Write Port A Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv LATA15, 0x000F
         .equiv LATA14, 0x000E
         .equiv LATA10, 0x000A
         .equiv LATA9, 0x0009

;==============================================================================
;
; 14.  Port B: General Purpose I/O Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 14a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv TRISBL, _TRISB                  ; See all SFR descriptions in
         .equiv TRISBH, _TRISB+1                ;  sub-section below
         .equiv PORTBL, _PORTB
         .equiv PORTBH, _PORTB+1
         .equiv LATBL, _LATB
         .equiv LATBH, _LATB+1

;------------------------------------------------------------------------------
; 14b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     TRISB : Port B Data Direction Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv TRISB15, 0x000F
         .equiv TRISB14, 0x000E
         .equiv TRISB13, 0x000D
         .equiv TRISB12, 0x000C
         .equiv TRISB11, 0x000B
         .equiv TRISB10, 0x000A
         .equiv TRISB9, 0x0009
         .equiv TRISB8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv TRISB7, 0x0007
         .equiv TRISB6, 0x0006
         .equiv TRISB5, 0x0005
         .equiv TRISB4, 0x0004
         .equiv TRISB3, 0x0003
         .equiv TRISB2, 0x0002
         .equiv TRISB1, 0x0001
         .equiv TRISB0, 0x0000

;------------------------------------------------------------------------------
;     PORTB : Read Port B Pin / Write Port B Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv RB15, 0x000F
         .equiv RB14, 0x000E
         .equiv RB13, 0x000D
         .equiv RB12, 0x000C
         .equiv RB11, 0x000B
         .equiv RB10, 0x000A
         .equiv RB9, 0x0009
         .equiv RB8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv RB7, 0x0007
         .equiv RB6, 0x0006
         .equiv RB5, 0x0005
         .equiv RB4, 0x0004
         .equiv RB3, 0x0003
         .equiv RB2, 0x0002
         .equiv RB1, 0x0001
         .equiv RB0, 0x0000

;------------------------------------------------------------------------------
;     LATB : Read / Write Port B Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv LATB15, 0x000F
         .equiv LATB14, 0x000E
         .equiv LATB13, 0x000D
         .equiv LATB12, 0x000C
         .equiv LATB11, 0x000B
         .equiv LATB10, 0x000A
         .equiv LATB9, 0x0009
         .equiv LATB8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv LATB7, 0x0007
         .equiv LATB6, 0x0006
         .equiv LATB5, 0x0005
         .equiv LATB4, 0x0004
         .equiv LATB3, 0x0003
         .equiv LATB2, 0x0002
         .equiv LATB1, 0x0001
         .equiv LATB0, 0x0000

;==============================================================================
;
; 15.  Port C: General Purpose I/O Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 15a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv TRISCL, _TRISC                  ; See all SFR descriptions in
         .equiv TRISCH, _TRISC+1                ;  sub-section below
         .equiv PORTCL, _PORTC
         .equiv PORTCH, _PORTC+1
         .equiv LATCL, _LATC
         .equiv LATCH, _LATC+1

;------------------------------------------------------------------------------
; 15b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     TRISC : Port C Data Direction Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv TRISC15, 0x000F
         .equiv TRISC14, 0x000E
         .equiv TRISC13, 0x000D

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv TRISC3, 0x0003
         .equiv TRISC1, 0x0001

;------------------------------------------------------------------------------
;     PORTC : Read Port C Pin / Write Port C Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv RC15, 0x000F
         .equiv RC14, 0x000E
         .equiv RC13, 0x000D

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv RC3, 0x0003
         .equiv RC1, 0x0001

;------------------------------------------------------------------------------
;     LATC : Read / Write Port C Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv LATC15, 0x000F
         .equiv LATC14, 0x000E
         .equiv LATC13, 0x000D

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv LATC3, 0x0003
         .equiv LATC1, 0x0001

;==============================================================================
;
; 16.  Port D: General Purpose I/O Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 16a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv TRISDL, _TRISD                  ; See all SFR descriptions in
         .equiv TRISDH, _TRISD+1                ;  sub-section below
         .equiv PORTDL, _PORTD
         .equiv PORTDH, _PORTD+1
         .equiv LATDL, _LATD
         .equiv LATDH, _LATD+1

;------------------------------------------------------------------------------
; 16b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     TRISD : Port D Data Direction Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv TRISD15, 0x000F
         .equiv TRISD14, 0x000E
         .equiv TRISD13, 0x000D
         .equiv TRISD12, 0x000C
         .equiv TRISD11, 0x000B
         .equiv TRISD10, 0x000A
         .equiv TRISD9, 0x0009
         .equiv TRISD8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv TRISD7, 0x0007
         .equiv TRISD6, 0x0006
         .equiv TRISD5, 0x0005
         .equiv TRISD4, 0x0004
         .equiv TRISD3, 0x0003
         .equiv TRISD2, 0x0002
         .equiv TRISD1, 0x0001
         .equiv TRISD0, 0x0000

;------------------------------------------------------------------------------
;     PORTD : Read Port D Pin / Write Port D Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv RD15, 0x000F
         .equiv RD14, 0x000E
         .equiv RD13, 0x000D
         .equiv RD12, 0x000C
         .equiv RD11, 0x000B
         .equiv RD10, 0x000A
         .equiv RD9, 0x0009
         .equiv RD8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv RD7, 0x0007
         .equiv RD6, 0x0006
         .equiv RD5, 0x0005
         .equiv RD4, 0x0004
         .equiv RD3, 0x0003
         .equiv RD2, 0x0002
         .equiv RD1, 0x0001
         .equiv RD0, 0x0000

;------------------------------------------------------------------------------
;     LATD : Read / Write Port D Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv LATD15, 0x000F
         .equiv LATD14, 0x000E
         .equiv LATD13, 0x000D
         .equiv LATD12, 0x000C
         .equiv LATD11, 0x000B
         .equiv LATD10, 0x000A
         .equiv LATD9, 0x0009
         .equiv LATD8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv LATD7, 0x0007
         .equiv LATD6, 0x0006
         .equiv LATD5, 0x0005
         .equiv LATD4, 0x0004
         .equiv LATD3, 0x0003
         .equiv LATD2, 0x0002
         .equiv LATD1, 0x0001
         .equiv LATD0, 0x0000

;==============================================================================
;
; 17.  Port E: General Purpose I/O Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 17a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv TRISEL, _TRISE                  ; See all SFR descriptions in
         .equiv TRISEH, _TRISE+1                ;  sub-section below
         .equiv PORTEL, _PORTE
         .equiv PORTEH, _PORTE+1
         .equiv LATEL, _LATE
         .equiv LATEH, _LATE+1

;------------------------------------------------------------------------------
; 17b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     TRISE : Port E Data Direction Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv TRISE9, 0x0009
         .equiv TRISE8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv TRISE7, 0x0007
         .equiv TRISE6, 0x0006
         .equiv TRISE5, 0x0005
         .equiv TRISE4, 0x0004
         .equiv TRISE3, 0x0003
         .equiv TRISE2, 0x0002
         .equiv TRISE1, 0x0001
         .equiv TRISE0, 0x0000

;------------------------------------------------------------------------------
;     PORTE : Read Port E Pin / Write Port E Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv RE9, 0x0009
         .equiv RE8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv RE7, 0x0007
         .equiv RE6, 0x0006
         .equiv RE5, 0x0005
         .equiv RE4, 0x0004
         .equiv RE3, 0x0003
         .equiv RE2, 0x0002
         .equiv RE1, 0x0001
         .equiv RE0, 0x0000

;------------------------------------------------------------------------------
;     LATE : Read / Write Port E Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv LATE9, 0x0009
         .equiv LATE8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv LATE7, 0x0007
         .equiv LATE6, 0x0006
         .equiv LATE5, 0x0005
         .equiv LATE4, 0x0004
         .equiv LATE3, 0x0003
         .equiv LATE2, 0x0002
         .equiv LATE1, 0x0001
         .equiv LATE0, 0x0000

;==============================================================================
;
; 18.  Port F: General Purpose I/O Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 18a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv TRISFL, _TRISF                  ; See all SFR descriptions in
         .equiv TRISFH, _TRISF+1                ;  sub-section below
         .equiv PORTFL, _PORTF
         .equiv PORTFH, _PORTF+1
         .equiv LATFL, _LATF
         .equiv LATFH, _LATF+1

;------------------------------------------------------------------------------
; 18b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     TRISF : Port F Data Direction Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv TRISF8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv TRISF7, 0x0007
         .equiv TRISF6, 0x0006
         .equiv TRISF5, 0x0005
         .equiv TRISF4, 0x0004
         .equiv TRISF3, 0x0003
         .equiv TRISF2, 0x0002
         .equiv TRISF1, 0x0001
         .equiv TRISF0, 0x0000

;------------------------------------------------------------------------------
;     PORTF : Read Port F Pin / Write Port F Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv RF8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv RF7, 0x0007
         .equiv RF6, 0x0006
         .equiv RF5, 0x0005
         .equiv RF4, 0x0004
         .equiv RF3, 0x0003
         .equiv RF2, 0x0002
         .equiv RF1, 0x0001
         .equiv RF0, 0x0000

;------------------------------------------------------------------------------
;     LATF : Read / Write Port F Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv LATF8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv LATF7, 0x0007
         .equiv LATF6, 0x0006
         .equiv LATF5, 0x0005
         .equiv LATF4, 0x0004
         .equiv LATF3, 0x0003
         .equiv LATF2, 0x0002
         .equiv LATF1, 0x0001
         .equiv LATF0, 0x0000

;==============================================================================
;
; 19.  Port G: General Purpose I/O Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 19a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv TRISGL, _TRISG                  ; See all SFR descriptions in
         .equiv TRISGH, _TRISG+1                ;  sub-section below
         .equiv PORTGL, _PORTG
         .equiv PORTGH, _PORTG+1
         .equiv LATGL, _LATG
         .equiv LATGH, _LATG+1

;------------------------------------------------------------------------------
; 19b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     TRISG : Port G Data Direction Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv TRISG9, 0x0009
         .equiv TRISG8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv TRISG7, 0x0007
         .equiv TRISG6, 0x0006
         .equiv TRISG3, 0x0003
         .equiv TRISG2, 0x0002
         .equiv TRISG1, 0x0001
         .equiv TRISG0, 0x0000

;------------------------------------------------------------------------------
;     PORTG : Read Port G Pin / Write Port G Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv RG9, 0x0009
         .equiv RG8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv RG7, 0x0007
         .equiv RG6, 0x0006
         .equiv RG3, 0x0003
         .equiv RG2, 0x0002
         .equiv RG1, 0x0001
         .equiv RG0, 0x0000

;------------------------------------------------------------------------------
;     LATG : Read / Write Port G Latch Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv LATG9, 0x0009
         .equiv LATG8, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv LATG7, 0x0007
         .equiv LATG6, 0x0006
         .equiv LATG3, 0x0003
         .equiv LATG2, 0x0002
         .equiv LATG1, 0x0001
         .equiv LATG0, 0x0000

;==============================================================================
;
; 20. Controller Area Network (CAN) Module Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.      for CAN Modules 1 and 2
;
;==============================================================================
; 20a. SFR Definitions
;------------------------------------------------------------------------------
;-------------CAN1 Module------------------------------------------------------
         .equiv C1RXF0SIDL, _C1RXF0SID          ; See all SFR descriptions in
         .equiv C1RXF0SIDH, _C1RXF0SID+1        ;  sub-section below
         .equiv C1RXF0EIDHL, _C1RXF0EIDH
         .equiv C1RXF0EIDHH, _C1RXF0EIDH+1
         .equiv C1RXF0EIDLL, _C1RXF0EIDL
         .equiv C1RXF0EIDLH, _C1RXF0EIDL+1
         .equiv C1RXF1SIDL, _C1RXF1SID
         .equiv C1RXF1SIDH, _C1RXF1SID+1
         .equiv C1RXF1EIDHL, _C1RXF1EIDH
         .equiv C1RXF1EIDHH, _C1RXF1EIDH+1
         .equiv C1RXF1EIDLL, _C1RXF1EIDL
         .equiv C1RXF1EIDLH, _C1RXF1EIDL+1
         .equiv C1RXF2SIDL, _C1RXF2SID
         .equiv C1RXF2SIDH, _C1RXF2SID+1
         .equiv C1RXF2EIDHL, _C1RXF2EIDH
         .equiv C1RXF2EIDHH, _C1RXF2EIDH+1
         .equiv C1RXF2EIDLL, _C1RXF2EIDL
         .equiv C1RXF2EIDLH, _C1RXF2EIDL+1
         .equiv C1RXF3SIDL, _C1RXF3SID
         .equiv C1RXF3SIDH, _C1RXF3SID+1
         .equiv C1RXF3EIDHL, _C1RXF3EIDH
         .equiv C1RXF3EIDHH, _C1RXF3EIDH+1
         .equiv C1RXF3EIDLL, _C1RXF3EIDL
         .equiv C1RXF3EIDLH, _C1RXF3EIDL+1
         .equiv C1RXF4SIDL, _C1RXF4SID
         .equiv C1RXF4SIDH, _C1RXF4SID+1
         .equiv C1RXF4EIDHL, _C1RXF4EIDH
         .equiv C1RXF4EIDHH, _C1RXF4EIDH+1
         .equiv C1RXF4EIDLL, _C1RXF4EIDL
         .equiv C1RXF4EIDLH, _C1RXF4EIDL+1
         .equiv C1RXF5SIDL, _C1RXF5SID
         .equiv C1RXF5SIDH, _C1RXF5SID+1
         .equiv C1RXF5EIDHL, _C1RXF5EIDH
         .equiv C1RXF5EIDHH, _C1RXF5EIDH+1
         .equiv C1RXF5EIDLL, _C1RXF5EIDL
         .equiv C1RXF5EIDLH, _C1RXF5EIDL+1
         .equiv C1RXM0SIDL, _C1RXM0SID
         .equiv C1RXM0SIDH, _C1RXM0SID+1
         .equiv C1RXM0EIDHL, _C1RXM0EIDH
         .equiv C1RXM0EIDHH, _C1RXM0EIDH+1
         .equiv C1RXM0EIDLL, _C1RXM0EIDL
         .equiv C1RXM0EIDLH, _C1RXM0EIDL+1
         .equiv C1RXM1SIDL, _C1RXM1SID
         .equiv C1RXM1SIDH, _C1RXM1SID+1
         .equiv C1RXM1EIDHL, _C1RXM1EIDH
         .equiv C1RXM1EIDHH, _C1RXM1EIDH+1
         .equiv C1RXM1EIDLL, _C1RXM1EIDL
         .equiv C1RXM1EIDLH, _C1RXM1EIDL+1
         .equiv C1TX2SIDL, _C1TX2SID
         .equiv C1TX2SIDH, _C1TX2SID+1
         .equiv C1TX2EIDL, _C1TX2EID
         .equiv C1TX2EIDH, _C1TX2EID+1
         .equiv C1TX2DLCL, _C1TX2DLC
         .equiv C1TX2DLCH, _C1TX2DLC+1
         .equiv C1TX2B1L, _C1TX2B1
         .equiv C1TX2B1H, _C1TX2B1+1
         .equiv C1TX2B2L, _C1TX2B2
         .equiv C1TX2B2H, _C1TX2B2+1
         .equiv C1TX2B3L, _C1TX2B3
         .equiv C1TX2B3H, _C1TX2B3+1
         .equiv C1TX2B4L, _C1TX2B4
         .equiv C1TX2B4H, _C1TX2B4+1
         .equiv C1TX2CONL, _C1TX2CON
         .equiv C1TX2CONH, _C1TX2CON+1
         .equiv C1TX1SIDL, _C1TX1SID
         .equiv C1TX1SIDH, _C1TX1SID+1
         .equiv C1TX1EIDL, _C1TX1EID
         .equiv C1TX1EIDH, _C1TX1EID+1
         .equiv C1TX1DLCL, _C1TX1DLC
         .equiv C1TX1DLCH, _C1TX1DLC+1
         .equiv C1TX1B1L, _C1TX1B1
         .equiv C1TX1B1H, _C1TX1B1+1
         .equiv C1TX1B2L, _C1TX1B2
         .equiv C1TX1B2H, _C1TX1B2+1
         .equiv C1TX1B3L, _C1TX1B3
         .equiv C1TX1B3H, _C1TX1B3+1
         .equiv C1TX1B4L, _C1TX1B4
         .equiv C1TX1B4H, _C1TX1B4+1
         .equiv C1TX1CONL, _C1TX1CON
         .equiv C1TX1CONH, _C1TX1CON+1
         .equiv C1TX0SIDL, _C1TX0SID
         .equiv C1TX0SIDH, _C1TX0SID+1
         .equiv C1TX0EIDL, _C1TX0EID
         .equiv C1TX0EIDH, _C1TX0EID+1
         .equiv C1TX0DLCL, _C1TX0DLC
         .equiv C1TX0DLCH, _C1TX0DLC+1
         .equiv C1TX0B1L, _C1TX0B1
         .equiv C1TX0B1H, _C1TX0B1+1
         .equiv C1TX0B2L, _C1TX0B2
         .equiv C1TX0B2H, _C1TX0B2+1
         .equiv C1TX0B3L, _C1TX0B3
         .equiv C1TX0B3H, _C1TX0B3+1
         .equiv C1TX0B4L, _C1TX0B4
         .equiv C1TX0B4H, _C1TX0B4+1
         .equiv C1TX0CONL, _C1TX0CON
         .equiv C1TX0CONH, _C1TX0CON+1
         .equiv C1RX1SIDL, _C1RX1SID
         .equiv C1RX1SIDH, _C1RX1SID+1
         .equiv C1RX1EIDL, _C1RX1EID
         .equiv C1RX1EIDH, _C1RX1EID+1
         .equiv C1RX1DLCL, _C1RX1DLC
         .equiv C1RX1DLCH, _C1RX1DLC+1
         .equiv C1RX1B1L, _C1RX1B1
         .equiv C1RX1B1H, _C1RX1B1+1
         .equiv C1RX1B2L, _C1RX1B2
         .equiv C1RX1B2H, _C1RX1B2+1
         .equiv C1RX1B3L, _C1RX1B3
         .equiv C1RX1B3H, _C1RX1B3+1
         .equiv C1RX1B4L, _C1RX1B4
         .equiv C1RX1B4H, _C1RX1B4+1
         .equiv C1RX1CONL, _C1RX1CON
         .equiv C1RX1CONH, _C1RX1CON+1
         .equiv C1RX0SIDL, _C1RX0SID
         .equiv C1RX0SIDH, _C1RX0SID+1
         .equiv C1RX0EIDL, _C1RX0EID
         .equiv C1RX0EIDH, _C1RX0EID+1
         .equiv C1RX0DLCL, _C1RX0DLC
         .equiv C1RX0DLCH, _C1RX0DLC+1
         .equiv C1RX0B1L, _C1RX0B1
         .equiv C1RX0B1H, _C1RX0B1+1
         .equiv C1RX0B2L, _C1RX0B2
         .equiv C1RX0B2H, _C1RX0B2+1
         .equiv C1RX0B3L, _C1RX0B3
         .equiv C1RX0B3H, _C1RX0B3+1
         .equiv C1RX0B4L, _C1RX0B4
         .equiv C1RX0B4H, _C1RX0B4+1
         .equiv C1RX0CONL, _C1RX0CON
         .equiv C1RX0CONH, _C1RX0CON+1
         .equiv C1CTRLL, _C1CTRL
         .equiv C1CTRLH, _C1CTRL+1
         .equiv C1CFG1L, _C1CFG1
         .equiv C1CFG1H, _C1CFG1+1
         .equiv C1CFG2L, _C1CFG2
         .equiv C1CFG2H, _C1CFG2+1
         .equiv C1INTFL, _C1INTF
         .equiv C1INTFH, _C1INTF+1
         .equiv C1INTEL, _C1INTE
         .equiv C1INTEH, _C1INTE+1
         .equiv C1ECL, _C1EC
         .equiv C1ECH, _C1EC+1

;----------------CAN2 Module---------------------------------------------------
         .equiv C2RXF0SIDL, _C2RXF0SID          ; See all SFR descriptions in
         .equiv C2RXF0SIDH, _C2RXF0SID+1        ;  sub-section below
         .equiv C2RXF0EIDHL, _C2RXF0EIDH
         .equiv C2RXF0EIDHH, _C2RXF0EIDH+1
         .equiv C2RXF0EIDLL, _C2RXF0EIDL
         .equiv C2RXF0EIDLH, _C2RXF0EIDL+1
         .equiv C2RXF1SIDL, _C2RXF1SID
         .equiv C2RXF1SIDH, _C2RXF1SID+1
         .equiv C2RXF1EIDHL, _C2RXF1EIDH
         .equiv C2RXF1EIDHH, _C2RXF1EIDH+1
         .equiv C2RXF1EIDLL, _C2RXF1EIDL
         .equiv C2RXF1EIDLH, _C2RXF1EIDL+1
         .equiv C2RXF2SIDL, _C2RXF2SID
         .equiv C2RXF2SIDH, _C2RXF2SID+1
         .equiv C2RXF2EIDHL, _C2RXF2EIDH
         .equiv C2RXF2EIDHH, _C2RXF2EIDH+1
         .equiv C2RXF2EIDLL, _C2RXF2EIDL
         .equiv C2RXF2EIDLH, _C2RXF2EIDL+1
         .equiv C2RXF3SIDL, _C2RXF3SID
         .equiv C2RXF3SIDH, _C2RXF3SID+1
         .equiv C2RXF3EIDHL, _C2RXF3EIDH
         .equiv C2RXF3EIDHH, _C2RXF3EIDH+1
         .equiv C2RXF3EIDLL, _C2RXF3EIDL
         .equiv C2RXF3EIDLH, _C2RXF3EIDL+1
         .equiv C2RXF4SIDL, _C2RXF4SID
         .equiv C2RXF4SIDH, _C2RXF4SID+1
         .equiv C2RXF4EIDHL, _C2RXF4EIDH
         .equiv C2RXF4EIDHH, _C2RXF4EIDH+1
         .equiv C2RXF4EIDLL, _C2RXF4EIDL
         .equiv C2RXF4EIDLH, _C2RXF4EIDL+1
         .equiv C2RXF5SIDL, _C2RXF5SID
         .equiv C2RXF5SIDH, _C2RXF5SID+1
         .equiv C2RXF5EIDHL, _C2RXF5EIDH
         .equiv C2RXF5EIDHH, _C2RXF5EIDH+1
         .equiv C2RXF5EIDLL, _C2RXF5EIDL
         .equiv C2RXF5EIDLH, _C2RXF5EIDL+1
         .equiv C2RXM0SIDL, _C2RXM0SID
         .equiv C2RXM0SIDH, _C2RXM0SID+1
         .equiv C2RXM0EIDHL, _C2RXM0EIDH
         .equiv C2RXM0EIDHH, _C2RXM0EIDH+1
         .equiv C2RXM0EIDLL, _C2RXM0EIDL
         .equiv C2RXM0EIDLH, _C2RXM0EIDL+1
         .equiv C2RXM1SIDL, _C2RXM1SID
         .equiv C2RXM1SIDH, _C2RXM1SID+1
         .equiv C2RXM1EIDHL, _C2RXM1EIDH
         .equiv C2RXM1EIDHH, _C2RXM1EIDH+1
         .equiv C2RXM1EIDLL, _C2RXM1EIDL
         .equiv C2RXM1EIDLH, _C2RXM1EIDL+1
         .equiv C2TX2SIDL, _C2TX2SID
         .equiv C2TX2SIDH, _C2TX2SID+1
         .equiv C2TX2EIDL, _C2TX2EID
         .equiv C2TX2EIDH, _C2TX2EID+1
         .equiv C2TX2DLCL, _C2TX2DLC
         .equiv C2TX2DLCH, _C2TX2DLC+1
         .equiv C2TX2B1L, _C2TX2B1
         .equiv C2TX2B1H, _C2TX2B1+1
         .equiv C2TX2B2L, _C2TX2B2
         .equiv C2TX2B2H, _C2TX2B2+1
         .equiv C2TX2B3L, _C2TX2B3
         .equiv C2TX2B3H, _C2TX2B3+1
         .equiv C2TX2B4L, _C2TX2B4
         .equiv C2TX2B4H, _C2TX2B4+1
         .equiv C2TX2CONL, _C2TX2CON
         .equiv C2TX2CONH, _C2TX2CON+1
         .equiv C2TX1SIDL, _C2TX1SID
         .equiv C2TX1SIDH, _C2TX1SID+1
         .equiv C2TX1EIDL, _C2TX1EID
         .equiv C2TX1EIDH, _C2TX1EID+1
         .equiv C2TX1DLCL, _C2TX1DLC
         .equiv C2TX1DLCH, _C2TX1DLC+1
         .equiv C2TX1B1L, _C2TX1B1
         .equiv C2TX1B1H, _C2TX1B1+1
         .equiv C2TX1B2L, _C2TX1B2
         .equiv C2TX1B2H, _C2TX1B2+1
         .equiv C2TX1B3L, _C2TX1B3
         .equiv C2TX1B3H, _C2TX1B3+1
         .equiv C2TX1B4L, _C2TX1B4
         .equiv C2TX1B4H, _C2TX1B4+1
         .equiv C2TX1CONL, _C2TX1CON
         .equiv C2TX1CONH, _C2TX1CON+1
         .equiv C2TX0SIDL, _C2TX0SID
         .equiv C2TX0SIDH, _C2TX0SID+1
         .equiv C2TX0EIDL, _C2TX0EID
         .equiv C2TX0EIDH, _C2TX0EID+1
         .equiv C2TX0DLCL, _C2TX0DLC
         .equiv C2TX0DLCH, _C2TX0DLC+1
         .equiv C2TX0B1L, _C2TX0B1
         .equiv C2TX0B1H, _C2TX0B1+1
         .equiv C2TX0B2L, _C2TX0B2
         .equiv C2TX0B2H, _C2TX0B2+1
         .equiv C2TX0B3L, _C2TX0B3
         .equiv C2TX0B3H, _C2TX0B3+1
         .equiv C2TX0B4L, _C2TX0B4
         .equiv C2TX0B4H, _C2TX0B4+1
         .equiv C2TX0CONL, _C2TX0CON
         .equiv C2TX0CONH, _C2TX0CON+1
         .equiv C2RX1SIDL, _C2RX1SID
         .equiv C2RX1SIDH, _C2RX1SID+1
         .equiv C2RX1EIDL, _C2RX1EID
         .equiv C2RX1EIDH, _C2RX1EID+1
         .equiv C2RX1DLCL, _C2RX1DLC
         .equiv C2RX1DLCH, _C2RX1DLC+1
         .equiv C2RX1B1L, _C2RX1B1
         .equiv C2RX1B1H, _C2RX1B1+1
         .equiv C2RX1B2L, _C2RX1B2
         .equiv C2RX1B2H, _C2RX1B2+1
         .equiv C2RX1B3L, _C2RX1B3
         .equiv C2RX1B3H, _C2RX1B3+1
         .equiv C2RX1B4L, _C2RX1B4
         .equiv C2RX1B4H, _C2RX1B4+1
         .equiv C2RX1CONL, _C2RX1CON
         .equiv C2RX1CONH, _C2RX1CON+1
         .equiv C2RX0SIDL, _C2RX0SID
         .equiv C2RX0SIDH, _C2RX0SID+1
         .equiv C2RX0EIDL, _C2RX0EID
         .equiv C2RX0EIDH, _C2RX0EID+1
         .equiv C2RX0DLCL, _C2RX0DLC
         .equiv C2RX0DLCH, _C2RX0DLC+1
         .equiv C2RX0B1L, _C2RX0B1
         .equiv C2RX0B1H, _C2RX0B1+1
         .equiv C2RX0B2L, _C2RX0B2
         .equiv C2RX0B2H, _C2RX0B2+1
         .equiv C2RX0B3L, _C2RX0B3
         .equiv C2RX0B3H, _C2RX0B3+1
         .equiv C2RX0B4L, _C2RX0B4
         .equiv C2RX0B4H, _C2RX0B4+1
         .equiv C2RX0CONL, _C2RX0CON
         .equiv C2RX0CONH, _C2RX0CON+1
         .equiv C2CTRLL, _C2CTRL
         .equiv C2CTRLH, _C2CTRL+1
         .equiv C2CFG1L, _C2CFG1
         .equiv C2CFG1H, _C2CFG1+1
         .equiv C2CFG2L, _C2CFG2
         .equiv C2CFG2H, _C2CFG2+1
         .equiv C2INTFL, _C2INTF
         .equiv C2INTFH, _C2INTF+1
         .equiv C2INTEL, _C2INTE
         .equiv C2INTEH, _C2INTE+1
         .equiv C2ECL, _C2EC
         .equiv C2ECH, _C2EC+1


;------------------------------------------------------------------------------
; 20b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     CAN i Module Receiver Standard Identifier Bits (SID<10:0>)
;
;     Found in the following registers
;     CiRXFnSID - Receive Acceptance Filter 'n' : Standard Identifier
;     CiRXMnSID - Receive Acceptance Mask 'n' : Standard identifier
;     CiRXnSID - Receive Buffer 'n' : Standard Identifier
;     CiTXnSID - Transmit Buffer 'n' : Standard Identifier
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         ;Found in CiRXnSID, CiRXFnSID, CiRXMnSID
         .equiv RXSID10, 0x000C
         .equiv RXSID9, 0x000B
         .equiv RXSID8, 0x000A
         .equiv RXSID7, 0x0009
         .equiv RXSID6, 0x0008

         ;Found in CiTXnSID
         .equiv TXSID10, 0x000F
         .equiv TXSID9, 0x000E
         .equiv TXSID8, 0x000D
         .equiv TXSID7, 0x000C
         .equiv TXSID6, 0x000B

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv SID5, 0x0007
         .equiv SID4, 0x0006
         .equiv SID3, 0x0005
         .equiv SID2, 0x0004
         .equiv SID1, 0x0003
         .equiv SID0, 0x0002
         .equiv SRR, 0x0001
         .equiv RXIDE, 0x0000           ;Found in CiRXnSID
         .equiv EXIDE, 0x0000           ;Found in CiRXFnSID
         .equiv MIDE, 0x0000            ;Found in CiRXMnSID
         .equiv TXIDE, 0x0000           ;found in CiTXnSID

;------------------------------------------------------------------------------
;     CAN i Module Receiver Extended Identifier Bits (High bits EID<17:6>)
;
;     Found in the following registers
;     CiRXFnEID - Receive Acceptance Filter 'n' : Extended Identifier
;     CiRXMnEID - Receive Acceptance Mask 'n' : Extended identifier
;     CiRXnEID - Receive Buffer 'n' : Extended Identifier
;     CiTXnEID - Transmit Buffer 'n' : Extended Identifier
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         ;Found in CiRXnEID, CiRXFnEID, CiRXMnEID
         .equiv RXEID17, 0x000B
         .equiv RXEID16, 0x000A
         .equiv RXEID15, 0x0009
         .equiv RXEID14, 0x0008

         ;Found in CiTXnEID
         .equiv TXEID17, 0x000F
         .equiv TXEID16, 0x000E
         .equiv TXEID15, 0x000D
         .equiv TXEID14, 0x000C

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv EID13, 0x0007
         .equiv EID12, 0x0006
         .equiv EID11, 0x0005
         .equiv EID10, 0x0004
         .equiv EID9, 0x0003
         .equiv EID8, 0x0002
         .equiv EID7, 0x0001
         .equiv EID6, 0x0000

;------------------------------------------------------------------------------
;     CAN i Module Extended Receiver Identifier Bits (Low bits EID<5:0>)
;
;     Found in the following registers
;     CiRXFnEIDL - Receive Acceptance Filter 'n' : Extended Identifier
;     CiRXMnEIDL - Receive Acceptance Mask 'n' : Extended Identifier
;     CiRXnDLC - Receive Buffer 'n' : Data Length Control
;     CiTXnDLC - Transmit Buffer 'n' : Data Length Control
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv EID5, 0x000F
         .equiv EID4, 0x000E
         .equiv EID3, 0x000D
         .equiv EID2, 0x000C
         .equiv EID1, 0x000B
         .equiv EID0, 0x000A

         ;Found in CiRXnDLC
         .equiv RXRTR, 0x0009
         .equiv RXRB1, 0x0008

         ;Found in CiTXnDLC
         .equiv TXRTR, 0x0009
         .equiv TXRB1, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         ;Found in CiRXnDLC
         .equiv RXRB0, 0x0004
         .equiv RXDLC3, 0x0003
         .equiv RXDLC2, 0x0002
         .equiv RXDLC1, 0x0001
         .equiv RXDLC0, 0x0000

         ;Found in CiTXnDLC
         .equiv TXRB0, 0x0007
         .equiv TXDLC3, 0x0006
         .equiv TXDLC2, 0x0005
         .equiv TXDLC1, 0x0004
         .equiv TXDLC0, 0x0003


;------------------------------------------------------------------------------
;     CiTXnCON : CAN i module Transmit Buffer Control Register
;------------------------------------------------------------------------------

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv TXABT, 0x0006
         .equiv TXLARB, 0x0005
         .equiv TXERR, 0x0004
         .equiv TXREQ, 0x0003
         .equiv TXPRI1, 0x0001
         .equiv TXPRI0, 0x0000

;------------------------------------------------------------------------------
;     CiRXnCON : CAN i module Receive Buffer Control Register
;------------------------------------------------------------------------------

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv RXFUL, 0x0007
         .equiv RXRTRRO, 0x0003
         .equiv FILHIT2, 0x0002
         .equiv DBEN, 0x0002
         .equiv FILHIT1, 0x0001
         .equiv JTOFF, 0x0001
         .equiv FILHIT0, 0x0000

;------------------------------------------------------------------------------
;     CiCTRL : CAN i module Control and Status Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv CANCAP, 0x000F
         .equiv CSIDL, 0x000D
         .equiv ABAT, 0x000C
         .equiv CANCKS, 0x000B
         .equiv REQOP2, 0x000A
         .equiv REQOP1, 0x0009
         .equiv REQOP0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv OPMODE2, 0x0007
         .equiv OPMODE1, 0x0006
         .equiv OPMODE0, 0x0005
         .equiv ICODE2, 0x0003
         .equiv ICODE1, 0x0002
         .equiv ICODE0, 0x0001

;------------------------------------------------------------------------------
;     CiCFG1 : CAN i module baud rate configuration register 1
;------------------------------------------------------------------------------
; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv SJW1, 0x0007
         .equiv SJW0, 0x0006
         .equiv BRP5, 0x0005
         .equiv BRP4, 0x0004
         .equiv BRP3, 0x0003
         .equiv BRP2, 0x0002
         .equiv BRP1, 0x0001
         .equiv BRP0, 0x0000

;------------------------------------------------------------------------------
;     CiCFG2 : CAN i module baud rate configuration register 2
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv WAKFIL, 0x000E
         .equiv SEG2PH2, 0x000A
         .equiv SEG2PH1, 0x0009
         .equiv SEG2PH0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv SEG2PHTS, 0x0007
         .equiv SAM, 0x0006
         .equiv SEG1PH2, 0x0005
         .equiv SEG1PH1, 0x0004
         .equiv SEG1PH0, 0x0003
         .equiv PRSEG2, 0x0002
         .equiv PRSEG1, 0x0001
         .equiv PRSEG0, 0x0000

;------------------------------------------------------------------------------
;     CiINTF : CAN i module Interrupt Flag Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv RX0OVR, 0x000F
         .equiv RX1OVR, 0x000E
         .equiv TXBO, 0x000D
         .equiv TXEP, 0x000C
         .equiv RXEP, 0x000B
         .equiv TXWAR, 0x000A
         .equiv RXWAR, 0x0009
         .equiv EWARN, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv IVRIF, 0x0007
         .equiv WAKIF, 0x0006
         .equiv ERRIF, 0x0005
         .equiv TX2IF, 0x0004
         .equiv TX1IF, 0x0003
         .equiv TX0IF, 0x0002
         .equiv RX1IF, 0x0001
         .equiv RX0IF, 0x0000

;------------------------------------------------------------------------------
;     CmINTE : CAN m module Interrupt Enable Register
;------------------------------------------------------------------------------
; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv IVRIE, 0x0007
         .equiv WAKIE, 0x0006
         .equiv ERRIE, 0x0005
         .equiv TX2IE, 0x0004
         .equiv TX1IE, 0x0003
         .equiv TX0IE, 0x0002
         .equiv RX1IE, 0x0001
         .equiv RX0IE, 0x0000

;==============================================================================
;
; 21.  System Integration Block Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 21a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv RCONL, _RCON                    ; See all SFR descriptions in
         .equiv RCONH, _RCON+1                  ;  section 22b
         .equiv OSCCONL, _OSCCON
         .equiv OSCCONH, _OSCCON+1

;------------------------------------------------------------------------------
; 21b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     RCON : Reset and System Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv TRAPR, 0x000F
         .equiv IOPUWR, 0x000E
         .equiv BGST, 0x000D
         .equiv LVDEN, 0x000C
         .equiv LVDL3, 0x000B
         .equiv LVDL2, 0x000A
         .equiv LVDL1, 0x0009
         .equiv LVDL0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv EXTR, 0x0007
         .equiv SWR, 0x0006
         .equiv SWDTEN, 0x0005
         .equiv WDTO, 0x0004
         .equiv SLEEP, 0x0003
         .equiv IDLE, 0x0002
         .equiv BOR, 0x0001
         .equiv POR, 0x0000

;------------------------------------------------------------------------------
;     OSCCON : Oscillator Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv TUN3, 0x000F
         .equiv TUN2, 0x000E
         .equiv COSC1, 0x000D
         .equiv COSC0, 0x000C
         .equiv TUN1, 0x000B
         .equiv TUN0, 0x000A
         .equiv NOSC1, 0x0009
         .equiv NOSC0, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv POST1, 0x0007
         .equiv POST0, 0x0006
         .equiv LOCK, 0x0005
         .equiv CF, 0x0003
         .equiv LPOSCEN, 0x0001
         .equiv OSWEN, 0x0000

;==============================================================================
;
; 22.  Non Volatile Memory Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 22a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv NVMCONL, _NVMCON                ; See NVMCON description in
         .equiv NVMCONH, _NVMCON+1              ;  sub-section below
         .equiv NVMADRL, _NVMADR
         .equiv NVMADRH, _NVMADR+1
         .equiv NVMKEYL, _NVMKEY
         .equiv NVMKEYH, _NVMKEY+1

;------------------------------------------------------------------------------
; 22b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;     NVMCON : Non Volatile Memory Control Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv WR, 0x000F
         .equiv WREN, 0x000E
         .equiv WRERR, 0x000D
         .equiv TWRI, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv PROGOP6, 0x0006
         .equiv PROGOP5, 0x0005
         .equiv PROGOP4, 0x0004
         .equiv PROGOP3, 0x0003
         .equiv PROGOP2, 0x0002
         .equiv PROGOP1, 0x0001
         .equiv PROGOP0, 0x0000


;==============================================================================
;
; 23. Peripheral Module Disable Bit Position Definitions for SFRs
;     & SFR High/Low byte definitions.
;==============================================================================
; 23a. SFR Definitions
;------------------------------------------------------------------------------
         .equiv PMD1L, _PMD1                    ; See bit descrpitions below
         .equiv PMD1H, _PMD1+1                  ;  for all files
         .equiv PMD2L, _PMD2
         .equiv PMD2H, _PMD2+1

;------------------------------------------------------------------------------
; 23b. Bit Position Definitions for some SFRs
;------------------------------------------------------------------------------
;  PMD1: Peripheral Module Disable 1 Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv T5MD, 0x000F
         .equiv T4MD, 0x000E
         .equiv T3MD, 0x000D
         .equiv T2MD, 0x000C
         .equiv T1MD, 0x000B
         .equiv QEIMD, 0x000A
         .equiv PWMMD, 0x0009

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv I2CMD, 0x0007
         .equiv U2MD, 0x0006
         .equiv U1MD, 0x0005
         .equiv SPI2MD, 0x0004
         .equiv SPI1MD, 0x0003
         .equiv C2MD, 0x0002
         .equiv C1MD, 0x0001
         .equiv ADCMD, 0x0000

;------------------------------------------------------------------------------
;  PMD2: Peripheral Module Disable 2 Register
;------------------------------------------------------------------------------
; High Byte (Odd Address)
; Bit Positions defined below:
         .equiv IC8MD, 0x000F
         .equiv IC7MD, 0x000E
         .equiv IC6MD, 0x000D
         .equiv IC5MD, 0x000C
         .equiv IC4MD, 0x000B
         .equiv IC3MD, 0x000A
         .equiv IC2MD, 0x0009
         .equiv IC1MD, 0x0008

; Low Byte (Even Address)
; Bit Positions defined below:
         .equiv OC8MD, 0x0007
         .equiv OC7MD, 0x0006
         .equiv OC6MD, 0x0005
         .equiv OC5MD, 0x0004
         .equiv OC4MD, 0x0003
         .equiv OC3MD, 0x0002
         .equiv OC2MD, 0x0001
         .equiv OC1MD, 0x0000

;==============================================================================
;
; 24. Useful constants that ease assembly-level programming
;
;==============================================================================
         .equiv SLEEP_MODE, 0x0000
         .equiv IDLE_MODE, 0x0001


;==============================================================================
;
; 25. Macros and Fuse Configuration Definitions
;
;==============================================================================
; Notes:
;    1. Use the following fuse configuration settings by calling the "config"
;       macro(defined at the end of this section)or directly in assembly source
;       code.
;    2. Configuration Fuses exist in Program Space and their locations are
;       defined in the device linker script.
;==============================================================================
;------------------------------------------------------------------------------
; FOSC: Oscillator Selection Fuse
;------------------------------------------------------------------------------

         .equiv CSW_FSCM_OFF, 0xFFFF
         .equiv CSW_ON_FSCM_OFF, 0x7FFF
         .equiv CSW_FSCM_ON, 0x3FFF
         .equiv EC, 0xFFFB
         .equiv EC_IO, 0xFFFC
         .equiv EC_PLL4, 0xFFFD
         .equiv EC_PLL8, 0xFFFE
         .equiv EC_PLL16, 0xFFFF
         .equiv ERC, 0xFFF9
         .equiv ERC_IO, 0xFFF8
         .equiv XT, 0xFFF4
         .equiv XT_PLL4, 0xFFF5
         .equiv XT_PLL8, 0xFFF6
         .equiv XT_PLL16, 0xFFF7
         .equiv XTL, 0xFFF0
         .equiv HS, 0xFFF2
         .equiv LP, 0xFCFF
         .equiv FRC, 0xFDFF
         .equiv LPRC, 0xFEFF

;------------------------------------------------------------------------------
; FWDT: Watch Dog Timer Configuration Fuse
;------------------------------------------------------------------------------
         .equiv WDT_ON, 0xFFFF
         .equiv WDT_OFF, 0x7FFF
         .equiv WDTPSA_1, 0xFFCF
         .equiv WDTPSA_8, 0xFFDF
         .equiv WDTPSA_64, 0xFFEF
         .equiv WDTPSA_512, 0xFFFF
         .equiv WDTPSB_1, 0xFFF0
         .equiv WDTPSB_2, 0xFFF1
         .equiv WDTPSB_3, 0xFFF2
         .equiv WDTPSB_4, 0xFFF3
         .equiv WDTPSB_5, 0xFFF4
         .equiv WDTPSB_6, 0xFFF5
         .equiv WDTPSB_7, 0xFFF6
         .equiv WDTPSB_8, 0xFFF7
         .equiv WDTPSB_9, 0xFFF8
         .equiv WDTPSB_10, 0xFFF9
         .equiv WDTPSB_11, 0xFFFA
         .equiv WDTPSB_12, 0xFFFB
         .equiv WDTPSB_13, 0xFFFC
         .equiv WDTPSB_14, 0xFFFD
         .equiv WDTPSB_15, 0xFFFE
         .equiv WDTPSB_16, 0xFFFF

;------------------------------------------------------------------------------
; FBORPOR: Brown-out and Power-on Reset Fuse
;------------------------------------------------------------------------------
         .equiv MCLR_EN, 0xFFFF
         .equiv MCLR_DIS, 0x7FFF
         .equiv RST_IOPIN, 0xFFFF
         .equiv RST_PWMPIN, 0xFBFF
         .equiv PWMxH_ACT_HI, 0xFFFF
         .equiv PWMxH_ACT_LO, 0xFDFF
         .equiv PWMxL_ACT_HI, 0xFFFF
         .equiv PWMxL_ACT_LO, 0xFEFF
         .equiv PBOR_ON, 0xFFFF
         .equiv PBOR_OFF, 0xFF7F
         .equiv BORV_20, 0xFFFF
         .equiv BORV_27, 0xFFEF
         .equiv BORV_42, 0xFFDF
         .equiv BORV_45, 0xFFCF
         .equiv PWRT_OFF, 0xFFFC
         .equiv PWRT_4, 0xFFFD
         .equiv PWRT_16, 0xFFFE
         .equiv PWRT_64, 0xFFFF

;------------------------------------------------------------------------------
; FGS: Genneral (Code) Segment Fuse
;------------------------------------------------------------------------------
         .equiv CODE_PROT_OFF, 0xFFFF
         .equiv CODE_PROT_ON, 0xFFFD

;------------------------------------------------------------------------------
; Setting configuration fuses
;------------------------------------------------------------------------------
; Setting configuration fuses using macros:
;==========================================
; The following macro named "config" can be used to set configuration fuses:
        .macro config REG, VALUE
        .section \REG.sec, "x"
        .global \REG
\REG:   .pword \VALUE
        .endm
; For e.g., to set the FOSC fuse using the macro above, the following line of
; code can be pasted at the only at the beginning of the assembly source code,
; immediately below the ".include" directive.
;
;        config __FOSC, CSW_FSCM_ON & EC_PLL16
;
; This would enable the external clock with the PLL set to 16x and further,
; enable clock switching and failsafe clock monitoring.
;
; Similarly, to set the FBORPOR fuse, paste the following :
;
;        config __FBORPOR, PBOR_ON & BORV_27 & PWRT_ON_64 & MCLR_DIS
;
; This would enable Brown-out Reset at 2.7 Volts and initialize the Power-up
; timer to 64 milliseconds and configure the use of the MCLR pin for I/O.
; Given below, is a complete list of settings valid to each of the fuses:
; (Paste the ones relevant to your application at the beginning of the assembly
; source, immediately below the ".include" directive.)
;
;                FOSC:
;               ======
;               config __FOSC, CSW_FSCM_OFF & EC
;               config __FOSC, CSW_FSCM_OFF & EC_IO
;               config __FOSC, CSW_FSCM_OFF & EC_PLL4
;               config __FOSC, CSW_FSCM_OFF & EC_PLL8
;               config __FOSC, CSW_FSCM_OFF & EC_PLL16
;               config __FOSC, CSW_FSCM_OFF & ERC
;               config __FOSC, CSW_FSCM_OFF & ERC_IO
;               config __FOSC, CSW_FSCM_OFF & XT
;               config __FOSC, CSW_FSCM_OFF & XT_PLL4
;               config __FOSC, CSW_FSCM_OFF & XT_PLL8
;               config __FOSC, CSW_FSCM_OFF & XT_PLL16
;               config __FOSC, CSW_FSCM_OFF & XTL
;               config __FOSC, CSW_FSCM_OFF & HS
;               config __FOSC, CSW_FSCM_OFF & LP
;               config __FOSC, CSW_FSCM_OFF & FRC
;               config __FOSC, CSW_FSCM_OFF & LPRC
;               config __FOSC, CSW_ON_FSCM_OFF & EC
;               config __FOSC, CSW_ON_FSCM_OFF & EC_IO
;               config __FOSC, CSW_ON_FSCM_OFF & EC_PLL4
;               config __FOSC, CSW_ON_FSCM_OFF & EC_PLL8
;               config __FOSC, CSW_ON_FSCM_OFF & EC_PLL16
;               config __FOSC, CSW_ON_FSCM_OFF & ERC
;               config __FOSC, CSW_ON_FSCM_OFF & ERC_IO
;               config __FOSC, CSW_ON_FSCM_OFF & XT
;               config __FOSC, CSW_ON_FSCM_OFF & XT_PLL4
;               config __FOSC, CSW_ON_FSCM_OFF & XT_PLL8
;               config __FOSC, CSW_ON_FSCM_OFF & XT_PLL16
;               config __FOSC, CSW_ON_FSCM_OFF & XTL
;               config __FOSC, CSW_ON_FSCM_OFF & HS
;               config __FOSC, CSW_ON_FSCM_OFF & LP
;               config __FOSC, CSW_ON_FSCM_OFF & FRC
;               config __FOSC, CSW_ON_FSCM_OFF & LPRC
;               config __FOSC, CSW_FSCM_ON & EC
;               config __FOSC, CSW_FSCM_ON & EC_IO
;               config __FOSC, CSW_FSCM_ON & EC_PLL4
;               config __FOSC, CSW_FSCM_ON & EC_PLL8
;               config __FOSC, CSW_FSCM_ON & EC_PLL16
;               config __FOSC, CSW_FSCM_ON & ERC
;               config __FOSC, CSW_FSCM_ON & ERC_IO
;               config __FOSC, CSW_FSCM_ON & XT
;               config __FOSC, CSW_FSCM_ON & XT_PLL4
;               config __FOSC, CSW_FSCM_ON & XT_PLL8
;               config __FOSC, CSW_FSCM_ON & XT_PLL16
;               config __FOSC, CSW_FSCM_ON & XTL
;               config __FOSC, CSW_FSCM_ON & HS
;               config __FOSC, CSW_FSCM_ON & LP
;               config __FOSC, CSW_FSCM_ON & FRC
;               config __FOSC, CSW_FSCM_ON & LPRC
;
;               FWDT
;               =====
;               config __FWDT, WDT_OFF
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_1
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_2
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_3
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_4
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_5
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_6
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_7
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_8
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_9
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_10
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_11
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_12
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_13
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_14
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_15
;               config __FWDT, WDT_ON & WDTPSA_1 & WDTPSB_16
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_1
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_2
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_3
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_4
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_5
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_6
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_7
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_8
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_9
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_10
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_11
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_12
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_13
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_14
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_15
;               config __FWDT, WDT_ON & WDTPSA_8 & WDTPSB_16
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_1
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_2
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_3
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_4
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_5
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_6
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_7
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_8
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_9
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_10
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_11
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_12
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_13
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_14
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_15
;               config __FWDT, WDT_ON & WDTPSA_64 & WDTPSB_16
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_1
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_2
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_3
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_4
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_5
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_6
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_7
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_8
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_9
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_10
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_11
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_12
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_13
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_14
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_15
;               config __FWDT, WDT_ON & WDTPSA_512 & WDTPSB_16
;
;               FBORPOR (Examples on Motor Control PWM fuses are not provided)
;               ========
;               config __FBORPOR, PBOR_OFF & MCLR_DIS
;               config __FBORPOR, PBOR_OFF & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_20 & PWRT_OFF & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_27 & PWRT_OFF & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_42 & PWRT_OFF & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_45 & PWRT_OFF & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_20 & PWRT_OFF & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_27 & PWRT_OFF & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_42 & PWRT_OFF & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_45 & PWRT_OFF & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_20 & PWRT_4 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_27 & PWRT_4 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_42 & PWRT_4 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_45 & PWRT_4 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_20 & PWRT_4 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_27 & PWRT_4 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_42 & PWRT_4 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_45 & PWRT_4 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_20 & PWRT_16 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_27 & PWRT_16 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_42 & PWRT_16 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_45 & PWRT_16 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_20 & PWRT_16 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_27 & PWRT_16 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_42 & PWRT_16 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_45 & PWRT_16 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_20 & PWRT_64 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_27 & PWRT_64 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_42 & PWRT_64 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_45 & PWRT_64 & MCLR_DIS
;               config __FBORPOR, PBOR_ON & BORV_20 & PWRT_64 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_27 & PWRT_64 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_42 & PWRT_64 & MCLR_EN
;               config __FBORPOR, PBOR_ON & BORV_45 & PWRT_64 & MCLR_EN
;
;               FGS
;               ====
;               config __FGS, CODE_PROT_OFF
;               config __FGS, CODE_PROT_ON
;
;Setting configuration fuses without using macros:
;=================================================
; To set configuration fuses without using the "config" macro, use the following
; format:
;        .section __FOSC.sec, "x"
;        .global __FOSC
;__FOSC: .pword CSW_FSCM_ON & EC_PLL16
;
;------------------------------------------------------------------------------

.LIST
*/

    IPC0bits.T1IP=1;
//    IPC0bits.T1IP0=1;  ???????
//    IPC0bits.T1IP1=0;  ???????
//    IPC0bits.T1IP2=0;  ??????? 

	TMR1 = 0 ;//Start Timer1 at zero
    PR1=16000;
//    T1CONbits.TON=1;
	IEC0bits.T1IE = 1 ;// Enable Timer1 interrupt   

#define    T1ON    T1CONbits.TON
#define    T1SIDL  T1CONbits.TSIDL

#define    T1IE    IEC0bits.T1IE
        
