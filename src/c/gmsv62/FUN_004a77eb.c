/* FUN_004a77eb - 0x004a77eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004a77eb(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  extraout_ECX[2] = 0;
  extraout_ECX[1] = 0;
  uVar1 = FUN_00679e4e(unaff_EBP + -0x10,10);
  FUN_00402f41(uVar1);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[6] = 0;
  extraout_ECX[7] = 0;
  extraout_ECX[8] = 0;
  extraout_ECX[9] = 0;
  extraout_ECX[10] = 0;
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xc] = 0;
  extraout_ECX[0xd] = 0;
  extraout_ECX[4] = 0xc;
  extraout_ECX[5] = 0xff000000;
  return extraout_ECX;
}


