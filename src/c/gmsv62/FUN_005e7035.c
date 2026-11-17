/* FUN_005e7035 - 0x005e7035 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005e7035(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_009794b8 = -(uint)(extraout_ECX + 1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[2] = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  extraout_ECX[3] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0xc] = 0;
  *extraout_ECX = &PTR_FUN_008ecc7c;
  uVar1 = (*DAT_0097b558)(0,0x7f89);
  extraout_ECX[0xd] = uVar1;
  uVar1 = (*DAT_0097b558)(0,0x7f00);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xe] = uVar1;
  return extraout_ECX;
}


