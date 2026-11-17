/* FUN_00580cff - 0x00580cff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00580cff(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_00979410 = -(uint)(extraout_ECX + 0x19 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x19] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x1b] = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x31] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0074b9b2();
  extraout_ECX[0x16c] = 0;
  extraout_ECX[0x16d] = 0;
  extraout_ECX[0x16e] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *extraout_ECX = &PTR_FUN_008ec31c;
  extraout_ECX[1] = &PTR_FUN_008ec2d0;
  extraout_ECX[2] = &PTR_FUN_008ec2cc;
  FUN_0081420c(0x8c,0xfffff867,0xa0,0x118,10,0,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


