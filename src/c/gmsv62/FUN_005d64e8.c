/* FUN_005d64e8 - 0x005d64e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d64e8(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  uint uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x78) = uVar2;
  uVar3 = *(uint *)(extraout_ECX + 0x28);
  while (uVar3 != 0) {
    iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    *(undefined4 *)(*(int *)(uVar3 + 4) + 0x450) = 1;
    uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  FUN_0060142b(0x88,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004751b2(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


