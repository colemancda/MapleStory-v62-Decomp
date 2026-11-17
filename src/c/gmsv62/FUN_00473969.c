/* FUN_00473969 - 0x00473969 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00473969(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e96d0;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  FUN_00475195();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x14] = &PTR_FUN_008e96d4;
  FUN_00475d8f();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0xf] = &PTR_FUN_008e96d4;
  FUN_00475d8f();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[3] = &PTR_FUN_008e96d8;
  FUN_00475e3b();
  if (extraout_ECX[2] != 0xffffffff) {
    closesocket(extraout_ECX[2]);
    extraout_ECX[2] = 0xffffffff;
  }
  DAT_009784c4 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


