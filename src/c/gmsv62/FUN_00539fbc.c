/* FUN_00539fbc - 0x00539fbc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00539fbc(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _DAT_00979324 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0044590d();
  extraout_ECX[0xea] = 0;
  extraout_ECX[0xec] = 0;
  extraout_ECX[0xed] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008eb8d8;
  extraout_ECX[1] = &PTR_FUN_008eb88c;
  extraout_ECX[2] = &PTR_FUN_008eb888;
  return extraout_ECX;
}


