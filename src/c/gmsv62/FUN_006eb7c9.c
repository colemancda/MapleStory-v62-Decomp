/* FUN_006eb7c9 - 0x006eb7c9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006eb7c9(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[3] = 1;
  _Dst[4] = 1;
  FUN_0087b2f0(_Dst + 0x15,4,4,&LAB_00450362,FUN_004115cc);
  _Dst[0x19] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(_Dst + 0x1a,4,4,&LAB_0045035c,FUN_00402630);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_008f02ec;
  return _Dst;
}


