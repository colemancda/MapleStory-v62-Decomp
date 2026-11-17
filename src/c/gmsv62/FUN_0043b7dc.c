/* FUN_0043b7dc - 0x0043b7dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0043b7dc(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[3] = &PTR_LAB_008e8bfc;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0043bc73();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_008e8bf8;
  _Dst[3] = &LAB_008e8bf4;
  return _Dst;
}


