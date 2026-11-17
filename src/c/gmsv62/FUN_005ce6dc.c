/* FUN_005ce6dc - 0x005ce6dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ce6dc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_005ce810();
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(extraout_ECX + 300,*(undefined4 *)(extraout_ECX + 0x134));
    if (999 < *(int *)(unaff_EBP + 8) - iVar1) {
      uVar2 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x134) = uVar2;
      iVar5 = DAT_00978358;
      iVar1 = *(int *)(DAT_00978358 + 4);
      *(int *)(unaff_EBP + -0x10) = DAT_00978358;
      puVar3 = (undefined4 *)(**(code **)(iVar1 + 0x10))();
      *(undefined4 *)(unaff_EBP + 8) = *puVar3;
      piVar4 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iVar1 = FUN_0087a90a(*(int *)(unaff_EBP + 8) - *piVar4);
      *(int *)(unaff_EBP + 8) = iVar1 / 10;
      iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iVar5 = (**(code **)(*(int *)(iVar5 + 4) + 0x10))();
      iVar1 = FUN_0087a90a(*(int *)(iVar5 + 4) - *(int *)(iVar1 + 4));
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar1 / 3;
      if ((*(uint *)(*(int *)(unaff_EBP + -0x10) + 0x52c) & 0xfffffffe) == 0x12) {
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 100;
      }
      FUN_0060142b(0x9e,0,0);
      uVar2 = *(undefined4 *)(extraout_ECX + 0x158);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar2 = FUN_004b8c9b(extraout_ECX + 0x150,uVar2);
      FUN_00457d37(uVar2);
      FUN_00457d37(*(undefined4 *)(unaff_EBP + 8));
      FUN_004751b2(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


