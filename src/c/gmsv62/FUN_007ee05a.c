/* FUN_007ee05a - 0x007ee05a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ee05a(void)

{
  int iVar1;
  int extraout_ECX;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(*(int *)(unaff_EBP + 8) + 8) != 0) {
    uVar2 = *(uint *)(*(int *)(unaff_EBP + 8) + 0xc);
    iVar3 = 0;
    while (uVar2 != 0) {
      iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
      *(undefined4 *)(unaff_EBP + 8) = 0;
      FUN_00414f8b(uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0049e176(*(undefined4 *)(unaff_EBP + 8),iVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      iVar3 = iVar3 + 1;
      uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    }
    *(undefined4 *)(*(int *)(extraout_ECX + 0x63c) + 0x60) = 0;
    FUN_004b3daf();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


