/* FUN_0059b928 - 0x0059b928 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0059b928(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x34);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + -4) == 0)) {
    FUN_00414edd(&DAT_00978474,0xffffffff);
  }
  else {
    iVar4 = _rand();
    iVar2 = *(int *)(extraout_ECX + 0x30);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(int *)(unaff_EBP + -0x14) = iVar4 % iVar2;
    iVar2 = *(int *)(extraout_ECX + 0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if ((iVar2 != 0) && (*(int *)(iVar2 + -4) != 0)) {
      for (uVar5 = iVar2 + -8 + *(int *)(iVar2 + -4) * 8; uVar5 != 0; uVar5 = uVar5 - 8) {
        FUN_0059c1e9(uVar5);
        piVar1 = (int *)(unaff_EBP + -0x14);
        *piVar1 = *piVar1 - *(int *)(*(int *)(unaff_EBP + -0x1c) + 4);
        if ((*piVar1 < 0) || (uVar5 <= *(uint *)(extraout_ECX + 0x34))) break;
      }
    }
    FUN_00414f8b(*(undefined4 *)(unaff_EBP + -0x1c));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_0059c27e(0);
    }
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = 0;
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


