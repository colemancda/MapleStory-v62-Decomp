/* FUN_00471268 - 0x00471268 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00471268(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x28);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    *(int *)(extraout_ECX + 0x24) = *(int *)(extraout_ECX + 0x24) + 1;
    *(undefined4 *)(extraout_ECX + 0x28) = 0;
  }
  piVar1 = (int *)(extraout_ECX + 0x24);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined4 *)(extraout_ECX + 0x24) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar3 = *(uint *)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (-1 < (int)uVar3) {
    if (*(int *)(extraout_ECX + 8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(*(int *)(extraout_ECX + 8) + -4);
    }
    if (uVar3 < uVar5) {
      FUN_00414f8b(*(int *)(extraout_ECX + 8) + uVar3 * 4);
    }
  }
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
  *puVar4 = 0;
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


