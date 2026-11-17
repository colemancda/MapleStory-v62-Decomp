/* FUN_004da6c1 - 0x004da6c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004da6c1(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0060c3ab();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1cc] = 0;
  extraout_ECX[0x1cd] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x1ce] = 0;
  *extraout_ECX = &PTR_FUN_008ea508;
  extraout_ECX[1] = &PTR_LAB_008ea4bc;
  extraout_ECX[2] = &PTR_FUN_008ea4b8;
  uVar1 = (*DAT_0097b704)();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x1d1] = uVar1;
  return extraout_ECX;
}


