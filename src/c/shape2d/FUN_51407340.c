/* FUN_51407340 - 0x51407340 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * FUN_51407340(void)

{
  undefined4 uVar1;
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_5140c8b4;
  memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_514099e4();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  _Dst[5] = 0;
  _Dst[7] = 0;
  _Dst[0xe] = 0;
  _Dst[0xf] = 0;
  _Dst[0x10] = 0;
  _Dst[0xc] = &PTR_FUN_5140d8f4;
  *(undefined8 *)(_Dst + 0x12) = 0;
  _Dst[8] = uVar1;
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  _Dst[0xb] = 0;
  _Dst[10] = 0;
  _Dst[0x15] = 0;
  _Dst[0x14] = 0;
  _Dst[0x17] = 0;
  _Dst[9] = uVar1;
  *_Dst = &PTR_FUN_5140d8f0;
  _Dst[4] = &PTR_FUN_5140d8ec;
  _Dst[3] = &PTR_LAB_5140d8e8;
  return _Dst;
}


