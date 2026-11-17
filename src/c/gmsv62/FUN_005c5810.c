/* FUN_005c5810 - 0x005c5810 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005c5810(void)

{
  undefined8 uVar1;
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_005d0bc9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_005d0bc9();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_005d0bc9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_005d0bc9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_005d0bc9();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_005d0bc9();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_005d0bc9();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_005d0bc9();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_005d0bc9();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_005d0bc9();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_005d0bc9();
  uVar1 = _DAT_008e9978;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *_Dst = &PTR_FUN_008ecb48;
  FUN_005d0f1a(uVar1);
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_005d0f1a(_DAT_008ecb40);
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_005d0f1a(0);
  FUN_005d0f1a(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


