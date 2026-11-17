/* FUN_004e0d04 - 0x004e0d04 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e0d04(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  undefined2 uVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 local_20;
  
  FUN_00879bb8();
  uVar1 = DAT_00978368;
  uVar4 = 0;
  iVar2 = *(int *)(extraout_ECX + 0xbc);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  if (iVar2 == 9) {
    iVar2 = extraout_ECX + 0xec;
  }
  else {
    local_20 = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414edd(&DAT_00978474);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    iVar2 = unaff_EBP + -0x10;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  if (*(int *)(extraout_ECX + 0xbc) == 6) {
    uVar3 = *(undefined2 *)(extraout_ECX + 0xe0);
  }
  else {
    uVar3 = 0;
  }
  if (*(int *)(extraout_ECX + 0xbc) == 1) {
    uVar4 = *(undefined4 *)(extraout_ECX + 200);
  }
  local_20 = 0;
  *(undefined4 **)(unaff_EBP + -0x1c) = &local_20;
  FUN_00414f8b(iVar2);
  FUN_008498d1(*(undefined4 *)(extraout_ECX + 0xbc),uVar4,uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    local_20 = 0x4e0da5;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


