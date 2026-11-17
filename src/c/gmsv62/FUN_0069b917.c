/* FUN_0069b917 - 0x0069b917 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0069b917(void)

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
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x2a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *extraout_ECX = &PTR_FUN_008eeedc;
  extraout_ECX[1] = &PTR_FUN_008eee90;
  extraout_ECX[2] = &PTR_FUN_008eee8c;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0xbe4);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


