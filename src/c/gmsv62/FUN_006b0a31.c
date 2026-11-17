/* FUN_006b0a31 - 0x006b0a31 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006b0a31(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00789e42(1,3,0x9b,6,1,0,0);
  DAT_0097919c = -(uint)(extraout_ECX != (undefined4 *)0xfffffa88) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x161] = 0;
  uVar1 = extraout_ECX[0x155];
  *extraout_ECX = &PTR_FUN_008ef788;
  extraout_ECX[1] = &PTR_FUN_008ef73c;
  extraout_ECX[2] = &PTR_FUN_008ef738;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0047c974(uVar1,unaff_EBP + -0x14,unaff_EBP + -0x10,extraout_ECX + 0x15c);
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),0xaf,0x130,10,1
               ,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


