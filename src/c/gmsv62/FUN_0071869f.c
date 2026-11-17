/* FUN_0071869f - 0x0071869f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0071869f(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_0097bdec = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1e] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0074b9b2();
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *extraout_ECX = &PTR_FUN_008f0b9c;
  extraout_ECX[1] = &PTR_LAB_008f0b50;
  extraout_ECX[2] = &PTR_FUN_008f0b4c;
  FUN_0081420c(uVar2,uVar1,0x10e,0x10f,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


