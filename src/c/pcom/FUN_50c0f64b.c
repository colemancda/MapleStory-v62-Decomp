/* FUN_50c0f64b - 0x50c0f64b in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c0f64b(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  size_t *psVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar7 = *(int *)(unaff_EBP + 0xc);
  if (iVar7 == 0) {
    uVar4 = 0x80004003;
    goto LAB_50c0f721;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  puVar8 = (undefined4 *)(iVar2 + 0x18);
  *(undefined4 **)(unaff_EBP + 0xc) = puVar8;
  *(undefined4 **)(unaff_EBP + -0x10) = puVar8;
  FUN_50c026fc();
  uVar5 = *(uint *)(iVar7 + -4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = uVar5 >> 1;
  if (uVar5 == 0) {
LAB_50c0f733:
    psVar6 = FUN_50c02a35(iVar7,uVar5);
    FUN_50c0f770((short *)psVar6);
    FUN_50c05e8d();
    FUN_50c04bec((int *)(unaff_EBP + 0xc));
    FUN_50c02a72((undefined4 *)(iVar2 + 0x38));
    piVar3 = *(int **)(unaff_EBP + 0xc);
    *(undefined4 *)(iVar2 + 0x38) = piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_50c02a85(piVar3);
    }
  }
  else {
    sVar1 = *(short *)(uVar5 * 2 + -2 + iVar7);
    if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) {
      puVar8 = *(undefined4 **)(unaff_EBP + 0xc);
      goto LAB_50c0f733;
    }
    psVar6 = FUN_50c02a35(iVar7,uVar5 + 1);
    iVar7 = FUN_50c0f770((short *)psVar6);
    if (iVar7 != 0) {
      *(undefined2 *)(uVar5 * 2 + iVar7) = 0x2f;
    }
    FUN_50c05e8d();
    FUN_50c04bec((int *)(unaff_EBP + 8));
    FUN_50c02a72((undefined4 *)(iVar2 + 0x38));
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(iVar2 + 0x38) = piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_50c02a85(piVar3);
    }
    puVar8 = *(undefined4 **)(unaff_EBP + 0xc);
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  FUN_50c04bec((int *)(unaff_EBP + 8));
  FUN_50c02a72((undefined4 *)(iVar2 + 0x40));
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(iVar2 + 0x40) = piVar3;
  if (piVar3 != (int *)0x0) {
    FUN_50c02a85(piVar3);
  }
  piVar3 = puVar8 + 1;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *puVar8 = 0;
  }
  uVar4 = 0;
LAB_50c0f721:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


