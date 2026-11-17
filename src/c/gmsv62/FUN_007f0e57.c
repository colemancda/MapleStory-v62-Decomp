/* FUN_007f0e57 - 0x007f0e57 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007f0e57(void)

{
  undefined4 uVar1;
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  _Dst[3] = &PTR_LAB_008f2124;
  _Dst[4] = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[7] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_007f0f33();
  _Dst[0x44] = 0;
  _Dst[0x45] = 0;
  _Dst[0x46] = 0;
  _Dst[0x4a] = 0;
  _Dst[0x4b] = 0;
  _Dst[0x57] = 0;
  _Dst[0x5a] = 0;
  _Dst[0x5b] = 0;
  _Dst[0x5c] = 0;
  _Dst[100] = 0;
  _Dst[0x66] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_005e3ef5();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *_Dst = &PTR_FUN_008f20e8;
  _Dst[3] = &PTR_FUN_008f2038;
  uVar1 = FUN_007f457a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  _Dst[0x5e] = 0;
  _Dst[0x58] = 0;
  _Dst[0x49] = uVar1;
  return _Dst;
}


