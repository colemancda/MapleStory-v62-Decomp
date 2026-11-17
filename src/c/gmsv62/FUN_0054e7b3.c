/* FUN_0054e7b3 - 0x0054e7b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0054e7b3(void)

{
  undefined4 *puVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)(extraout_ECX + 4);
  *(undefined4 **)(unaff_EBP + -0x18) = puVar1;
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0xc;
  iVar5 = FUN_00559a1e(unaff_EBP + 8,unaff_EBP + -0x20);
  if (iVar5 == 0) {
    FUN_0054e2c6(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + 8));
    psVar3 = *(short **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if ((psVar3 == (short *)0x0) || (*psVar3 == 0)) {
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_00559816(0);
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      piVar2 = (int *)(extraout_ECX + 8);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *puVar1 = 0;
      }
      iVar5 = 0;
      goto LAB_0054e8ba;
    }
    uVar6 = FUN_0054ebbb(unaff_EBP + -0x28,*(undefined4 *)(unaff_EBP + 8),psVar3);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0055942d(uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_00559816(0);
    }
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_00559a72(unaff_EBP + 8,unaff_EBP + -0x20);
    }
    iVar5 = *(int *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    iVar5 = *(int *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = iVar5;
  }
  if (iVar4 != 0) {
    FUN_00559816(0);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  piVar2 = (int *)(extraout_ECX + 8);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
LAB_0054e8ba:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


