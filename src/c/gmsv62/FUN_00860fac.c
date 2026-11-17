/* FUN_00860fac - 0x00860fac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00860fac(void)

{
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
  FUN_0079d48a();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *_Dst = &PTR_FUN_008f3688;
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_005d0f1a(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


