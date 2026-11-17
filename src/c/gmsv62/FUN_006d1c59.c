/* FUN_006d1c59 - 0x006d1c59 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006d1c59(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_008140e5();
  puVar1 = extraout_ECX + 0x19;
  DAT_0097bd60 = -(uint)(puVar1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2d] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0087b2f0(extraout_ECX + 0x2e,0x20,3,&LAB_006d1d69,FUN_006d1df3);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00470eb6();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0074b9b2();
  *extraout_ECX = &PTR_FUN_008eff88;
  extraout_ECX[1] = &PTR_FUN_008eff3c;
  extraout_ECX[2] = &PTR_FUN_008eff38;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_0047c974(8,unaff_EBP + -0x14,unaff_EBP + -0x10,puVar1);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
  *puVar1 = 0;
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x14),uVar3,0,0,10,1,uVar2,1);
  extraout_ECX[0x1b] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


