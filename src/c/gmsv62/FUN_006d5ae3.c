/* FUN_006d5ae3 - 0x006d5ae3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006d5ae3(void)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  undefined4 uVar3;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  local_28 = 0x750;
  iStack_2c = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_30 = 0x6d5b17;
  piVar1 = (int *)FUN_00679d22();
  local_28 = *piVar1;
  iStack_30 = unaff_EBP + 8;
  *(int **)(unaff_EBP + -0x24) = &iStack_2c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_2c = extraout_ECX_00;
  FUN_00450368();
  iStack_30 = 0x6d5b31;
  iVar2 = FUN_004834bf();
  if (iVar2 == 0) {
    local_28 = 0x751;
    iStack_2c = unaff_EBP + -0x1c;
    iStack_30 = 0x6d5b47;
    piVar1 = (int *)FUN_00679d22();
    local_28 = *piVar1;
    iStack_30 = unaff_EBP + 8;
    *(int **)(unaff_EBP + -0x24) = &iStack_2c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_2c = extraout_ECX_01;
    FUN_00450368();
    iStack_30 = 0x6d5b61;
    iVar2 = FUN_004834bf();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_28 = 0x6d5b71;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -0xd) = 0;
    if (iVar2 == 0) goto LAB_006d5b7c;
  }
  *(undefined1 *)(unaff_EBP + -0xd) = 1;
LAB_006d5b7c:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_28 = 0x6d5b88;
  FUN_00414ebb();
  if (*(char *)(unaff_EBP + -0xd) == '\0') {
    local_28 = unaff_EBP + -0x14;
    iStack_2c = 0x96;
    iStack_30 = unaff_EBP + -0x20;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_2c = 0x6d5bb9;
    iStack_2c = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_30;
    iStack_30 = extraout_ECX_02;
    FUN_00450368(unaff_EBP + 8);
    iVar2 = FUN_0048350d();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_28 = 0x6d5bdf;
    FUN_00414ebb();
    if (iVar2 != 0) {
      iStack_2c = unaff_EBP + -0x14;
      *(int **)(unaff_EBP + -0x24) = &local_28;
      local_28 = 0;
      iStack_30 = 0x6d5bf4;
      FUN_00414f8b();
      iStack_2c = 0x6d5bfc;
      FUN_006d5c28();
    }
    uVar3 = 0;
  }
  else {
    local_28 = 0x6d5b95;
    FUN_006d1fd1();
    uVar3 = 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_28 = 0x6d5c09;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_28 = 0x6d5c15;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


