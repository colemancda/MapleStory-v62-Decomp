/* FUN_0069afd3 - 0x0069afd3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0069afd3(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_0097bce4 = -(uint)(extraout_ECX + 0x19 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x1a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *extraout_ECX = &PTR_FUN_008eee58;
  extraout_ECX[1] = &PTR_LAB_008eee0c;
  extraout_ECX[2] = &PTR_FUN_008eee08;
  FUN_0081420c(0,0,800,0x17,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


