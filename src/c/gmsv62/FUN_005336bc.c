/* FUN_005336bc - 0x005336bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005336bc(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  extraout_ECX[0x1e] = 0xffffffff;
  extraout_ECX[0x1f] = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0074b9b2();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *extraout_ECX = &PTR_FUN_008eb6a8;
  extraout_ECX[1] = &PTR_LAB_008eb65c;
  extraout_ECX[2] = &PTR_FUN_008eb658;
  extraout_ECX[0x1d] = uVar1;
  FUN_004bc5b8(0,0,1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


