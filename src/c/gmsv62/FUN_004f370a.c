/* FUN_004f370a - 0x004f370a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004f370a(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[3] = &PTR_FUN_008eac50;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0044590d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_008eacf8;
  return _Dst;
}


