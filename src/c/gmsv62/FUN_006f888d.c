/* FUN_006f888d - 0x006f888d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006f888d(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(_Dst + 3,4,3,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  _Dst[7] = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_006f9f5a();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *_Dst = &PTR_FUN_008f04c8;
  FUN_006f67e0();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_006f9f77();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


