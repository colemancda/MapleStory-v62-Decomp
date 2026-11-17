/* FUN_00710474 - 0x00710474 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00710474(void)

{
  DWORD DVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_0097bddc = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *extraout_ECX = &PTR_FUN_008f09f0;
  extraout_ECX[1] = &PTR_LAB_008f09a4;
  extraout_ECX[2] = &PTR_FUN_008f09a0;
  FUN_0081420c(0x101,0x61,0x11e,0x92,10,1,0,1);
  DVar1 = timeGetTime();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x20] = DVar1;
  return extraout_ECX;
}


