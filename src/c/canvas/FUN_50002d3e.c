/* FUN_50002d3e - 0x50002d3e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * FUN_50002d3e(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = extraout_ECX + 1;
  *puVar1 = &PTR_LAB_50014284;
  *extraout_ECX = &PTR_FUN_50014280;
  *puVar1 = &PTR_LAB_5001427c;
  if (DAT_500864e8 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *DAT_500864e8;
  }
  FUN_50002d9b(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)puVar1,uVar2,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


