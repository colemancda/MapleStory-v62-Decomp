/* FUN_005294cc - 0x005294cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005294cc(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0045ce85();
  extraout_ECX[6] = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x1d] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00539fbc();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_005295c0();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_005296dc();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_005297e8();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0052991d();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00529a6f();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00529c8d();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00529bd5();
  extraout_ECX[0x752] = 0;
  extraout_ECX[0x75c] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  *extraout_ECX = &PTR_LAB_008eb1f4;
  extraout_ECX[1] = &PTR_LAB_008eb1a8;
  extraout_ECX[2] = &PTR_LAB_008eb1a4;
  extraout_ECX[3] = &PTR_FUN_008eb1a0;
  FUN_0052a819(uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


