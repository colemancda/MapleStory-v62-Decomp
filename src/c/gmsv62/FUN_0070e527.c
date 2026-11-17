/* FUN_0070e527 - 0x0070e527 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070e527(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  piVar4 = *(int **)(extraout_ECX + 0x10);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0xc;
  if (piVar4 != (int *)0x0) {
    piVar1 = piVar4 + *(int *)(extraout_ECX + 0x14);
    for (; piVar4 < piVar1; piVar4 = piVar4 + 1) {
      if (*piVar4 != 0) {
        iVar5 = *piVar4;
        goto LAB_0070e55e;
      }
    }
  }
  iVar5 = 0;
LAB_0070e55e:
  *(int *)(unaff_EBP + -0x14) = iVar5;
  if (iVar5 != 0) {
    *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x24;
    do {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0070eda5();
      FUN_0070edc2();
      iVar2 = *(int *)(iVar5 + 0x10);
      *(int *)(unaff_EBP + -0x20) = iVar2;
      uVar3 = *(undefined4 *)(iVar5 + 8);
      uVar6 = (**(code **)(*(int *)(iVar2 + 4) + 0x2c))();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar6;
      uVar6 = (**(code **)(*(int *)(*(int *)(unaff_EBP + -0x20) + 4) + 0x30))();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      FUN_004cda9b(unaff_EBP + -0x18,unaff_EBP + -0x2c);
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      FUN_0070ee8c(unaff_EBP + -0x18,unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0070edc2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0070edc2();
      FUN_0070f050(unaff_EBP + -0x14,0);
      iVar5 = *(int *)(unaff_EBP + -0x14);
    } while (iVar5 != 0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


