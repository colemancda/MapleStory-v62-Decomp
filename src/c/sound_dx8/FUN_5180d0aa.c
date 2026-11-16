/* FUN_5180d0aa - 0x5180d0aa in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_5180d0aa(void)

{
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_51818148;
  memset(_Dst,0,0xc);
  *_Dst = &PTR_FUN_51819af4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5180d27a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  _Dst[0xc] = 0;
  _Dst[0xd] = 0;
  _Dst[0xe] = 0;
  _Dst[0x12] = 0;
  _Dst[0x13] = 0;
  _Dst[0x14] = 0;
  _Dst[0x10] = &PTR_FUN_51819af0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  *_Dst = &PTR_FUN_51819ae8;
  _Dst[4] = &PTR_LAB_51819ae4;
  _Dst[3] = &PTR_LAB_51819ae0;
  return _Dst;
}


