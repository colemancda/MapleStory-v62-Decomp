/* FUN_50c0e68f - 0x50c0e68f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c0e68f(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_50c134d8;
  memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[3] = &PTR_LAB_50c14800;
  _Dst[4] = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = _Dst + 4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_50c0c5a3(_Dst + 6);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_50c147fc;
  _Dst[3] = &PTR_LAB_50c147f8;
  return _Dst;
}


