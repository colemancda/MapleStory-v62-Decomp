/* FUN_006bef4f - 0x006bef4f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006bef4f(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004bc8b4();
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0074b9b2();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0060142b(0x7fffffff,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *extraout_ECX = &PTR_FUN_008efa58;
  extraout_ECX[1] = &PTR_FUN_008efa0c;
  extraout_ECX[2] = &PTR_FUN_008efa08;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0xd1e);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  if (extraout_ECX[0x23] != 0) {
    FUN_00449913(0);
    extraout_ECX[0x23] = 0;
  }
  FUN_006bf12e(unaff_EBP + 8);
  if (*(int *)(unaff_EBP + 0x18) != 0) {
    FUN_006bf517(*(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                 *(undefined4 *)(unaff_EBP + 0x20));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


