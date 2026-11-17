/* FUN_00865a40 - 0x00865a40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00865a40(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[3] = &PTR_LAB_008f36d4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(_Dst + 6,0x1c,5,&LAB_00861fd2,FUN_00861fdd);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_008f36d0;
  _Dst[3] = &PTR_LAB_008f36cc;
  return _Dst;
}


