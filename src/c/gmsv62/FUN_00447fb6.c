/* FUN_00447fb6 - 0x00447fb6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00447fb6(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_008140e5();
  _DAT_0097835c = -(uint)(extraout_ECX + 0x19 != (undefined4 *)0x0) & (uint)extraout_ECX;
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x19] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00448190(uVar1);
  extraout_ECX[0x87] = 0;
  extraout_ECX[0x88] = *(undefined4 *)(unaff_EBP + 0x28);
  extraout_ECX[0x89] = *(undefined4 *)(unaff_EBP + 0x24);
  extraout_ECX[0x8b] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  extraout_ECX[0x8c] = 0;
  FUN_00414f8b(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  extraout_ECX[0x8d] = 0;
  FUN_00414f8b(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  extraout_ECX[0x8e] = 0;
  FUN_00414f8b(unaff_EBP + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  extraout_ECX[0x8f] = 0;
  FUN_00414f8b(unaff_EBP + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  extraout_ECX[0x90] = 0;
  FUN_00414f8b(unaff_EBP + 0x20);
  extraout_ECX[0x91] = 0;
  extraout_ECX[0x92] = 0;
  extraout_ECX[0x93] = 0;
  extraout_ECX[0x94] = 0;
  extraout_ECX[0x95] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  *extraout_ECX = &PTR_LAB_008e8d48;
  extraout_ECX[1] = &PTR_LAB_008e8cfc;
  extraout_ECX[2] = &PTR_FUN_008e8cf8;
  FUN_0081420c(800,0,0xe1,0x79,0xc0061508,1,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


