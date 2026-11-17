/* FUN_006777a4 - 0x006777a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006777a4(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004bc8b4();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2e] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *extraout_ECX = &PTR_FUN_008ee900;
  extraout_ECX[1] = &PTR_FUN_008ee8b4;
  extraout_ECX[2] = &PTR_FUN_008ee8b0;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x729);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


