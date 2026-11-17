/* FUN_00717751 - 0x00717751 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00717751(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_00979174 = -(uint)(extraout_ECX + 0x19 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x30] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0060142b(0x7fffffff,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  extraout_ECX[0x35] = 0;
  extraout_ECX[0x36] = 0;
  extraout_ECX[0x37] = 0;
  *extraout_ECX = &PTR_FUN_008f0a90;
  extraout_ECX[1] = &PTR_FUN_008f0a44;
  extraout_ECX[2] = &PTR_FUN_008f0a40;
  FUN_0081420c(0,0,0xf8,0x10f,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


