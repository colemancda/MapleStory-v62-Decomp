/* FUN_005e4469 - 0x005e4469 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005e4469(void)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  int extraout_ECX;
  uint uVar8;
  int iVar9;
  int iVar10;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_008ecc50;
  iVar9 = *(int *)(extraout_ECX + 0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x58) = 0;
  if ((iVar9 == 0) && (*(int *)(unaff_EBP + 0xc) == 0)) {
    uVar8 = *(uint *)(extraout_ECX + 0x20);
    if (uVar8 != 0) {
      do {
        if (0 < *(short *)(uVar8 + 0xc)) break;
        *(int *)(extraout_ECX + 0x58) =
             *(int *)(extraout_ECX + 0x58) + (int)*(short *)(uVar8 + 0x10);
        iVar9 = *(int *)((-(uint)(uVar8 != 0) & uVar8 - 0x10) + 8);
        uVar8 = -(uint)(iVar9 != 0) & iVar9 + 0x10U;
      } while (uVar8 != 0);
      if (uVar8 != 0) {
        uVar8 = -(uint)(*(int *)(uVar8 - 0xc) != 0) & *(int *)(uVar8 - 0xc) + 0x10U;
        if (uVar8 != 0) {
          FUN_005e5367(extraout_ECX + 0x10,uVar8,0,0);
        }
        goto LAB_005e44f6;
      }
    }
    *(undefined4 *)(extraout_ECX + 0x58) = 0;
  }
LAB_005e44f6:
  pcVar6 = *(char **)(extraout_ECX + 0x20);
  if (((((*(int *)(extraout_ECX + 0x28) != 0) || (*pcVar6 != '\0')) ||
       (*(short *)(pcVar6 + 2) != *(short *)(extraout_ECX + 0x46))) ||
      ((*(short *)(pcVar6 + 4) != *(short *)(extraout_ECX + 0x48) ||
       (*(short *)(pcVar6 + 6) != *(short *)(extraout_ECX + 0x4a))))) ||
     ((*(short *)(pcVar6 + 8) != *(short *)(extraout_ECX + 0x4c) ||
      ((*(short *)(pcVar6 + 0xc) != *(short *)(extraout_ECX + 0x50) ||
       (cVar1 = pcVar6[10], cVar2 = *(char *)(extraout_ECX + 0x4e),
       *(undefined4 *)(unaff_EBP + 0xc) = 1, cVar1 != cVar2)))))) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
  }
  puVar3 = (undefined4 *)(extraout_ECX + 0x44);
  for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar3 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    puVar3 = puVar3 + 1;
  }
  iVar9 = *(int *)(unaff_EBP + 0x10);
  if (iVar9 != 0) {
    puVar3 = *(undefined4 **)(extraout_ECX + 0x1c);
    if (puVar3 != (undefined4 *)0x0) {
      while( true ) {
        iVar9 = *(int *)((-(uint)(puVar3 != (undefined4 *)0x0) & (uint)(puVar3 + -4)) + 4);
        *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar9 != 0) & iVar9 + 0x10U;
        *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
        puVar4 = (undefined4 *)FUN_005e5129();
        for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        iVar9 = *(int *)(unaff_EBP + 0x10);
        FUN_00413367(iVar9 + 0x8c,*(undefined4 *)(iVar9 + 0x94));
        uVar5 = FUN_004133b5();
        iVar10 = *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(iVar9 + 0x94) = uVar5;
        if (iVar10 == 0) break;
        puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
      }
    }
    uVar5 = FUN_004133b5();
    *(undefined4 *)(iVar9 + 0x7c) = uVar5;
    puVar3 = *(undefined4 **)(iVar9 + 0x20);
    puVar4 = (undefined4 *)(iVar9 + 0x44);
    for (iVar10 = 5; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  FUN_005e4153(*(undefined4 *)(unaff_EBP + 8));
  uVar5 = FUN_004b8c34();
  *(undefined4 *)(extraout_ECX + 4) = uVar5;
  uVar5 = FUN_004b8c34();
  iVar9 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0xc) = uVar5;
  if (iVar9 != 0) {
    pcVar6 = *(char **)(extraout_ECX + 0x1c);
    while (pcVar6 != (char *)0x0) {
      iVar9 = *(int *)((-(uint)(pcVar6 != (char *)0x0) & (uint)(pcVar6 + -0x10)) + 4);
      pcVar7 = (char *)(iVar9 + 0x10U & -(uint)(iVar9 != 0));
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
      if (cVar1 == '\n') {
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
      }
    }
  }
  FUN_005e532d();
  FUN_005e5367(unaff_EBP + -0x28,0,0,0);
  FUN_0045ebca();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x28) = 0;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_008ecc50;
  FUN_005e532d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0xc);
}


