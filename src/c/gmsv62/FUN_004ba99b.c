/* FUN_004ba99b - 0x004ba99b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004ba99b(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0046a1fc();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *_Dst = &PTR_FUN_008ea100;
  FUN_0045e3a0(0);
  _Dst[6] = 0;
  _Dst[7] = 0;
  _memset(_Dst + 8,0,8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


