/* FUN_00693067 - 0x00693067 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00693067(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004bc8b4();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x2f] = 0;
  extraout_ECX[0x33] = 0;
  extraout_ECX[0x34] = 0;
  extraout_ECX[0x35] = 0;
  extraout_ECX[0x36] = 0;
  extraout_ECX[0x37] = 0;
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x39] = 0;
  extraout_ECX[0x41] = 0;
  extraout_ECX[0x42] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0074b9b2();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  *extraout_ECX = &PTR_LAB_008eeb18;
  extraout_ECX[1] = &PTR_FUN_008eeacc;
  extraout_ECX[2] = &PTR_FUN_008eeac8;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x726);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


