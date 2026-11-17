/* FUN_0076315a - 0x0076315a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0076315a(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_0097bea8 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 0x10);
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar3 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *extraout_ECX = &PTR_FUN_008f136c;
  extraout_ECX[1] = &PTR_LAB_008f1320;
  extraout_ECX[2] = &PTR_FUN_008f131c;
  extraout_ECX[0x27] = uVar1;
  FUN_0081420c(uVar3,uVar2,0x9f,0x93,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


