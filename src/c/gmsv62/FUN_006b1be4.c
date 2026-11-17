/* FUN_006b1be4 - 0x006b1be4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006b1be4(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x30] = 0;
  extraout_ECX[0x32] = 0;
  extraout_ECX[0x34] = 0;
  extraout_ECX[0x36] = 0;
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x3a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  *extraout_ECX = &PTR_FUN_008ef894;
  extraout_ECX[1] = &PTR_FUN_008ef848;
  extraout_ECX[2] = &PTR_FUN_008ef844;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x895);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


