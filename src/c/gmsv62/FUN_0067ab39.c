/* FUN_0067ab39 - 0x0067ab39 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0067ab39(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00560122();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x21] = &PTR_FUN_008ee978;
  extraout_ECX[0x26] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x28] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x29] = *(undefined4 *)(unaff_EBP + 0x10);
  extraout_ECX[0x30] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x37] = 0;
  FUN_0067f894(0xe,unaff_EBP + 0xb);
  extraout_ECX[0x4d] = 0;
  extraout_ECX[0x4f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *extraout_ECX = &PTR_FUN_008ee974;
  extraout_ECX[1] = &PTR_LAB_008ee950;
  extraout_ECX[2] = &PTR_FUN_008ee94c;
  uVar1 = FUN_004133b5();
  extraout_ECX[0x33] = uVar1;
  uVar1 = FUN_004133b5();
  extraout_ECX[0x36] = uVar1;
  uVar1 = FUN_004133b5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x3d] = uVar1;
  return extraout_ECX;
}


