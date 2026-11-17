/* FUN_0065cfd1 - 0x0065cfd1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065cfd1(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 uStack_1c;
  undefined4 *local_18;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  local_18 = (undefined4 *)0x65cfed;
  FUN_0065d116();
  local_18 = (undefined4 *)0x0;
  uStack_1c = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004b75f1();
  local_18 = *(undefined4 **)(unaff_EBP + -0x14);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_1c;
  FUN_0045e485();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004e21db();
  FUN_00833cf7();
  local_18 = &DAT_0097929c;
  uStack_1c = 0x65d02f;
  iVar1 = (**(code **)(*(int *)(DAT_009796d4 + 4) + 0x48))();
  if (iVar1 == 0) {
    uStack_1c = 0x18;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uStack_1c = 0x65d053;
      uVar2 = FUN_0052899a();
    }
    uStack_1c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0065ce47(uVar2);
  }
  uStack_1c = 0x1d78;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_1c = *(undefined4 *)(unaff_EBP + 8);
    uVar2 = FUN_005294cc();
  }
  uStack_1c = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0065ce47(uVar2);
  uStack_1c = 200;
  FUN_0047cca1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    uStack_1c = 0;
    FUN_0045e7c2();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


