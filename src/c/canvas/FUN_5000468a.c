/* FUN_5000468a - 0x5000468a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * FUN_5000468a(void)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_50014494;
  _Dst = extraout_ECX + 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *_Dst = &PTR_LAB_50014490;
  memset(_Dst,0,0xc);
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0;
  extraout_ECX[6] = 0;
  extraout_ECX[7] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[8] = 0;
  extraout_ECX[9] = 0;
  uVar1 = (*DAT_50081bfc)();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[10] = uVar1;
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xc] = 0;
  extraout_ECX[0xd] = 0;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x11] = &PTR_FUN_5001448c;
  extraout_ECX[0x17] = 0;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x18] = 0x1f;
  extraout_ECX[0x16] = &PTR_FUN_50014488;
  extraout_ECX[0x1a] = 100;
  extraout_ECX[0x1b] = 0x18;
  extraout_ECX[0x1c] = 0;
  *extraout_ECX = &PTR_FUN_50014484;
  *_Dst = &PTR_LAB_50014480;
  return extraout_ECX;
}


