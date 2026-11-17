/* FUN_0057dc2c - 0x0057dc2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0057dc2c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004de520();
  DAT_0097943c = -(uint)(extraout_ECX + 0x33 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x33] = 0;
  extraout_ECX[0x34] = 0;
  extraout_ECX[0x35] = 0;
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x3a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0048f37f();
  extraout_ECX[0x4c] = 0;
  extraout_ECX[0x4e] = 0;
  extraout_ECX[0x50] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(undefined1 *)(extraout_ECX + 0x51) = 0;
  extraout_ECX[0x52] = 0;
  *extraout_ECX = &PTR_FUN_008ec1e8;
  extraout_ECX[1] = &PTR_LAB_008ec19c;
  extraout_ECX[2] = &PTR_FUN_008ec198;
  FUN_004de5cc(0,0xff,0,0x163,200,0x163,200,0x163,200,0,0,0);
  FUN_004de636(0x162,0x103,0,10,1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x36] = *(undefined4 *)(unaff_EBP + 8);
  return extraout_ECX;
}


