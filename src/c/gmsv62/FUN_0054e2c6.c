/* FUN_0054e2c6 - 0x0054e2c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0054e2c6(void)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = *(int *)(unaff_EBP + 0xc) / 10000;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar3 < 0x6e) {
    if (iVar3 == 0x6d) {
LAB_0054e59c:
      uVar4 = FUN_00679d86(unaff_EBP + -0x38,0x904);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else if (iVar3 < 0x69) {
      if (iVar3 == 0x68) {
        uVar4 = FUN_00679d86(unaff_EBP + -0x24,0x8ff);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00419192(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else {
        if (iVar3 < 0) goto LAB_0054e33e;
        if (iVar3 < 2) {
          uVar4 = FUN_00679d86(unaff_EBP + -0x20,0x8fa);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_00419192(uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else if (iVar3 == 2) {
          uVar4 = FUN_00679d86(unaff_EBP + -0x1c,0x8fb);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_00419192(uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else if (iVar3 == 3) {
          uVar4 = FUN_00679d86(unaff_EBP + -0x18,0x8fc);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00419192(uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else {
          if (iVar3 != 100) {
            if ((100 < iVar3) && (iVar3 < 0x68)) goto LAB_0054e5f2;
            goto LAB_0054e33e;
          }
          uVar4 = FUN_00679d86(unaff_EBP + -0x14,0x8fd);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00419192(uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
      }
    }
    else if (iVar3 == 0x69) {
      uVar4 = FUN_00679d86(unaff_EBP + -0x34,0x900);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else if (iVar3 == 0x6a) {
      uVar4 = FUN_00679d86(unaff_EBP + -0x30,0x901);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else if (iVar3 == 0x6b) {
      uVar4 = FUN_00679d86(unaff_EBP + -0x2c,0x902);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      if (iVar3 != 0x6c) goto LAB_0054e33e;
      uVar4 = FUN_00679d86(unaff_EBP + -0x28,0x903);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
  }
  else if (iVar3 < 0xb5) {
    if (iVar3 == 0xb4) {
      uVar4 = FUN_00679d86(unaff_EBP + -0x4c,0x907);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else if (iVar3 == 0x6e) {
      uVar4 = FUN_00679d86(unaff_EBP + -0x48,0x905);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else if (iVar3 == 0x6f) {
      uVar4 = FUN_00679d86(unaff_EBP + -0x44,0x906);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else if (iVar3 == 0x70) {
LAB_0054e5f2:
      uVar4 = FUN_00679d86(unaff_EBP + -0x40,0x8fe);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      if (iVar3 != 0x71) {
        if (iVar3 == 0x77) goto LAB_0054e59c;
        goto LAB_0054e33e;
      }
      uVar4 = FUN_00679d86(unaff_EBP + -0x3c,0x90a);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
  }
  else if (iVar3 < 0xb5) {
LAB_0054e33e:
    iVar3 = iVar3 / 10;
    if ((((iVar3 != 0xd) && (iVar3 != 0xe)) && (iVar3 != 0x10)) && (iVar3 != 0x11))
    goto LAB_0054e3a0;
    uVar4 = FUN_00679d86(unaff_EBP + -0x5c,0x908);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00419192(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else if (iVar3 < 0xb8) {
    uVar4 = FUN_00679d86(unaff_EBP + -0x58,0x907);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00419192(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else if (iVar3 == 0xbe) {
    uVar4 = FUN_00679d86(unaff_EBP + -0x54,0x909);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00419192(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    if ((iVar3 != 0xbf) && (iVar3 != 0xc1)) goto LAB_0054e33e;
    uVar4 = FUN_00679d86(unaff_EBP + -0x50,0x909);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_00419192(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  FUN_00402676();
  psVar1 = *(short **)(unaff_EBP + -0x10);
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    FUN_0041354c(unaff_EBP + -0x10,psVar1,*(undefined4 *)(unaff_EBP + 0xc));
  }
LAB_0054e3a0:
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = 0;
  FUN_00419192(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x60) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


