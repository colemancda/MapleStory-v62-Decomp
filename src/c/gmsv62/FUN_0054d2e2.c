/* FUN_0054d2e2 - 0x0054d2e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0054d2e2(void)

{
  undefined4 uVar1;
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  _Dst[4] = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[6] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *_Dst = &PTR_FUN_008eba40;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_00428c11(unaff_EBP + -0x18,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0043443b(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00434d73(0);
  }
  if (_Dst[4] != 0) {
    *(undefined4 *)(_Dst[6] + 4) = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


