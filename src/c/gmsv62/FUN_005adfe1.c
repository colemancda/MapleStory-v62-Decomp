/* FUN_005adfe1 - 0x005adfe1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005adfe1(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2d] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  *extraout_ECX = &PTR_FUN_008ec850;
  extraout_ECX[1] = &PTR_FUN_008ec804;
  extraout_ECX[2] = &PTR_FUN_008ec800;
  piVar2 = (int *)FUN_00679e4e(unaff_EBP + -0x10,0xa13);
  puVar1 = (undefined4 *)*piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_004bc5f0(uVar3,1,*(undefined4 *)(unaff_EBP + 8));
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


