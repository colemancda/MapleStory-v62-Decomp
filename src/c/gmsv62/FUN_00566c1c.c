/* FUN_00566c1c - 0x00566c1c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00566c1c(void)

{
  uint uVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (((*(int *)(extraout_ECX + 0x144) == 0) && (*(int *)(extraout_ECX + 0x15c) != 0)) &&
     (uVar1 = *(uint *)(unaff_EBP + 8), uVar1 < *(uint *)(*(int *)(extraout_ECX + 0x15c) + -4))) {
    FUN_0060142b(6,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0045d247(CONCAT22((short)((uint)*(int *)(extraout_ECX + 0x15c) >> 0x10),
                          *(undefined2 *)(uVar1 * 0x20 + *(int *)(extraout_ECX + 0x15c))));
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x144) = 1;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


