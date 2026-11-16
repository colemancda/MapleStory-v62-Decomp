/* FUN_50c058a6 - 0x50c058a6 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c058a6(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_50c134d8;
  memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[3] = &PTR_LAB_50c134d4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50c0596f((int)(_Dst + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_50c134d0;
  _Dst[3] = &PTR_LAB_50c134cc;
  return _Dst;
}


