/* FUN_50407088 - 0x50407088 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * FUN_50407088(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = extraout_ECX + 1;
  *puVar1 = &PTR_LAB_5042d5e8;
  *extraout_ECX = &PTR_FUN_5042d5e4;
  *puVar1 = &PTR_LAB_5042d5e0;
  if (DAT_50439084 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *DAT_50439084;
  }
  FUN_504070e5(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)puVar1,uVar2,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


