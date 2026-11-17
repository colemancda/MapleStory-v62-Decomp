/* FUN_0054ac04 - 0x0054ac04 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0054ac04(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == 2) {
    iVar2 = *extraout_ECX;
    piStack_24 = (int *)0x2;
LAB_0054ae03:
    iStack_28 = 0x54ae08;
    (**(code **)(iVar2 + 0x34))();
  }
  else {
    if (iVar2 == 0x3eb) {
      if (*(int *)(extraout_ECX[0x2d] + 0x108) <= extraout_ECX[0x26] + extraout_ECX[0x25])
      goto LAB_0054ac62;
      extraout_ECX[0x25] = (int)*(short *)(extraout_ECX[0x2d] + 0xe) + extraout_ECX[0x25];
    }
    else if (iVar2 == 0x3ec) {
      if (extraout_ECX[0x25] <= (int)*(short *)(extraout_ECX[0x2d] + 0xe)) goto LAB_0054ac62;
      extraout_ECX[0x25] = extraout_ECX[0x25] - (int)*(short *)(extraout_ECX[0x2d] + 0xe);
    }
    else if (iVar2 == 1) {
      piStack_24 = *(int **)(extraout_ECX[0x2a] + 0x24);
      iStack_28 = extraout_ECX[0x2a] + 0x1c;
      iStack_2c = 0x54acb1;
      iVar2 = FUN_00413367();
      piStack_24 = (int *)0x54acbc;
      iVar3 = FUN_0054ae0d();
      if (iVar2 < iVar3) {
        piStack_24 = (int *)0x0;
        iStack_28 = 0;
        iStack_2c = 0;
        uStack_30 = 0;
        *(undefined1 **)(unaff_EBP + 8) = auStack_34;
        FUN_00679d22(auStack_34,0x224);
        FUN_007db3ad();
        goto LAB_0054ac62;
      }
      if (extraout_ECX[0x26] + extraout_ECX[0x25] < *(int *)(extraout_ECX[0x2d] + 0x108)) {
        piStack_24 = (int *)0x0;
        iStack_28 = 0;
        iStack_2c = 0xd9;
        uStack_30 = 0x54adaa;
        FUN_0060142b();
        piStack_24 = (int *)0x13;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        iStack_28 = 0x54adb7;
        FUN_00457cda();
        piStack_24 = *(int **)(extraout_ECX[0x2d] + 0x20);
        iStack_28 = 0x54adc8;
        FUN_00457d37();
        piStack_24 = (int *)extraout_ECX[0x26];
        iStack_28 = 0x54add6;
        FUN_00457d37();
        piStack_24 = (int *)extraout_ECX[0x25];
        iStack_28 = 0x54ade4;
        FUN_00457d37();
        piStack_24 = (int *)(unaff_EBP + -0x20);
        iStack_28 = 0x54adf3;
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piStack_24 = (int *)0x54adff;
        FUN_0045ebca();
      }
      else {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        piStack_24 = (int *)0x1173;
        iStack_28 = unaff_EBP + -0x10;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_2c = 0x54ad22;
        puVar4 = (undefined4 *)FUN_00679d22();
        uVar1 = *puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_24 = (int *)0x54ad2f;
        piStack_24 = (int *)FUN_0054ae0d();
        iStack_2c = unaff_EBP + 8;
        uStack_30 = 0x54ad3a;
        iStack_28 = uVar1;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piStack_24 = (int *)0x54ad48;
        FUN_00414ebb();
        piStack_24 = (int *)0x0;
        iStack_28 = 0;
        iStack_2c = 0;
        uStack_30 = 0;
        *(undefined1 **)(unaff_EBP + -0x10) = auStack_34;
        FUN_00450368(unaff_EBP + 8);
        iVar2 = FUN_007db791();
        if (iVar2 != 6) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_24 = (int *)0x54ad74;
          FUN_00414ebb();
          goto LAB_0054ac62;
        }
        piStack_24 = extraout_ECX + 0x2c;
        iStack_28 = 0x54ad8b;
        FUN_0052af59();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piStack_24 = (int *)0x54ad97;
        FUN_00414ebb();
      }
      iVar2 = *extraout_ECX;
      piStack_24 = (int *)0x1;
      goto LAB_0054ae03;
    }
    piStack_24 = (int *)0x0;
    iStack_28 = 0x54ac62;
    FUN_008161f1();
  }
LAB_0054ac62:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


