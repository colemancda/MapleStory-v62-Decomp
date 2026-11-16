/* FUN_518082e7 - 0x518082e7 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_518082e7(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_51818148;
  memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[3] = &PTR_LAB_518198c0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5180833e(_Dst + 4);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_518198bc;
  _Dst[3] = &PTR_LAB_518198b8;
  return _Dst;
}


