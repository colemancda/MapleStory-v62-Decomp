/* FUN_00474e4b - 0x00474e4b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00474e4b(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[6] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 0x10);
  _Dst[3] = *(undefined4 *)(unaff_EBP + 8);
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *_Dst = &PTR_FUN_008e9744;
  _Dst[4] = uVar2;
  FUN_0047598f(uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


