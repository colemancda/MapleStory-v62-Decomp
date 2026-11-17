/* FUN_00534542 - 0x00534542 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00534542(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int *piStack_1c;
  int iStack_18;
  int *piStack_14;
  
  FUN_00879bb8();
  piStack_14 = (int *)0x53455d;
  FUN_0074d6fb();
  if (*(int *)(unaff_EBP + 8) == 0x3e9) {
    piStack_14 = (int *)(unaff_EBP + -0x10);
    iStack_18 = 0x534579;
    FUN_0045b90e();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piStack_14 = (int *)0x534586;
    FUN_00495ba8();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
    }
    if (iVar1 < 1) {
      piStack_14 = (int *)0x0;
      iStack_18 = 0;
      piStack_1c = extraout_ECX + 0x1b;
      uStack_20 = 0;
      *(undefined1 **)(unaff_EBP + 8) = auStack_24;
      FUN_00679d22(auStack_24,0x11b0);
      FUN_007db3ad();
      piStack_14 = (int *)(-(uint)(extraout_ECX[0x27] != 0) & extraout_ECX[0x27] + 4U);
      iStack_18 = 0x5345db;
      FUN_00817f6e();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_14 = (int *)0x5345e7;
      FUN_00414ebb();
      goto LAB_00534690;
    }
    piStack_1c = *(int **)(extraout_ECX[0x29] + 0x60);
    piStack_14 = extraout_ECX + 0x2a;
    iStack_18 = unaff_EBP + -0x10;
    uStack_20 = 0x53460c;
    iVar1 = FUN_00554656();
    if (iVar1 == 0) {
      piStack_14 = (int *)0x0;
      iStack_18 = 0;
      piStack_1c = extraout_ECX + 0x1b;
      uStack_20 = 0;
      *(undefined1 **)(unaff_EBP + -0x14) = auStack_24;
      FUN_00679d22(auStack_24,0x11b1);
      FUN_007db3ad();
      piStack_14 = (int *)(-(uint)(extraout_ECX[0x27] != 0) & extraout_ECX[0x27] + 4U);
      iStack_18 = 0x534652;
      FUN_00817f6e();
    }
    extraout_ECX[0x1e] = -1;
    extraout_ECX[0x1f] = -1;
    piStack_14 = (int *)0x534661;
    FUN_005346a0();
    piStack_14 = (int *)0x0;
    iStack_18 = 0x534669;
    FUN_008161f1();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_14 = (int *)0x534675;
    FUN_00414ebb();
  }
  if (*(int *)(unaff_EBP + 8) == 1) {
    iVar1 = *extraout_ECX;
    piStack_14 = (int *)0x1;
  }
  else {
    if (*(int *)(unaff_EBP + 8) != 2) goto LAB_00534690;
    iVar1 = *extraout_ECX;
    piStack_14 = (int *)0x2;
  }
  iStack_18 = 0x534690;
  (**(code **)(iVar1 + 0x34))();
LAB_00534690:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


