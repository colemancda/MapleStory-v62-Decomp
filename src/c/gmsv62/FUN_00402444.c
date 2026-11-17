/* FUN_00402444 - 0x00402444 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00402444(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_0040282d();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00402ee6(*(undefined4 *)(unaff_EBP + 0xc),1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402ee6(*(undefined4 *)(unaff_EBP + 8),1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402805();
  FUN_0065ad6b(unaff_EBP + 0xc,unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + 0x10));
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402fa6();
  *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc) =
       -*(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x20) + 0x28);
  *(int *)(*(int *)(unaff_EBP + -0x14) + 0x10) =
       -*(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x20) + 0x2c);
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + 0x24);
  if (iVar1 == DAT_00973a5c) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (*(int *)(extraout_ECX + 0x34) != 0) {
      FUN_004026c7(unaff_EBP + -0x18);
      *(undefined4 *)(extraout_ECX + 0x34) = 0;
    }
    FUN_004016ab(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + 0x10));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(extraout_ECX + 0x28) = 0;
    uVar3 = *(uint *)(extraout_ECX + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    while (uVar3 != 0) {
      if (iVar1 < *(int *)(*(int *)(*(int *)(uVar3 + 4) + 0x20) + 0x24)) {
        iVar1 = FUN_004033f1(uVar3);
        FUN_00402855();
        FUN_00402867();
        *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(unaff_EBP + -0x14);
        if (uVar3 != 0) goto LAB_0040258d;
        break;
      }
      iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    }
    FUN_00402698(unaff_EBP + -0x18);
LAB_0040258d:
    iVar1 = FUN_004034a5();
    FUN_0040287d(unaff_EBP + -0x20);
    while (iVar2 = FUN_00401983(*(undefined4 *)(iVar1 + 4)), iVar2 != 0) {
      iVar4 = iVar1;
      if (*(int *)(extraout_ECX + 0x48) == iVar1) {
        iVar4 = iVar2;
        iVar2 = iVar1;
      }
      FUN_00401a1d(iVar2,iVar4);
      iVar1 = iVar2;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_0040298a(0);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = *(int *)(unaff_EBP + -0x14);
  }
  if (iVar2 != 0) {
    FUN_0040295c(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


