/* FUN_008610ec - 0x008610ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_008610ec(void)

{
  int iVar1;
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[3] = *(undefined4 *)(unaff_EBP + 0xc);
  _Dst[4] = *(undefined4 *)(unaff_EBP + 0x10);
  _Dst[5] = *(undefined4 *)(unaff_EBP + 0x14);
  _Dst[6] = *(undefined4 *)(unaff_EBP + 0x18);
  _Dst[7] = *(undefined4 *)(unaff_EBP + 0x1c);
  _Dst[8] = *(undefined4 *)(unaff_EBP + 0x20);
  iVar1 = *(int *)(unaff_EBP + 0x2c);
  _Dst[10] = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  _Dst[0x12] = *(undefined4 *)(unaff_EBP + 8);
  _Dst[0x13] = *(undefined4 *)(unaff_EBP + 0x24);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  _Dst[0x14] = *(undefined4 *)(unaff_EBP + 0x28);
  *_Dst = &PTR_FUN_008f368c;
  FUN_00861180();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


