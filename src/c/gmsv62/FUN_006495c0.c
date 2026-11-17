/* FUN_006495c0 - 0x006495c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006495c0(void)

{
  int iVar1;
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *_Dst = &PTR_FUN_008e8cd8;
  FUN_004b857d(iVar1,iVar1 + 0xd3,iVar1 + 0x25b);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


