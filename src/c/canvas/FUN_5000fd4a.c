/* FUN_5000fd4a - 0x5000fd4a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * FUN_5000fd4a(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_50014490;
  memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[3] = &PTR_LAB_5001560c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5000fe4e((int)(_Dst + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_50015608;
  _Dst[3] = &PTR_LAB_50015604;
  return _Dst;
}


