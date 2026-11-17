/* FUN_007ee6b6 - 0x007ee6b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ee6b6(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00473048();
  FUN_007ee73d(unaff_EBP + -0x20);
  uVar2 = *(uint *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  while (uVar2 != 0) {
    iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
    FUN_004726be();
    FUN_00414f8b(uVar2);
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x20) = &PTR_FUN_008e9a74;
  FUN_0049ea31();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


