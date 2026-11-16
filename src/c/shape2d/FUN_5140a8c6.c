/* FUN_5140a8c6 - 0x5140a8c6 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * FUN_5140a8c6(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_5140c8b4;
  memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[3] = &PTR_LAB_5140d9ec;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5140a9b7(_Dst + 4);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_5140d9e8;
  _Dst[3] = &PTR_LAB_5140d9e4;
  return _Dst;
}


