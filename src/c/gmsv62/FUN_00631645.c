/* FUN_00631645 - 0x00631645 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00631645(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  FUN_00631bd8();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined ***)(extraout_ECX + 0x5c) = &PTR_FUN_008ecb4c;
  FUN_005d1302();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00631b04();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0062f280();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00627d48();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0063197e();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045f10c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


