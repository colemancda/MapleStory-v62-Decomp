/* FUN_007e0f45 - 0x007e0f45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007e0f45(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  iVar1 = *(int *)(unaff_EBP + 8);
  extraout_ECX[0x1d] = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_FUN_008f1e58;
  extraout_ECX[1] = &PTR_FUN_008f1e0c;
  extraout_ECX[2] = &PTR_FUN_008f1e08;
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x11c6);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004bc5f0(uVar2,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else if (iVar1 == 1) {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x11c9);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004bc5f0(uVar2,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else {
    if (iVar1 != 2) goto LAB_007e1020;
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x11ce);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004bc5f0(uVar2,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  FUN_00402676();
LAB_007e1020:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


