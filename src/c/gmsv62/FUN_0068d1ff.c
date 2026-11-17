/* FUN_0068d1ff - 0x0068d1ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0068d1ff(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  iStack_20 = 0x68d219;
  cVar1 = FUN_0042452b();
  iStack_20 = unaff_EBP + -0x1c;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  iStack_24 = 0x68d230;
  iVar2 = FUN_00455c59();
  iStack_20 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0xad);
  iStack_24 = *(int *)(iVar2 + 4) + 0xa5;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_28 = 0x68d247;
  uVar3 = FUN_00413367();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    iStack_20 = 0;
    iStack_24 = 0x68d25e;
    FUN_0045e7c2();
  }
  if (cVar1 == '\x06') {
    if ((extraout_ECX[0x71] < *(int *)(unaff_EBP + -0x10)) &&
       (iVar2 = *(int *)(unaff_EBP + -0x10) - extraout_ECX[0x71],
       iVar2 < extraout_ECX[0x70] - extraout_ECX[0x6f])) {
      *(int *)(unaff_EBP + 0xc) = iVar2;
    }
  }
  iStack_20 = 8;
  iStack_24 = 0x68d28e;
  (**(code **)(*extraout_ECX + 0x34))();
  if (cVar1 == '\x02') {
    *(undefined1 **)(unaff_EBP + 0xc) = auStack_34;
    uVar3 = 0x1a4;
  }
  else if (cVar1 == '\x06') {
    if (0 < *(int *)(unaff_EBP + 0xc)) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iStack_24 = 0x1a6;
      iStack_28 = unaff_EBP + -0x14;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      iStack_2c = 0x68d306;
      puVar4 = (undefined4 *)FUN_00679d22();
      iStack_28 = *puVar4;
      iStack_24 = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_2c = unaff_EBP + -0x10;
      uStack_30 = 0x68d319;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_24 = 0x68d328;
      FUN_00414ebb();
      iStack_24 = 0;
      iStack_28 = 0;
      iStack_2c = 0;
      uStack_30 = 0;
      *(undefined1 **)(unaff_EBP + 0xc) = auStack_34;
      FUN_00450368(unaff_EBP + -0x10);
      FUN_007db3ad();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_24 = 0x68d34f;
      FUN_00414ebb();
      goto LAB_0068d384;
    }
    *(undefined1 **)(unaff_EBP + 0xc) = auStack_34;
    uVar3 = 0x1a5;
  }
  else if (cVar1 == '\a') {
    *(undefined1 **)(unaff_EBP + 0xc) = auStack_34;
    uVar3 = 0x1a7;
  }
  else if (cVar1 == '\b') {
    *(undefined1 **)(unaff_EBP + 0xc) = auStack_34;
    uVar3 = 0x1a8;
  }
  else {
    if (cVar1 != '\t') goto LAB_0068d384;
    *(undefined1 **)(unaff_EBP + 0xc) = auStack_34;
    uVar3 = 0x1a9;
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  FUN_00679d22(auStack_34,uVar3);
  FUN_007db3ad();
LAB_0068d384:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


