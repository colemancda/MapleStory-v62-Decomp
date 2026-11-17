/* FUN_0080e9b8 - 0x0080e9b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080e9b8(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  iStack_18 = unaff_EBP + -0x14;
  uStack_1c = 0x80e9d8;
  FUN_0045b90e();
  iStack_18 = 0;
  uStack_1c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_20 = 0x80e9e6;
  FUN_0045ed72();
  uStack_1c = 0x80e9ed;
  iStack_18 = FUN_0045ee27();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uStack_1c = 0x80e9f9;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_18 = 0x80ea05;
  FUN_00414ebb();
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
  }
  if (iVar1 != 0) {
    iStack_18 = 0;
    uStack_1c = 0x80ea23;
    FUN_004a2fef();
    if (*(int *)(extraout_ECX + 0xa4) < 10) {
      iStack_18 = unaff_EBP + -0x10;
      uStack_1c = 0x80ea62;
      FUN_00414f8b();
      *(int *)(extraout_ECX + 0xa4) = *(int *)(extraout_ECX + 0xa4) + 1;
      iStack_18 = 0;
      uStack_1c = 0x80ea70;
      FUN_008161f1();
    }
    else {
      iStack_18 = 0;
      uStack_1c = 0;
      uStack_20 = 0;
      uStack_24 = 0;
      *(undefined1 **)(unaff_EBP + -0x18) = auStack_28;
      FUN_00679d22(auStack_28,0x105d);
      FUN_007db3ad();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_18 = 0x80ea7c;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


