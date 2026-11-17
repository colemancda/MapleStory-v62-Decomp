/* FUN_005e7131 - 0x005e7131 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005e7131(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00414f8b(unaff_EBP + 8);
  FUN_00414f8b(unaff_EBP + 0xc);
  FUN_00414f8b(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0x20) = 0x14;
  *(undefined4 *)(extraout_ECX + 0x10) = 0x14;
  *(undefined4 *)(extraout_ECX + 0x24) = 0xf;
  *(undefined4 *)(extraout_ECX + 0x14) = 0xf;
  *(undefined4 *)(extraout_ECX + 0x18) = 0x14a;
  *(undefined4 *)(extraout_ECX + 0x28) = 0x14a;
  *(undefined4 *)(extraout_ECX + 0x2c) = 100;
  *(undefined4 *)(extraout_ECX + 0x1c) = 100;
  DialogBoxParamA((HINSTANCE)0x0,(LPCSTR)0x6d,(HWND)0x0,FUN_005e71d5,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


