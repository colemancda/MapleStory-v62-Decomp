/* FUN_006f897f - 0x006f897f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006f897f(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(_Dst + 3,4,5,&LAB_00450362,FUN_004115cc);
  _Dst[9] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *_Dst = &PTR_FUN_008f04cc;
  FUN_006f9f5a();
  FUN_006f9f77();
  _Dst[9] = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_006f6a1e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_006f9f77();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


