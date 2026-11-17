/* FUN_0046a1af - 0x0046a1af in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0046a1af(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0046a1fc();
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_008e9694;
  return _Dst;
}


