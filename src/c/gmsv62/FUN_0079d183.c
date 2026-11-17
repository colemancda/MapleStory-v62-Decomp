/* FUN_0079d183 - 0x0079d183 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079d183(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    iVar1 = **(int **)(unaff_EBP + 0xc);
    *(int *)(unaff_EBP + -0x14) = (*(int **)(unaff_EBP + 0xc))[1];
    *(uint *)(unaff_EBP + -0x18) =
         iVar1 + (-(uint)((*(uint *)(extraout_ECX + 0x52c) & 1) != 0) & 0xffffffce) + 0x19;
  }
  else {
    local_30 = (double)CONCAT44(1,unaff_EBP + -0x28);
    uStack_34 = 0x79d1ce;
    FUN_005c5b12();
    *(int *)(unaff_EBP + -0x18) = (*(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x20)) / 2;
    *(int *)(unaff_EBP + -0x14) = (*(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + -0x1c)) / 2;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  local_30 = (double)CONCAT44(1,unaff_EBP + -0x28);
  uStack_34 = 0x79d1fe;
  FUN_005c5b12();
  iVar5 = (*(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + -0x1c)) / 2;
  iVar4 = iVar5 - *(int *)(unaff_EBP + -0x14);
  iVar6 = (*(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x20)) / 2;
  iVar3 = iVar6 - *(int *)(unaff_EBP + -0x18);
  *(int *)(unaff_EBP + 0x10) = iVar4 * iVar4 + iVar3 * iVar3;
  local_30 = (double)*(int *)(unaff_EBP + 0x10);
  uStack_34 = 0x79d242;
  FUN_0087af44();
  local_30 = (double)CONCAT44(0x79d24f,(undefined4)local_30);
  iVar3 = __ftol();
  iVar3 = **(int **)(unaff_EBP + 0x18) + iVar3;
  local_30 = (double)CONCAT44(1,iVar3);
  *(int *)(iVar1 + 0x10) = iVar3;
  *(undefined8 **)(unaff_EBP + 0x10) = &local_30;
  uStack_34 = *(undefined4 *)(unaff_EBP + 0x1c);
  uStack_38 = 0x79d269;
  FUN_004059fd();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_34 = 0x79d27b;
  FUN_00424e27();
  uStack_34 = 0x79d282;
  uStack_34 = FUN_004320e3();
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_38;
  FUN_005cb50c(&uStack_38);
  iVar3 = *(int *)(iVar1 + 0x10) + *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar8 = *(undefined4 *)(unaff_EBP + -0x14);
  piVar2 = *(int **)(unaff_EBP + 0x18);
  uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
  iVar4 = *piVar2 + *(int *)(unaff_EBP + 0x14);
  FUN_00424e82(iVar4,iVar3,uVar7,uVar8,iVar6,iVar5);
  FUN_00427cd1(iVar4,iVar3,uVar7,uVar8,iVar6,iVar5);
  *piVar2 = *(int *)(iVar1 + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


