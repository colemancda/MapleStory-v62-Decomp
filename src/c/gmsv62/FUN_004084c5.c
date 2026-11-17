/* FUN_004084c5 - 0x004084c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004084c5(void)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar6;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int unaff_EBP;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  int iStack_a0;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x40) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (*(int *)(unaff_EBP + 0xc) < 0) {
    iVar3 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  else {
    iStack_a0 = unaff_EBP + 0xc;
    *(int *)(unaff_EBP + -0x2c) = extraout_ECX + 0x18;
    puStack_a4 = (undefined1 *)0x408500;
    iVar3 = FUN_00413cb9();
    if (iVar3 == 0) {
      iStack_a0 = 0x408516;
      iVar3 = FUN_004029b9();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004083ff();
      }
      *(int *)(unaff_EBP + -0x1c) = iVar3;
      if (iVar3 != 0) {
        iStack_a0 = 0x408536;
        InterlockedIncrement((LONG *)(iVar3 + 4));
      }
      iStack_a0 = unaff_EBP + -0x24;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puStack_a4 = (undefined1 *)0x408545;
      FUN_0054e2c6();
      psVar1 = *(short **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
        iVar3 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(iVar3 + 4) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (psVar1 != (short *)0x0) {
          iStack_a0 = 0x40856d;
          FUN_00403384();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00412829();
      }
      else {
        iStack_a0 = 0x40858d;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_a0 = 0x40859a;
        FUN_00403191();
        iStack_a0 = 0;
        puStack_a4 = (undefined1 *)(unaff_EBP + -0x68);
        puStack_a8 = (undefined1 *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_ac = (undefined1 *)0x4085b0;
        uVar4 = FUN_00411641();
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_ac;
        FUN_004033a1(uVar4);
        iVar3 = unaff_EBP + -0x98;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00405a1d(iVar3);
        FUN_00402660();
        FUN_00404a02(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_a4 = (undefined1 *)0x4085e5;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x44) = uVar4;
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        iStack_a0 = 0x4085f9;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          iStack_a0 = 0x40860c;
          FUN_00878dfb();
        }
        piVar2 = *(int **)(iVar3 + 0xc);
        *(int **)(unaff_EBP + -0x28) = piVar2;
        if (piVar2 != (int *)0x0) {
          iStack_a0 = 0x40861b;
          (**(code **)(*piVar2 + 4))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_a0 = 0x40862b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_a0 = 0x408636;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_a0 = 0x408643;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_a0 = 0x40864e;
          FUN_00878dfb();
        }
        puVar6 = (undefined1 *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_a0 = 0x40865b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_a0 = 0x408666;
          FUN_00878dfb();
          puVar6 = extraout_ECX_00;
        }
        iStack_a0 = 0;
        puStack_ac = (undefined1 *)&puStack_a4;
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_a4;
        puStack_a8 = (undefined1 *)0x3b4;
        puStack_a4 = puVar6;
        FUN_00679e4e();
        puStack_a8 = (undefined1 *)(unaff_EBP + -0x88);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        puStack_ac = (undefined1 *)0x408693;
        FUN_0040263d();
        puStack_ac = (undefined1 *)0x40869a;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        puStack_a4 = (undefined1 *)0x4086a5;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x58) = iVar3;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (iVar3 != 0) {
          iStack_a0 = 0x4086bb;
          iVar3 = FUN_00404b30();
          if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
            iStack_a0 = 0x4086c9;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_a0 = 0x4086d9;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_a0 = 0x4086e4;
          FUN_00878dfb();
        }
        puStack_a4 = &stack0xffffff64;
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff64;
        iStack_a0 = 0x475;
        puStack_a8 = (undefined1 *)0x4086f7;
        FUN_00679e4e();
        iStack_a0 = unaff_EBP + -0x3c;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_a4 = (undefined1 *)0x408707;
        FUN_0040263d();
        puStack_a4 = (undefined1 *)0x40870e;
        FUN_004048a4();
        iStack_a0 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_a4 = (undefined1 *)0x40871c;
        uVar4 = FUN_00405a23();
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        FUN_00408b49();
        FUN_00402fa6();
        *(undefined4 *)(iVar3 + 0x10) = **(undefined4 **)(unaff_EBP + -0x10);
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_a0 = 0x408758;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_a0 = 0x408763;
          FUN_00878dfb();
        }
        puStack_a4 = &stack0xffffff64;
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff64;
        iStack_a0 = 0x476;
        puStack_a8 = (undefined1 *)0x408776;
        FUN_00679e4e();
        iStack_a0 = unaff_EBP + -0x3c;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_a4 = (undefined1 *)0x408786;
        FUN_0040263d();
        puStack_a4 = (undefined1 *)0x40878d;
        FUN_004048a4();
        iStack_a0 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_a4 = (undefined1 *)0x40879b;
        uVar4 = FUN_00405a23();
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        FUN_00408b49();
        FUN_00402fa6();
        *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(unaff_EBP + -0x10);
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_a0 = 0x4087d7;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_a0 = 0x4087e2;
          FUN_00878dfb();
        }
        puStack_a4 = &stack0xffffff64;
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff64;
        iStack_a0 = 0x477;
        puStack_a8 = (undefined1 *)0x4087f5;
        FUN_00679e4e();
        iStack_a0 = unaff_EBP + -0x3c;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_a4 = (undefined1 *)0x408805;
        FUN_0040263d();
        puStack_a4 = (undefined1 *)0x40880c;
        FUN_004048a4();
        iStack_a0 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        puStack_a4 = (undefined1 *)0x40881a;
        uVar4 = FUN_00405a23();
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        FUN_00408b49();
        FUN_00402fa6();
        *(undefined4 *)(iVar3 + 0x38) = **(undefined4 **)(unaff_EBP + -0x10);
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_a0 = 0x408856;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_a0 = 0x408861;
          FUN_00878dfb();
        }
        iVar3 = *(int *)(unaff_EBP + 0xc) / 100000;
        if (iVar3 == 0xd) {
          uVar4 = 1;
        }
        else if (iVar3 == 0xe) {
          uVar4 = 2;
        }
        else {
          uVar4 = 0;
        }
        *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x18) = uVar4;
        if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x18) != 0) {
          puStack_a4 = &stack0xffffff64;
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff64;
          iStack_a0 = 0x478;
          puStack_a8 = (undefined1 *)0x4088a6;
          FUN_00679e4e();
          iStack_a0 = unaff_EBP + -0x3c;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          puStack_a4 = (undefined1 *)0x4088b6;
          FUN_0040263d();
          puStack_a4 = (undefined1 *)0x4088bd;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          iVar3 = extraout_ECX_01;
          if (*(short *)(unaff_EBP + -0x3c) == 8) {
            iStack_a0 = 0x4088d4;
            FUN_0040675b();
            iVar3 = *(int *)(unaff_EBP + -0x1c);
            FUN_00408b49();
            FUN_00402fa6();
            *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(unaff_EBP + -0x14);
            iVar3 = 0;
            if (*(int *)(unaff_EBP + -0x14) != 0) {
              FUN_004030b1();
              iVar3 = extraout_ECX_02;
            }
          }
          puStack_a8 = (undefined1 *)&iStack_a0;
          *(int **)(unaff_EBP + -0x10) = &iStack_a0;
          puStack_a4 = (undefined1 *)0x479;
          puStack_ac = (undefined1 *)0x40890e;
          iStack_a0 = iVar3;
          FUN_00679e4e();
          puStack_a4 = (undefined1 *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_a8 = (undefined1 *)0x40891e;
          FUN_0040263d();
          puStack_a8 = (undefined1 *)0x408925;
          iStack_a0 = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_a4 = (undefined1 *)0x40892f;
          uVar4 = FUN_00412550();
          iVar3 = FUN_0041170e();
          *(undefined4 *)(iVar3 + 0x24) = uVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          iStack_a0 = 0x40894b;
          iVar3 = unaff_EBP + -0x54;
          iVar5 = FUN_00402bc3();
          iStack_a0 = iVar3;
          if (iVar5 < 0) {
            iStack_a0 = 0x408956;
            FUN_00878dfb();
            iStack_a0 = extraout_ECX_03;
          }
          puStack_a8 = (undefined1 *)&iStack_a0;
          *(int **)(unaff_EBP + -0x10) = &iStack_a0;
          puStack_a4 = (undefined1 *)0x40b;
          puStack_ac = (undefined1 *)0x40896a;
          FUN_00679e4e();
          puStack_a4 = (undefined1 *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_a8 = (undefined1 *)0x40897a;
          FUN_0040263d();
          puStack_a8 = (undefined1 *)0x408981;
          iStack_a0 = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          puStack_a4 = (undefined1 *)0x40898b;
          uVar4 = FUN_00412550();
          iVar3 = FUN_0041170e();
          *(undefined4 *)(iVar3 + 0x28) = uVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          iStack_a0 = 0x4089a7;
          iVar3 = unaff_EBP + -0x54;
          iVar5 = FUN_00402bc3();
          iStack_a0 = iVar3;
          if (iVar5 < 0) {
            iStack_a0 = 0x4089b2;
            FUN_00878dfb();
            iStack_a0 = extraout_ECX_04;
          }
          puStack_a8 = (undefined1 *)&iStack_a0;
          *(int **)(unaff_EBP + -0x10) = &iStack_a0;
          puStack_a4 = (undefined1 *)0x47a;
          puStack_ac = (undefined1 *)0x4089c6;
          FUN_00679e4e();
          puStack_a4 = (undefined1 *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_a8 = (undefined1 *)0x4089d6;
          FUN_0040263d();
          puStack_a8 = (undefined1 *)0x4089dd;
          iStack_a0 = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          puStack_a4 = (undefined1 *)0x4089e7;
          uVar4 = FUN_00412550();
          iVar3 = FUN_0041170e();
          *(undefined4 *)(iVar3 + 0x2c) = uVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          iStack_a0 = 0x408a03;
          iVar3 = unaff_EBP + -0x54;
          iVar5 = FUN_00402bc3();
          iStack_a0 = iVar3;
          if (iVar5 < 0) {
            iStack_a0 = 0x408a0e;
            FUN_00878dfb();
            iStack_a0 = extraout_ECX_05;
          }
          puStack_a8 = (undefined1 *)&iStack_a0;
          *(int **)(unaff_EBP + -0x10) = &iStack_a0;
          puStack_a4 = (undefined1 *)0x47b;
          puStack_ac = (undefined1 *)0x408a23;
          FUN_00679e4e();
          puStack_a4 = (undefined1 *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_a8 = (undefined1 *)0x408a33;
          FUN_0040263d();
          puStack_a8 = (undefined1 *)0x408a3a;
          iStack_a0 = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          puStack_a4 = (undefined1 *)0x408a44;
          uVar4 = FUN_00412550();
          iVar3 = FUN_0041170e();
          *(undefined4 *)(iVar3 + 0x20) = uVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          iStack_a0 = 0x408a60;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_a0 = 0x408a6b;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_a0 = 0x408a78;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_a0 = 0x408a83;
            FUN_00878dfb();
          }
        }
        FUN_00413b2f();
        iStack_a0 = 0x408a99;
        FUN_00411712();
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        iStack_a0 = unaff_EBP + 0xc;
        puStack_a4 = (undefined1 *)0x408aac;
        uVar4 = FUN_00413d0d();
        *(undefined4 *)(iVar3 + 0x34) = uVar4;
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        uVar4 = (*DAT_0097b704)();
        *(undefined4 *)(iVar3 + 0x30) = uVar4;
        iVar5 = *(int *)(unaff_EBP + -0x1c);
        iVar3 = *(int *)(unaff_EBP + 8);
        *(int *)(iVar3 + 4) = iVar5;
        if (iVar5 != 0) {
          iStack_a0 = 0x408ad2;
          InterlockedIncrement((LONG *)(iVar5 + 4));
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          iStack_a0 = 0x408ae3;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
          iStack_a0 = 0x408af4;
          (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          iStack_a0 = 0x408b11;
          FUN_00412f17();
        }
      }
    }
    else {
      iVar5 = *(int *)(iVar3 + 4);
      uVar4 = (*DAT_0097b704)();
      *(undefined4 *)(iVar5 + 0x30) = uVar4;
      iVar5 = *(int *)(iVar3 + 4);
      iVar3 = *(int *)(unaff_EBP + 8);
      *(int *)(iVar3 + 4) = iVar5;
      if (iVar5 != 0) {
        iStack_a0 = 0x408b36;
        InterlockedIncrement((LONG *)(iVar5 + 4));
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


