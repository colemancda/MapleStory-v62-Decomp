/* FUN_004712f1 - 0x004712f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004712f1(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 8);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + -4);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = iVar2 + -1;
  iVar3 = *(int *)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((iVar3 < 0) || (iVar2 <= iVar3)) {
    if ((iVar3 != iVar2) || (iVar2 < 0)) goto LAB_00471342;
  }
  else {
    iVar3 = iVar3 + 1;
    *(int *)(extraout_ECX + 0x24) = iVar3;
  }
  FUN_00414f8b(*(int *)(extraout_ECX + 8) + iVar3 * 4);
LAB_00471342:
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


