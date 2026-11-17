/* FUN_0069d1d7 - 0x0069d1d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069d1d7(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1) {
    iStack_1c = unaff_EBP + -0x14;
    uStack_20 = 0x69d206;
    FUN_0045b90e();
    iStack_1c = 0;
    uStack_20 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_24 = 0x69d212;
    FUN_0045ed72();
    uStack_20 = 0x69d219;
    iStack_1c = FUN_0045ee27();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    uStack_20 = 0x69d225;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_1c = 0x69d231;
    FUN_00414ebb();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
    }
    if (iVar1 < 0xc9) {
      iStack_1c = 1;
      uStack_20 = 0;
      uStack_24 = 1;
      uStack_28 = 0x400;
      uStack_2c = 0x69d256;
      uStack_24 = FUN_00415015();
      uStack_28 = 0x69d25c;
      uVar2 = FUN_00471777();
      iStack_1c = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
      uStack_20 = 0x69d26c;
      FUN_004150c0();
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        iStack_1c = unaff_EBP + -0x10;
        uStack_20 = 0x69d2b0;
        FUN_00414f8b();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_1c = 0x69d2bc;
        FUN_00414ebb();
        goto LAB_0069d2bc;
      }
      iStack_1c = 0;
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
      FUN_00679d22(&uStack_2c,0x11d);
      FUN_007db3ad();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_1c = 0x69d29f;
    FUN_00414ebb();
  }
  else {
LAB_0069d2bc:
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        iStack_1c = 0x69d2d6;
        FUN_00815de9();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


