/* FUN_0065c590 - 0x0065c590 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065c590(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int iStack_24;
  undefined4 *local_20;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  local_20 = (undefined4 *)0x65c5b3;
  FUN_0065d116();
  local_20 = (undefined4 *)0x0;
  iStack_24 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004b75f1();
  local_20 = *(undefined4 **)(unaff_EBP + -0x18);
  *(int **)(unaff_EBP + -0x14) = &iStack_24;
  FUN_0045e485();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004e21db();
  FUN_00833cf7();
  local_20 = &DAT_0097929c;
  iStack_24 = 0x65c5f5;
  iVar2 = (**(code **)(*(int *)(DAT_009796d4 + 4) + 0x48))();
  if (iVar2 == 0) {
    iStack_24 = 0x18;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      iStack_24 = 0x65c619;
      uVar3 = FUN_0052899a();
    }
    iStack_24 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0065ce47(uVar3);
  }
  iStack_24 = 0x1da0;
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(DAT_00978368 + 0x3280);
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iStack_24 = *(int *)(unaff_EBP + 8);
    uVar3 = FUN_00454505();
  }
  iStack_24 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0065ce47(uVar3);
  iStack_24 = 100;
  FUN_0047cca1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x2c98) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    iStack_24 = 0;
    FUN_0045e7c2();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


