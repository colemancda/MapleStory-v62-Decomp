/* FUN_004d89f6 - 0x004d89f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004d89f6(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004bc8b4();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x22] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *extraout_ECX = &PTR_FUN_008ea470;
  extraout_ECX[1] = &PTR_FUN_008ea424;
  extraout_ECX[2] = &PTR_FUN_008ea420;
  extraout_ECX[0x23] = 0;
  uVar1 = FUN_00679d22(unaff_EBP + -0x10,0x1020);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414f8b(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  FUN_004bc5b8(0,0,1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


