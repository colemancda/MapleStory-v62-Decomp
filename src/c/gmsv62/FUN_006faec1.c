/* FUN_006faec1 - 0x006faec1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006faec1(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_008140e5();
  DAT_0097bdbc = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x1a] = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_00705d46();
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x2f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0074b9b2();
  uVar1 = *(undefined4 *)(unaff_EBP + 0x14);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  *extraout_ECX = &PTR_FUN_008f05b8;
  extraout_ECX[1] = &PTR_LAB_008f056c;
  extraout_ECX[2] = &PTR_FUN_008f0568;
  FUN_0081420c(uVar2,uVar1,0x131,0x121,10,1,0,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00705d63();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


