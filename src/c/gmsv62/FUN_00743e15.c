/* FUN_00743e15 - 0x00743e15 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00743e15(void)

{
  undefined4 uVar1;
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  _Dst[3] = 0;
  _Dst[0xc] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *_Dst = &PTR_FUN_008f1058;
  FUN_00419192(unaff_EBP + 8);
  uVar1 = FUN_004133b5();
  _Dst[6] = uVar1;
  _Dst[7] = *(undefined4 *)(unaff_EBP + 0x10);
  _Dst[8] = *(undefined4 *)(unaff_EBP + 0x14);
  _Dst[9] = *(undefined4 *)(unaff_EBP + 0x18);
  _Dst[10] = *(undefined4 *)(unaff_EBP + 0x1c);
  FUN_004653ef(unaff_EBP + 0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x24) != 0) {
    FUN_00449913(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


