/* FUN_006a4a1b - 0x006a4a1b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006a4a1b(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x27] = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x26] = 0;
  *extraout_ECX = &PTR_FUN_008ef3a4;
  extraout_ECX[1] = &PTR_LAB_008ef358;
  extraout_ECX[2] = &PTR_FUN_008ef354;
  _OOBECompleteWnfWaitCallback_28(0xc5,0x30,0x196,0x1a8,0xd2,1,uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


