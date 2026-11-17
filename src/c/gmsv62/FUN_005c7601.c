/* FUN_005c7601 - 0x005c7601 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c7601(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_005c634c(0);
  iVar3 = FUN_00413367(extraout_ECX + 0x368,*(undefined4 *)(extraout_ECX + 0x370));
  *(int *)(unaff_EBP + -0x10) = iVar3 + -0x1e;
  uVar4 = FUN_004133b5();
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(extraout_ECX + 0x370) = uVar4;
  if (iVar3 < 1) {
    iVar3 = *(int *)(extraout_ECX + 0x3b4) + iVar2 * 0x14;
    iVar2 = *(int *)((-(uint)(*(int *)(extraout_ECX + 0x364) != 0) &
                     *(int *)(extraout_ECX + 0x364) - 0x10U) + 4);
    *(uint *)(extraout_ECX + 0x364) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    uVar4 = *(undefined4 *)(extraout_ECX + 0x348);
    *(int *)(unaff_EBP + -0x14) = iVar3;
    iVar2 = FUN_00413367(extraout_ECX + 0x340,uVar4);
    if (iVar2 < 0) {
      if (*(int *)(extraout_ECX + 0x364) == 0) {
        *(undefined4 *)(extraout_ECX + 0x364) = *(undefined4 *)(iVar3 + 0xc);
      }
    }
    else if (*(int *)(extraout_ECX + 0x364) == 0) {
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x348) = uVar4;
      FUN_005c5f49();
      goto LAB_005c774d;
    }
    FUN_004031b7(1,3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(extraout_ECX + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(extraout_ECX + 0x440);
    iVar3 = *piVar1;
    *(int **)(unaff_EBP + -0x10) = piVar1;
    iVar3 = (**(code **)(iVar3 + 0x10c))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_005c6c22(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(extraout_ECX + 0x364));
  }
LAB_005c774d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


