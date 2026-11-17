/* FUN_00849b3c - 0x00849b3c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00849b3c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x3248) == 0) {
    uVar4 = 700;
    iVar2 = 0x32;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(extraout_ECX + 0x3250) + 4);
    FUN_0070b234();
    uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x578);
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x57c) + 0x32;
    FUN_00705df5();
  }
  iVar1 = FUN_004029b9(0x5bc);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0070a3b3(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),uVar4,iVar2
                        );
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar3 != 0) & uVar3 - 8;
  FUN_0070b234();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0084e991(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00705df5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


