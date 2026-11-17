/* FUN_0060fbb8 - 0x0060fbb8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0060fbb8(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  extraout_ECX[0x1d] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x1e] = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x2a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *extraout_ECX = &PTR_FUN_008ed034;
  extraout_ECX[1] = &PTR_FUN_008ecfe8;
  extraout_ECX[2] = &PTR_FUN_008ecfe4;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x615);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


