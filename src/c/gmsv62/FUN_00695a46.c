/* FUN_00695a46 - 0x00695a46 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00695a46(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2c] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *extraout_ECX = &PTR_FUN_008eec38;
  extraout_ECX[1] = &PTR_FUN_008eebec;
  extraout_ECX[2] = &PTR_FUN_008eebe8;
  FUN_004725b8(uVar1);
  uVar1 = FUN_00679d22(unaff_EBP + 8,0xcff);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004655d4(0);
  FUN_00414f8b(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00414ebb();
  extraout_ECX[0x2d] = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0xce1);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


