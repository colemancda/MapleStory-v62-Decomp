/* FUN_006a30b2 - 0x006a30b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006a30b2(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004bc4fa();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x1d] = 0;
  FUN_00414f8b(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x1e] = 0;
  FUN_00414f8b(unaff_EBP + 0xc);
  iVar1 = *(int *)(unaff_EBP + 0x10);
  extraout_ECX[0x1f] = iVar1;
  extraout_ECX[0x21] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *extraout_ECX = &PTR_FUN_008ef184;
  extraout_ECX[1] = &PTR_FUN_008ef138;
  extraout_ECX[2] = &PTR_FUN_008ef134;
  if (iVar1 == 2) {
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0xe3e);
    *(undefined1 *)(unaff_EBP + -4) = 6;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x10,0xe3d);
    *(undefined4 *)(unaff_EBP + -4) = 7;
  }
  FUN_004bc5f0(*puVar2,1,0);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00402676();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


