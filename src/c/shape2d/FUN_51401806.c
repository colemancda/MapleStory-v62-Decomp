/* FUN_51401806 - 0x51401806 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51401806(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_5140c274;
  extraout_ECX[1] = &PTR_LAB_5140c270;
  puVar1 = DAT_51411b78;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_5140177e(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 1),uVar2,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_5140c27c;
  return;
}


