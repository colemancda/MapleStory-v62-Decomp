/* FUN_006b7e90 - 0x006b7e90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b7e90(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_006b70a7();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x8bd);
  *(undefined4 *)(unaff_EBP + -0x10) = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x10e3);
  uVar3 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_006b7e43(unaff_EBP + -0x1c,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x98) + 0x20))
            (extraout_ECX,2,*(int *)(extraout_ECX + 0x1c) + -0x16,10,0,unaff_EBP + -0x28);
  iVar2 = (*DAT_0097b704)();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(extraout_ECX + 0xc0) = iVar2 + 8000;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


