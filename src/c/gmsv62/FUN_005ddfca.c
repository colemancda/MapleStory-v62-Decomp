/* FUN_005ddfca - 0x005ddfca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005ddfca(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[0xc] = 0;
  _Dst[0x78] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(_Dst + 0x80,8,9,&LAB_005de14a,FUN_004f139a);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  _Dst[0x92] = 0;
  _Dst[0x96] = 0;
  *_Dst = &PTR_FUN_008ecbec;
  return _Dst;
}


