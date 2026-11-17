/* FUN_00789e42 - 0x00789e42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00789e42(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0074b9b2();
  extraout_ECX[0x15d] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x155] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x156] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x157] = *(undefined4 *)(unaff_EBP + 0x10);
  extraout_ECX[0x158] = *(undefined4 *)(unaff_EBP + 0x14);
  extraout_ECX[0x159] = *(undefined4 *)(unaff_EBP + 0x18);
  extraout_ECX[0x15a] = *(undefined4 *)(unaff_EBP + 0x1c);
  extraout_ECX[0x15b] = *(undefined4 *)(unaff_EBP + 0x20);
  *extraout_ECX = &PTR_FUN_008f17a8;
  extraout_ECX[1] = &PTR_FUN_008f175c;
  extraout_ECX[2] = &PTR_FUN_008f1758;
  return extraout_ECX;
}


