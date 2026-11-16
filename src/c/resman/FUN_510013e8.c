/* FUN_510013e8 - 0x510013e8 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 * FUN_510013e8(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_51005950();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  extraout_ECX[1] = 0;
  if (extraout_ECX + 2 != (undefined4 *)0x0) {
    extraout_ECX[2] = 0;
  }
  *extraout_ECX = &PTR_LAB_51006110;
  extraout_ECX[4] = 0x24;
  extraout_ECX[5] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[6] = 0;
  extraout_ECX[10] = 0x10;
  extraout_ECX[0xb] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0xc] = 0;
  FUN_51001c72(extraout_ECX + 0xc,0);
  extraout_ECX[8] = &PTR_FUN_5100610c;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xf] = 0x1f;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0xd] = &PTR_FUN_51006108;
  extraout_ECX[0x11] = 100;
  extraout_ECX[0x12] = 0x18;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x18] = 0x10;
  extraout_ECX[0x19] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x1a] = 0;
  FUN_51001c72(extraout_ECX + 0x1a,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x16] = &PTR_FUN_5100610c;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1d] = 0x1f;
  extraout_ECX[0x1b] = &PTR_FUN_51006104;
  extraout_ECX[0x1f] = 100;
  extraout_ECX[0x20] = 0x18;
  return extraout_ECX;
}


