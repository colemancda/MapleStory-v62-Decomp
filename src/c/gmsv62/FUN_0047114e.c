/* FUN_0047114e - 0x0047114e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047114e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar1 = (int *)(extraout_ECX + 8);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + -4);
  }
  if (iVar2 + -1 < 0) {
LAB_00471184:
    iVar3 = unaff_EBP + 8;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(iVar3);
  }
  else {
    iVar3 = FUN_0045ec92(unaff_EBP + 8);
    if (iVar3 == 0) goto LAB_00471184;
  }
  if (-1 < (int)*(uint *)(extraout_ECX + 0x24)) {
    uVar4 = 0;
    if (*piVar1 != 0) {
      uVar4 = *(uint *)(*piVar1 + -4);
    }
    if (*(uint *)(extraout_ECX + 0x24) < uVar4) {
      iVar3 = FUN_0045ec92(unaff_EBP + 8);
      if (iVar3 != 0) {
        *(undefined4 *)(extraout_ECX + 0x28) = 1;
        goto LAB_004711d7;
      }
    }
  }
  uVar5 = 0;
  if (*piVar1 != 0) {
    uVar5 = *(undefined4 *)(*piVar1 + -4);
  }
  *(undefined4 *)(extraout_ECX + 0x28) = 0;
  *(undefined4 *)(extraout_ECX + 0x24) = uVar5;
LAB_004711d7:
  while ((iVar3 = *piVar1, iVar3 != 0 && (8 < *(uint *)(iVar3 + -4)))) {
    FUN_00472621(iVar3);
    *(int *)(extraout_ECX + 0x24) = *(int *)(extraout_ECX + 0x24) + -1;
  }
  if (*(int *)(extraout_ECX + 0x24) < 0) {
    uVar5 = 0;
    if (*piVar1 != 0) {
      uVar5 = *(undefined4 *)(*piVar1 + -4);
    }
    *(undefined4 *)(extraout_ECX + 0x28) = 0;
    *(undefined4 *)(extraout_ECX + 0x24) = uVar5;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


