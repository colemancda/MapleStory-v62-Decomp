/* FUN_00794f23 - 0x00794f23 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00794f23(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uVar1 = *(uint *)(extraout_ECX + 6000);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  do {
    if (uVar1 == 0) break;
    iVar2 = *(int *)((-(uint)(uVar1 != 0) & uVar1 - 0x10) + 4);
    FUN_0079d81d();
    FUN_005d0fed();
    iVar3 = *(int *)(uVar1 + 4);
    *(int *)(unaff_EBP + -0x14) = iVar3;
    uVar1 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
  } while (*(int *)(iVar3 + 0xa0) != *(int *)(unaff_EBP + 0xc));
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar2 + 4) = iVar3;
  FUN_0079d81d();
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_005d0fed();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


