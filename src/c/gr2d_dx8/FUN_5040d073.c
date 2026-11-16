/* FUN_5040d073 - 0x5040d073 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040d073(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = extraout_ECX[5];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_5040508d((int)(extraout_ECX + 4));
    extraout_ECX[5] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 3)) =
       &PTR_LAB_5042da08;
  *extraout_ECX = &PTR_LAB_5042d3a4;
  return;
}


